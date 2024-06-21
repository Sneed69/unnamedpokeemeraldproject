#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Avenger halves damage if an ally fainted on the same or previous turn")
{
    s16 damage[4];

    ASSUME(gSpeciesInfo[SPECIES_MAROWAK].innate == ABILITY_AVENGER);

    GIVEN {
        PLAYER(SPECIES_MAROWAK) { Speed(2); }
        PLAYER(SPECIES_ABRA) { HP(1); Speed(1); }
        OPPONENT(SPECIES_SNORUNT) { Speed(4); }
        OPPONENT(SPECIES_MACHOKE) { Speed(3); }
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_STRENGTH, target: playerLeft); }
        TURN { MOVE(opponentRight, MOVE_STRENGTH, target: playerLeft); MOVE(opponentLeft, MOVE_TACKLE, target: playerRight); }
        TURN { MOVE(opponentRight, MOVE_STRENGTH, target: playerLeft); }
        TURN { MOVE(opponentRight, MOVE_STRENGTH, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STRENGTH, opponentRight);
        HP_BAR(playerLeft, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        MESSAGE("Abra fainted!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STRENGTH, opponentRight);
        HP_BAR(playerLeft, captureDamage: &damage[1]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STRENGTH, opponentRight);
        HP_BAR(playerLeft, captureDamage: &damage[2]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STRENGTH, opponentRight);
        HP_BAR(playerLeft, captureDamage: &damage[3]);
    } THEN {
        EXPECT_EQ(damage[0], damage[3]);
        EXPECT_EQ(damage[1], damage[2]);
        EXPECT_MUL_EQ(damage[0], UQ_4_12(0.5), damage[1]);
    }
}
