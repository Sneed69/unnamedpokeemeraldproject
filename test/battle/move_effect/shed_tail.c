#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SHED_TAIL].effect == EFFECT_SHED_TAIL);
}

SINGLE_BATTLE_TEST("Shed Tail creates a Substitute at the cost of 1/2 users maximum HP and switches the user out")
{
    s16 maxHP = 0;
    s16 costHP = 0;

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SHED_TAIL); SEND_OUT(player, 1); }
    } SCENE {
        maxHP = GetMonData(&gPlayerParty[0], MON_DATA_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHED_TAIL, player);
        HP_BAR(player, captureDamage: &costHP);
        MESSAGE("Alakazam shed its tail to create a decoy!");
        SEND_IN_MESSAGE("Abra");
    }THEN {
        EXPECT_EQ(maxHP / 2, costHP);
    }
}

SINGLE_BATTLE_TEST("Shed Tail fails if the user doesn't have enough HP")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { HP(1); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SHED_TAIL); }
    } SCENE {
        MESSAGE("It was too weak to make a Substitute!");
    }
}

SINGLE_BATTLE_TEST("Shed Tail's HP cost can trigger a berry before the user switches out")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_SITRUS_BERRY].battleUsage == EFFECT_ITEM_RESTORE_HP);
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_SITRUS_BERRY); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SHED_TAIL); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHED_TAIL, player);
        MESSAGE("Alakazam's Sitrus Berry restored health!");
        SEND_IN_MESSAGE("Abra");
    }
}

SINGLE_BATTLE_TEST("Shed Tail fails if there are no usable pokemon left")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM)
        PLAYER(SPECIES_ABRA) { HP(0); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SHED_TAIL); }
    } SCENE {
        MESSAGE("Alakazam used Shed Tail!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Shed Tail's HP cost doesn't trigger effects that trigger on damage taken")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SHED_TAIL); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SHED_TAIL, player);
        MESSAGE("Alakazam shed its tail to create a decoy!");
        NOT MESSAGE("Alakazam's Air Balloon popped!");
    }
}
