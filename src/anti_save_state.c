#include "global.h"
#include "rtc.h"
#include "main.h"

static struct Time sAntiCheatTime;

void AntiSaveStateUpdate(void)
{
    struct Time timeDiff;
    
    RtcCalcLocalTime();
    if (gMain.inBattle)
    {
        CalcTimeDifference(&timeDiff, &sAntiCheatTime, &gLocalTime);
        if (timeDiff.seconds > 1 || timeDiff.minutes > 1 || timeDiff.hours > 1 || abs(timeDiff.days) > 1)
            DoSoftReset();
    }
    sAntiCheatTime = gLocalTime;
}
