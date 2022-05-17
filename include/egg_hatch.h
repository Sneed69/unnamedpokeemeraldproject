#ifndef GUARD_EGG_HATCH_H
#define GUARD_EGG_HATCH_H

#include "constants/egg_hatch.h"

void ScriptHatchMon(void);
bool8 CheckDaycareMonReceivedMail(void);
void EggHatch(void);
u32 GetEggStepMultiplier(void);
u16 CountPartyAliveNonEggMons(void);

#endif // GUARD_EGG_HATCH_H
