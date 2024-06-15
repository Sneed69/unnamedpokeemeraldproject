#ifndef GUARD_ROAMER_H
#define GUARD_ROAMER_H

void StopAllRoamers(void);
void InitLatiRoamers(void);
void UpdateLocationHistoryForRoamer(void);
void RoamerMoveToOtherLocationSet(u32 id);
void RoamerMove(u32 index);
bool32 IsRoamerAt(u32 id, u8 mapGroup, u8 mapNum);
void CreateRoamerMonInstance(u32 id);
bool32 TryStartRoamerEncounter(bool32 isWaterEncounter);
void UpdateRoamerHPStatus(struct Pokemon *mon);
void StopRoamer(u32 index);
void GetRoamerLocation(u32 index, u8 *mapGroup, u8 *mapNum);
void MoveAllRoamersToOtherLocationSets(void);
void MoveAllRoamers(void);
bool32 DoesRoamerFlee(void);
bool32 CanRoamerRespawn(u32 index);
void HandleRoamerRespawnTimer(void);
void UpdateRoamerRespawns(u16 days);
bool32 TryAddRoamer(u16 species, u8 level, bool8 doesNotFlee, u16 respawnMode);
bool32 TryAddTerrestrialRoamer(u16 species, u8 level, bool8 doesNotFlee, u16 respawnMode);
bool32 TryAddStalker(u16 species, u8 level, bool8 doesNotFlee, bool8 isTerrestrial, u16 respawnMode);
void TryAddDailyRoamer(void);

extern u8 gEncounteredRoamerIndex;

enum {
    AMPHIBIOUS,
    TERRESTRIAL,
};

enum {
    FLEES,
    DOES_NOT_FLEE,
};

enum {
    NOT_STALKER,
    STALKER,
};

enum {
    NO_RESPAWN,
    DAILY_RESPAWN,
    WEEKLY_RESPAWN,
    INSTANT_RESPAWN,
};

enum {
    NORMAL,
    NOCTURNAL,
    DIURNAL,
};

#endif // GUARD_ROAMER_H
