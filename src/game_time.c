#include "global.h"
#include "game_time.h"
#include "script.h"

enum
{
    STOPPED,
    RUNNING,
};

static u8 sGameTimeCounterState;

void GameTimeCounter_Reset(void)
{
    sGameTimeCounterState = STOPPED;

    gSaveBlock1Ptr->gameTime.hours = STARTING_HOUR;
    gSaveBlock1Ptr->gameTime.minutes = STARTING_MINUTE;
    gSaveBlock1Ptr->gameTime.seconds = 0;
    gSaveBlock1Ptr->gameTimeVBlanks = 0;
}

void GameTimeCounter_Start(void)
{
    sGameTimeCounterState = RUNNING;
}

void GameTimeCounter_Stop(void)
{
    sGameTimeCounterState = STOPPED;
}

void GameTimeCounter_Update(void)
{
    if (sGameTimeCounterState != RUNNING)
        return;
    if (ScriptContext2_IsEnabled())//Check if game is paused
        return;
#if TIME_SCALE <= 60
    gSaveBlock1Ptr->gameTimeVBlanks += TIME_SCALE;

    if (gSaveBlock1Ptr->gameTimeVBlanks < 60)
        return;
#if TIME_DEBUG
    if (gSaveBlock1Ptr->gameTime.seconds / TIME_SCALE < 60)
        mgba_printf(MGBA_LOG_DEBUG, "Time %d %d:%d:%d",gSaveBlock1Ptr->gameTime.days, gSaveBlock1Ptr->gameTime.hours, gSaveBlock1Ptr->gameTime.minutes, gSaveBlock1Ptr->gameTime.seconds);
#endif
    
    gSaveBlock1Ptr->gameTimeVBlanks -= 60;
    gSaveBlock1Ptr->gameTime.seconds++;

    if (gSaveBlock1Ptr->gameTime.seconds < 60)
        return;

    gSaveBlock1Ptr->gameTime.seconds -= 60;
    gSaveBlock1Ptr->gameTime.minutes++;

    if (gSaveBlock1Ptr->gameTime.minutes < 60)
        return;

    gSaveBlock1Ptr->gameTime.minutes -= 60;
    gSaveBlock1Ptr->gameTime.hours++;
    
    if (gSaveBlock1Ptr->gameTime.hours < 24)
        return;

    gSaveBlock1Ptr->gameTime.hours -= 24;
    gSaveBlock1Ptr->gameTime.days++;
#else
    gSaveBlock1Ptr->gameTimeVBlanks += TIME_SCALE;

    if (gSaveBlock1Ptr->gameTimeVBlanks < 60)
        return;
    
    gSaveBlock1Ptr->gameTime.seconds += gSaveBlock1Ptr->gameTimeVBlanks / 60;
    gSaveBlock1Ptr->gameTimeVBlanks %= 60;
    
    if (gSaveBlock1Ptr->gameTime.seconds < 60)
        return;

    gSaveBlock1Ptr->gameTime.minutes += gSaveBlock1Ptr->gameTime.seconds / 60;
    gSaveBlock1Ptr->gameTime.seconds %= 60;

    if (gSaveBlock1Ptr->gameTime.minutes < 60)
        return;

    gSaveBlock1Ptr->gameTime.hours += gSaveBlock1Ptr->gameTime.minutes / 60;
    gSaveBlock1Ptr->gameTime.minutes %= 60;
    
    if (gSaveBlock1Ptr->gameTime.hours < 24)
        return;

    gSaveBlock1Ptr->gameTime.days += gSaveBlock1Ptr->gameTime.hours / 24;
    gSaveBlock1Ptr->gameTime.hours %= 24;
#endif
}

void CalculateTimeDifference(struct Time *result, struct Time *t1, struct Time *t2)
{
    result->seconds = t2->seconds - t1->seconds;
    result->minutes = t2->minutes - t1->minutes;
    result->hours = t2->hours - t1->hours;
    result->days = t2->days - t1->days;

    if (result->seconds < 0)
    {
        result->seconds += 60;
        --result->minutes;
    }

    if (result->minutes < 0)
    {
        result->minutes += 60;
        --result->hours;
    }

    if (result->hours < 0)
    {
        result->hours += 24;
        --result->days;
    }
}

void IncrementGameTime(u32 addedSeconds)
{
    u32 seconds = gSaveBlock1Ptr->gameTime.seconds;
    u32 minutes = gSaveBlock1Ptr->gameTime.minutes;
    u32 hours = gSaveBlock1Ptr->gameTime.hours;
    u32 days = gSaveBlock1Ptr->gameTime.days;
    
    seconds += addedSeconds;
    minutes += seconds / 60;
    seconds %= 60;
    hours += minutes / 60;
    minutes %= 60;
    days += hours / 24;
    hours %= 24;

    gSaveBlock1Ptr->gameTime.seconds = seconds;
    gSaveBlock1Ptr->gameTime.minutes = minutes;
    gSaveBlock1Ptr->gameTime.hours = hours;
    gSaveBlock1Ptr->gameTime.days = days;
}
