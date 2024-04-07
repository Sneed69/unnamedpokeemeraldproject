#ifndef GUARD_CONSTANTS_TMS_HMS_INC
#define GUARD_CONSTANTS_TMS_HMS_INC

#include "constants/tms_hms.h"

/* Expands to:
* enum_start ITEM_TM01
* enum ITEM_TM_FOCUS_PUNCH
* ...*/
#define EQUIV_TM(id) enum ITEM_TM_ ## id;
	enum_start ITEM_TM01
FOREACH_TM(EQUIV_TM)
#undef EQUIV_TM

#endif @ GUARD_CONSTANTS_TMS_HMS_INC
