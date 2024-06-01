#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_UPROAR].effect == EFFECT_UPROAR);
}

DOUBLE_BATTLE_TEST("Uproar status causes sleeping pokemon to wake up during an attack")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM) { Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_VOLTORB) { Ability(ABILITY_SOUNDPROOF); Status1(STATUS1_SLEEP); }
        OPPONENT(SPECIES_ALAKAZAM) { Status1(STATUS1_SLEEP); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_UPROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPROAR, playerLeft);
        HP_BAR(opponentRight);
        MESSAGE("Alakazam woke up in the Uproar!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        MESSAGE("Foe Voltorb woke up in the Uproar!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        MESSAGE("Foe Alakazam woke up in the Uproar!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
    }
}
