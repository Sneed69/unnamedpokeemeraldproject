#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Versatile uses Attack for special moves if it's higher")
{
    s16 damage[2];

    ASSUME(gMovesInfo[MOVE_JUDGMENT].power == gMovesInfo[MOVE_STRENGTH].power);

    GIVEN {
        PLAYER(SPECIES_KECLEON) { Ability(ABILITY_VERSATILE); Attack(90); SpAttack(60); }
        OPPONENT(SPECIES_ALAKAZAM) { HP(400); Defense(90); SpDefense(90); }
    } WHEN {
        TURN { MOVE(player, MOVE_STRENGTH); }
        TURN { MOVE(player, MOVE_JUDGMENT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STRENGTH, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_JUDGMENT, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
    }
}

SINGLE_BATTLE_TEST("Versatile uses Attack for physical moves if it's higher")
{
    s16 damage[2];

    ASSUME(gMovesInfo[MOVE_JUDGMENT].power == gMovesInfo[MOVE_STRENGTH].power);

    GIVEN {
        PLAYER(SPECIES_KECLEON) { Ability(ABILITY_VERSATILE); Attack(60); SpAttack(90); }
        OPPONENT(SPECIES_ALAKAZAM) { HP(400); Defense(90); SpDefense(90); }
    } WHEN {
        TURN { MOVE(player, MOVE_STRENGTH); }
        TURN { MOVE(player, MOVE_JUDGMENT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STRENGTH, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_JUDGMENT, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_EQ(damage[0], damage[1]);
    }
}
