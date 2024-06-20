#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Hone Claws increases Attack and Accuracy by one stage each")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_HONE_CLAWS].effect == EFFECT_ATTACK_ACCURACY_UP);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_HONE_CLAWS); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HONE_CLAWS, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Alakazam's Attack rose!");
        MESSAGE("Alakazam's accuracy rose!");
    }
}
