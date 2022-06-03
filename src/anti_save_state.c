#include "global.h"
#include "rtc.h"
#include "main.h"

static struct Time sAntiSaveStateTime;

void AntiSaveStateUpdate(void)
{
    RtcCalcLocalTime();
    if (gMain.inBattle)
    {
        struct Time diff;

        CalcTimeDifference(&diff, &sAntiSaveStateTime, &gLocalTime);
        if ((diff.seconds > 1 || diff.minutes != 0 || diff.hours != 0 || diff.days != 0)
            && !(diff.seconds == 1 && diff.minutes == 0 && diff.hours == 23 && diff.days == -1) // DLST winter
            && !(diff.seconds == 1 && diff.minutes == 0 && diff.hours == 1 && diff.days == 0)) // DLST summer
            DoSoftReset();
    }
    sAntiSaveStateTime = gLocalTime;
}
