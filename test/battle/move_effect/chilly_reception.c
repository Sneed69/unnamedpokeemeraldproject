#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_CHILLY_RECEPTION].effect == EFFECT_CHILLY_RECEPTION);
}

SINGLE_BATTLE_TEST("Chilly Reception sets up snow and switches the user out")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING);
        PLAYER(SPECIES_SLOWPOKE);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
        MESSAGE("Slowking went back to  1!{PAUSE 16}");
        SEND_IN_MESSAGE("Slowpoke");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SNOW_CONTINUES);
    }
}

SINGLE_BATTLE_TEST("Chilly Reception switches the user out, even if the weather does not change")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING);
        PLAYER(SPECIES_SLOWPOKE);
        OPPONENT(SPECIES_KYOGRE)  { Item(ITEM_BLUE_ORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("There is no relief from this heavy rain!");
        MESSAGE("Slowking went back to  1!{PAUSE 16}");
        SEND_IN_MESSAGE("Slowpoke");
        MESSAGE("Rain continues to fall.");
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
        NOT MESSAGE("Slowking went back to  1");
    }
}

SINGLE_BATTLE_TEST("Chilly Reception does not switch the user out if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING);
        PLAYER(SPECIES_SLOWPOKE) { HP(0); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
        NOT MESSAGE("Slowking went back to  1");
    }
}

SINGLE_BATTLE_TEST("Chilly Reception changes the weather, even if the user cannot switch out")
{
    GIVEN {
        PLAYER(SPECIES_SLOWKING);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CHILLY_RECEPTION); }
    } SCENE {
        MESSAGE("Slowking is preparing to tell a chillingly bad joke!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHILLY_RECEPTION, player);
        MESSAGE("It started to snow!");
        NOT MESSAGE("Slowking went back to  1");
    }
}

