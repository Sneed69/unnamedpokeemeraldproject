#include "global.h"
#include "rtc.h"
#include "main.h"

static struct Time sAntiSaveStateTime;

void AntiSaveStateUpdate(void)
{
    RtcCalcLocalTime();
    if (gMain.inBattle)
    {
        s32 diff = abs(sAntiSaveStateTime.days - gLocalTime.days);
        if (diff > 1)
            DoSoftReset();
        diff = abs(sAntiSaveStateTime.hours - gLocalTime.hours);
        if (diff > 2 && diff != 23) // 2 to account for daylight saving time change
            DoSoftReset();
        diff = abs(sAntiSaveStateTime.minutes - gLocalTime.minutes);
        if (diff > 1 && diff != 59)
            DoSoftReset();
        diff = abs(sAntiSaveStateTime.seconds - gLocalTime.seconds);
        if (diff > 1 && diff != 59)
            DoSoftReset();
    }
    sAntiSaveStateTime = gLocalTime;
}
