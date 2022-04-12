#ifndef GUARD_ROAMER_H
#define GUARD_ROAMER_H

void ClearRoamerData(void);
void ClearRoamerLocationData(void);
void InitRoamer(void);
void UpdateLocationHistoryForRoamer(void);
void RoamerMoveToOtherLocationSet(u8 id);
void RoamerMove(u8 index);
bool8 IsRoamerAt(u8 id, u8 mapGroup, u8 mapNum);
void CreateRoamerMonInstance(u8 id);
u8 TryStartRoamerEncounter(void);
void UpdateRoamerHPStatus(u8 index, struct Pokemon *mon);
void SetRoamerInactive(u8 index);
void GetRoamerLocation(u8 index, u8 *mapGroup, u8 *mapNum);

#endif // GUARD_ROAMER_H
