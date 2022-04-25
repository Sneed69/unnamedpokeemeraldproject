#ifndef GUARD_Game_TIME_H
#define GUARD_Game_TIME_H

#define TIME_SCALE 600
#define STARTING_HOUR 9
#define STARTING_MINUTE 45

void GameTimeCounter_Reset(void);
void GameTimeCounter_Start(void);
void GameTimeCounter_Stop(void);
void GameTimeCounter_Update(void);
void CalculateTimeDifference(struct Time *result, struct Time *t1, struct Time *t2);

#endif // GUARD_Game_TIME_H
