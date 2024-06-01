#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SUBSTITUTE].effect == EFFECT_SUBSTITUTE);
}

SINGLE_BATTLE_TEST("Substitute creates a Substitute at the cost of 1/4 users maximum HP")
{
    s16 maxHP = 0;
    s16 costHP = 0;

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); }
    } SCENE {
        maxHP = GetMonData(&gPlayerParty[0], MON_DATA_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        HP_BAR(player, captureDamage: &costHP);
        MESSAGE("Alakazam made a Substitute!");
    }THEN {
        EXPECT_EQ(maxHP / 4, costHP);
    }
}

SINGLE_BATTLE_TEST("Substitute fails if the user doesn't have enough HP")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { HP(1); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); }
    } SCENE {
        MESSAGE("It was too weak to make a Substitute!");
    }
}

SINGLE_BATTLE_TEST("Substitute's HP cost can trigger a berry")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_SITRUS_BERRY].battleUsage == EFFECT_ITEM_RESTORE_HP);
        PLAYER(SPECIES_ALAKAZAM) { HP(300); Item(ITEM_SITRUS_BERRY); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        MESSAGE("Alakazam's Sitrus Berry restored health!");
    }
}

SINGLE_BATTLE_TEST("Substitute's HP cost doesn't trigger effects that trigger on damage taken")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, player);
        MESSAGE("Alakazam made a Substitute!");
        NOT MESSAGE("Alakazam's Air Balloon popped!");
    }
}
