#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TELEKINESIS].effect == EFFECT_TELEKINESIS);
}

SINGLE_BATTLE_TEST("Telekinesis makes the target unable to avoid any attacks made against it")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MINIMIZE].effect == EFFECT_MINIMIZE); // Raises evs by 2
        ASSUME(gMovesInfo[MOVE_SCREECH].accuracy < 100);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(player, MOVE_TELEKINESIS); MOVE(opponent, MOVE_MINIMIZE); }
        TURN { MOVE(player, MOVE_SCREECH, hit:FALSE); }
    } SCENE {
        MESSAGE("Alakazam used Telekinesis!");
        MESSAGE("Foe Abra was hurled into the air!");
        MESSAGE("Foe Abra used Minimize!");
        MESSAGE("Alakazam used Screech!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SCREECH, player);
        NOT MESSAGE("Alakazam's attack missed!");
    }
}

SINGLE_BATTLE_TEST("Telekinesis ends after 3 turns")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(player, MOVE_TELEKINESIS); }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Alakazam used Telekinesis!");
        MESSAGE("Foe Abra was hurled into the air!");
        MESSAGE("Alakazam used Celebrate!");
        MESSAGE("Alakazam used Celebrate!");
        MESSAGE("Foe Abra was freed from the telekinesis!");
    }
}

SINGLE_BATTLE_TEST("Telekinesis makes the target immune to Ground-type attacks")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BULLDOZE].type == TYPE_GROUND);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(player, MOVE_BULLDOZE); }
        TURN { MOVE(player, MOVE_TELEKINESIS); }
        TURN { MOVE(player, MOVE_BULLDOZE); }
    } SCENE {
        MESSAGE("Alakazam used Bulldoze!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BULLDOZE, player);
        HP_BAR(opponent);
        MESSAGE("Alakazam used Telekinesis!");
        MESSAGE("Foe Abra was hurled into the air!");
        MESSAGE("Alakazam used Bulldoze!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BULLDOZE, player);
            HP_BAR(opponent);
        }
        MESSAGE("It doesn't affect Foe Abra…");
    }
}
