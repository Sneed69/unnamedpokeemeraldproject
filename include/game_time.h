#ifndef GUARD_Game_TIME_H
#define GUARD_Game_TIME_H

#define TIME_SCALE 9
#define STARTING_DAY THURSDAY
#define STARTING_HOUR 9
#define STARTING_MINUTE 45
#define UNSCALED_SECONDS_PER_BATTLE_TURN 6
#define SECONDS_PER_BATTLE_TURN (UNSCALED_SECONDS_PER_BATTLE_TURN * TIME_SCALE)
#define TIME_DEBUG FALSE

void GameTimeCounter_Reset(void);
void GameTimeCounter_Start(void);
void GameTimeCounter_Stop(void);
void GameTimeCounter_Update(void);
void CalculateTimeDifference(struct Time *result, struct Time *t1, struct Time *t2);
void IncrementGameTime(u32 addedSeconds);

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
    DAY_COUNT,
};

#endif // GUARD_Game_TIME_H
