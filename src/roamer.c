#include "global.h"
#include "pokedex.h"
#include "event_data.h"
#include "pokemon.h"
#include "random.h"
#include "roamer.h"

// Despite having a variable to track it, the roamer is
// hard-coded to only ever be in map group 0
#define ROAMER_MAP_GROUP 0

enum
{
    MAP_GRP, // map group
    MAP_NUM, // map number
};

#define ROAMER(x) (&gSaveBlock1Ptr->roamer[x])
EWRAM_DATA static u8 sLocationHistory[ROAMER_COUNT][3][2] = {0};
EWRAM_DATA static u8 sRoamerLocation[ROAMER_COUNT][2] = {0};

#define ___ MAP_NUM(UNDEFINED) // For empty spots in the location table

// Note: There are two potential softlocks that can occur with this table if its maps are
//       changed in particular ways. They can be avoided by ensuring the following:
//       - There must be at least 2 location sets that start with a different map,
//         i.e. every location set cannot start with the same map. This is because of
//         the while loop in RoamerMoveToOtherLocationSet.
//       - Each location set must have at least 3 unique maps. This is because of
//         the while loop in RoamerMove. In this loop the first map in the set is
//         ignored, and an additional map is ignored if the roamer was there recently.
//       - Additionally, while not a softlock, it's worth noting that if for any
//         map in the location table there is not a location set that starts with
//         that map then the roamer will be significantly less likely to move away
//         from that map when it lands there.
static const u8 sRoamerLocations[][6] =
{
    { MAP_NUM(ROUTE101), MAP_NUM(ROUTE102), MAP_NUM(ROUTE103), ___, ___, ___ },
    { MAP_NUM(ROUTE102), MAP_NUM(ROUTE101), MAP_NUM(ROUTE103), MAP_NUM(ROUTE104), ___, ___ },
    { MAP_NUM(ROUTE103), MAP_NUM(ROUTE101), MAP_NUM(ROUTE102), MAP_NUM(ROUTE110), ___, ___ },
    { MAP_NUM(ROUTE104), MAP_NUM(ROUTE102), MAP_NUM(ROUTE105), MAP_NUM(ROUTE116), MAP_NUM(ROUTE115), ___ },
    { MAP_NUM(ROUTE105), MAP_NUM(ROUTE104), MAP_NUM(ROUTE106), ___, ___, ___ },
    { MAP_NUM(ROUTE106), MAP_NUM(ROUTE105), MAP_NUM(ROUTE107), ___, ___, ___ },
    { MAP_NUM(ROUTE107), MAP_NUM(ROUTE106), MAP_NUM(ROUTE108), ___, ___, ___ },
    { MAP_NUM(ROUTE108), MAP_NUM(ROUTE107), MAP_NUM(ROUTE109), ___, ___, ___ },
    { MAP_NUM(ROUTE109), MAP_NUM(ROUTE108), MAP_NUM(ROUTE110), MAP_NUM(ROUTE134), ___, ___ },
    { MAP_NUM(ROUTE110), MAP_NUM(ROUTE111), MAP_NUM(ROUTE117), MAP_NUM(ROUTE118), MAP_NUM(ROUTE109), MAP_NUM(ROUTE103) },
    { MAP_NUM(ROUTE111), MAP_NUM(ROUTE110), MAP_NUM(ROUTE117), MAP_NUM(ROUTE118), MAP_NUM(ROUTE113), ___ },
    { MAP_NUM(ROUTE113), MAP_NUM(ROUTE111), MAP_NUM(ROUTE114), ___, ___, ___ },
    { MAP_NUM(ROUTE114), MAP_NUM(ROUTE113), MAP_NUM(ROUTE115), ___, ___, ___ },
    { MAP_NUM(ROUTE115), MAP_NUM(ROUTE114), MAP_NUM(ROUTE116), MAP_NUM(ROUTE104), ___, ___ },
    { MAP_NUM(ROUTE116), MAP_NUM(ROUTE115), MAP_NUM(ROUTE117), MAP_NUM(ROUTE104), ___, ___ },
    { MAP_NUM(ROUTE117), MAP_NUM(ROUTE111), MAP_NUM(ROUTE110), MAP_NUM(ROUTE118), MAP_NUM(ROUTE116), ___ },
    { MAP_NUM(ROUTE118), MAP_NUM(ROUTE117), MAP_NUM(ROUTE110), MAP_NUM(ROUTE111), MAP_NUM(ROUTE119), MAP_NUM(ROUTE123) },
    { MAP_NUM(ROUTE119), MAP_NUM(ROUTE118), MAP_NUM(ROUTE120), ___, ___, ___ },
    { MAP_NUM(ROUTE120), MAP_NUM(ROUTE119), MAP_NUM(ROUTE121), ___, ___, ___ },
    { MAP_NUM(ROUTE121), MAP_NUM(ROUTE120), MAP_NUM(ROUTE122), MAP_NUM(ROUTE123), ___, ___ },
    { MAP_NUM(ROUTE122), MAP_NUM(ROUTE121), MAP_NUM(ROUTE123), ___, ___, ___ },
    { MAP_NUM(ROUTE123), MAP_NUM(ROUTE122), MAP_NUM(ROUTE118), ___, ___, ___ },
    { MAP_NUM(ROUTE124), MAP_NUM(ROUTE121), MAP_NUM(ROUTE125), MAP_NUM(ROUTE126), ___, ___ },
    { MAP_NUM(ROUTE125), MAP_NUM(ROUTE124), MAP_NUM(ROUTE127), ___, ___, ___ },
    { MAP_NUM(ROUTE126), MAP_NUM(ROUTE124), MAP_NUM(ROUTE127), ___, ___, ___ },
    { MAP_NUM(ROUTE127), MAP_NUM(ROUTE125), MAP_NUM(ROUTE126), MAP_NUM(ROUTE128), ___, ___ },
    { MAP_NUM(ROUTE128), MAP_NUM(ROUTE127), MAP_NUM(ROUTE129), ___, ___, ___ },
    { MAP_NUM(ROUTE129), MAP_NUM(ROUTE128), MAP_NUM(ROUTE130), ___, ___, ___ },
    { MAP_NUM(ROUTE130), MAP_NUM(ROUTE129), MAP_NUM(ROUTE131), ___, ___, ___ },
    { MAP_NUM(ROUTE131), MAP_NUM(ROUTE130), MAP_NUM(ROUTE132), ___, ___, ___ },
    { MAP_NUM(ROUTE132), MAP_NUM(ROUTE131), MAP_NUM(ROUTE133), ___, ___, ___ },
    { MAP_NUM(ROUTE133), MAP_NUM(ROUTE132), MAP_NUM(ROUTE134), ___, ___, ___ },
    { MAP_NUM(ROUTE134), MAP_NUM(ROUTE133), MAP_NUM(ROUTE110), MAP_NUM(ROUTE109), ___, ___ },
    { ___, ___, ___, ___, ___, ___ },
};

#undef ___
#define NUM_LOCATION_SETS (ARRAY_COUNT(sRoamerLocations) - 1)
#define NUM_LOCATIONS_PER_SET (ARRAY_COUNT(sRoamerLocations[0]))

void ClearRoamerData(void)
{
	u8 i;
	for (i = 0; i < ROAMER_COUNT; i++)
		memset(ROAMER(i), 0, sizeof(*ROAMER(i)));
}

void ClearRoamerLocationData(void)
{
    u8 i, j;

	for (i = 0; i < ROAMER_COUNT; i++)
	{
		for (j = 0; j < ARRAY_COUNT(sLocationHistory); j++)
		{
			sLocationHistory[i][j][MAP_GRP] = 0;
			sLocationHistory[i][j][MAP_NUM] = 0;
		}

		sRoamerLocation[i][MAP_GRP] = 0;
		sRoamerLocation[i][MAP_NUM] = 0;
	}
}

static void CreateInitialRoamerMon(u16 species, u8 index)
{
    CreateMon(&gEnemyParty[0], species, 70, 31, FALSE, 0, OT_ID_PLAYER_ID, 0);
    ROAMER(index)->species = species;
    ROAMER(index)->level = 70;
    ROAMER(index)->status = 0;
    ROAMER(index)->active = TRUE;
    ROAMER(index)->ivs = GetMonData(&gEnemyParty[0], MON_DATA_IVS);
    ROAMER(index)->personality = GetMonData(&gEnemyParty[0], MON_DATA_PERSONALITY);
    ROAMER(index)->hp = GetMonData(&gEnemyParty[0], MON_DATA_MAX_HP);
    ROAMER(index)->cool = GetMonData(&gEnemyParty[0], MON_DATA_COOL);
    ROAMER(index)->beauty = GetMonData(&gEnemyParty[0], MON_DATA_BEAUTY);
    ROAMER(index)->cute = GetMonData(&gEnemyParty[0], MON_DATA_CUTE);
    ROAMER(index)->smart = GetMonData(&gEnemyParty[0], MON_DATA_SMART);
    ROAMER(index)->tough = GetMonData(&gEnemyParty[0], MON_DATA_TOUGH);
    sRoamerLocation[index][MAP_GRP] = ROAMER_MAP_GROUP;
    sRoamerLocation[index][MAP_NUM] = sRoamerLocations[Random() % NUM_LOCATION_SETS][0];
	GetSetPokedexFlag(SpeciesToNationalPokedexNum(ROAMER(index)->species), FLAG_SET_SEEN);
}

// gSpecialVar_0x8004 here corresponds to the options in the multichoice MULTI_TV_LATI (0 for 'Red', 1 for 'Blue')
void InitRoamer(void)
{
    ClearRoamerData();
    ClearRoamerLocationData();
    CreateInitialRoamerMon(SPECIES_LATIAS, 0);
    CreateInitialRoamerMon(SPECIES_LATIOS, 1);
}

void UpdateLocationHistoryForRoamer(void)
{
	u8 i;
	for (i = 0; i < ROAMER_COUNT; i++)
	{
		sLocationHistory[i][2][MAP_GRP] = sLocationHistory[i][1][MAP_GRP];
		sLocationHistory[i][2][MAP_NUM] = sLocationHistory[i][1][MAP_NUM];

		sLocationHistory[i][1][MAP_GRP] = sLocationHistory[i][0][MAP_GRP];
		sLocationHistory[i][1][MAP_NUM] = sLocationHistory[i][0][MAP_NUM];

		sLocationHistory[i][0][MAP_GRP] = gSaveBlock1Ptr->location.mapGroup;
		sLocationHistory[i][0][MAP_NUM] = gSaveBlock1Ptr->location.mapNum;
	}
}

void RoamerMoveToOtherLocationSet(u8 index)
{
    u8 mapNum = 0;
	if (!ROAMER(index)->active)
		return;

	sRoamerLocation[index][MAP_GRP] = ROAMER_MAP_GROUP;

	// Choose a location set that starts with a map
	// different from the roamer's current map
	while (1)
	{
		mapNum = sRoamerLocations[Random() % NUM_LOCATION_SETS][0];
		if (sRoamerLocation[index][MAP_NUM] != mapNum)
		{
			sRoamerLocation[index][MAP_NUM] = mapNum;
			return;
		}
	}
}

void RoamerMove(u8 index)
{
    u8 locSet = 0;
	if ((Random() % 16) == 0)
	{
		RoamerMoveToOtherLocationSet(index);
	}
	else
	{
		if (!ROAMER(index)->active)
			return;

		while (locSet < NUM_LOCATION_SETS)
		{
			// Find the location set that starts with the roamer's current map
			if (sRoamerLocation[index][MAP_NUM] == sRoamerLocations[locSet][0])
			{
				u8 mapNum;
				while (1)
				{
					// Choose a new map (excluding the first) within this set
					// Also exclude a map if the roamer was there 2 moves ago
					mapNum = sRoamerLocations[locSet][(Random() % (NUM_LOCATIONS_PER_SET - 1)) + 1];
					if (!(sLocationHistory[index][2][MAP_GRP] == ROAMER_MAP_GROUP
					   && sLocationHistory[index][2][MAP_NUM] == mapNum)
					   && mapNum != MAP_NUM(UNDEFINED))
						break;
				}
				sRoamerLocation[index][MAP_NUM] = mapNum;
				return;
			}
			locSet++;
		}
	}
}

bool8 IsRoamerAt(u8 index, u8 mapGroup, u8 mapNum)
{
    if (ROAMER(index)->active && mapGroup == sRoamerLocation[index][MAP_GRP] && mapNum == sRoamerLocation[index][MAP_NUM])
        return TRUE;
    else
        return FALSE;
}

void CreateRoamerMonInstance(u8 index)
{
    u32 status;
    struct Pokemon *mon = &gEnemyParty[0];
    ZeroEnemyPartyMons();
    CreateMonWithIVsPersonality(mon, ROAMER(index)->species, ROAMER(index)->level, ROAMER(index)->ivs, ROAMER(index)->personality);
// The roamer's status field is u8, but SetMonData expects status to be u32, so will set the roamer's status
// using the status field and the following 3 bytes (cool, beauty, and cute).
#ifdef BUGFIX
    status = ROAMER(index)->status;
    SetMonData(mon, MON_DATA_STATUS, &status);
#else
    SetMonData(mon, MON_DATA_STATUS, &ROAMER(index)->status);
#endif
    SetMonData(mon, MON_DATA_HP, &ROAMER(index)->hp);
    SetMonData(mon, MON_DATA_COOL, &ROAMER(index)->cool);
    SetMonData(mon, MON_DATA_BEAUTY, &ROAMER(index)->beauty);
    SetMonData(mon, MON_DATA_CUTE, &ROAMER(index)->cute);
    SetMonData(mon, MON_DATA_SMART, &ROAMER(index)->smart);
    SetMonData(mon, MON_DATA_TOUGH, &ROAMER(index)->tough);
}

u8 TryStartRoamerEncounter(void)
{
	u8 i;
	for (i = 0; i < ROAMER_COUNT; i++)
    {
		if (IsRoamerAt(i, gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum) == TRUE && (Random() % 4) == 0)
		{
			CreateRoamerMonInstance(i);
			return i;
		}
	}
	return ROAMER_COUNT;
}

void UpdateRoamerHPStatus(u8 index, struct Pokemon *mon)
{
    ROAMER(index)->hp = GetMonData(mon, MON_DATA_HP);
    ROAMER(index)->status = GetMonData(mon, MON_DATA_STATUS);

    RoamerMoveToOtherLocationSet(index);
}

void SetRoamerInactive(u8 index)
{
    ROAMER(index)->active = FALSE;
}

void GetRoamerLocation(u8 index, u8 *mapGroup, u8 *mapNum)
{
    *mapGroup = sRoamerLocation[index][MAP_GRP];
    *mapNum = sRoamerLocation[index][MAP_NUM];
}
