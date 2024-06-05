#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SPARKLING_ARIA].additionalEffects->moveEffect == MOVE_EFFECT_REMOVE_STATUS);
    ASSUME(gMovesInfo[MOVE_SPARKLING_ARIA].argument == STATUS1_BURN);
    ASSUME(gMovesInfo[MOVE_SPARKLING_ARIA].soundMove == TRUE);
}

DOUBLE_BATTLE_TEST("Sparkling Aria cures burns from all Pokemon on the field and behind substitutes")
{
    GIVEN {
        PLAYER(SPECIES_LAPRAS);
        PLAYER(SPECIES_ALAKAZAM) { Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_ALAKAZAM) { Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_ABRA) { Status1(STATUS1_BURN); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SUBSTITUTE); MOVE(opponentRight, MOVE_CELEBRATE); MOVE(playerRight, MOVE_CELEBRATE); MOVE(playerLeft, MOVE_SPARKLING_ARIA); }
    } SCENE {
        MESSAGE("Foe Alakazam's burn was healed.");
        MESSAGE("Alakazam's burn was healed.");
        MESSAGE("Foe Abra's burn was healed.");
    }
}
