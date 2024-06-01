#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Freeze has a 20% chance of being thawed")
{
    PASSES_RANDOMLY(20, 100, RNG_FROZEN);
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        STATUS_ICON(player, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("Freeze is thawed by opponent's Fire-type attacks")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EMBER].type == TYPE_FIRE);
        PLAYER(SPECIES_ALAKAZAM) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EMBER); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Foe Alakazam used Ember!");
        MESSAGE("Alakazam was defrosted!");
        STATUS_ICON(player, none: TRUE);
    }
}

SINGLE_BATTLE_TEST("Freeze is thawed by user's Flame Wheel")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_FLAME_WHEEL].thawsUser);
        PLAYER(SPECIES_ALAKAZAM) { Status1(STATUS1_FREEZE); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_FLAME_WHEEL); }
    } SCENE {
        MESSAGE("Alakazam was defrosted by Flame Wheel!");
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Alakazam used Flame Wheel!");
    }
}
