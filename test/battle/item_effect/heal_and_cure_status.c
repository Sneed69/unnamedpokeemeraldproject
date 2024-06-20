#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_FULL_RESTORE].battleUsage == EFFECT_ITEM_HEAL_AND_CURE_STATUS);
}

SINGLE_BATTLE_TEST("Full Restore restores a battler's HP and cures any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    PARAMETRIZE { status = STATUS1_NONE; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { HP(1); MaxHP(300); Status1(status); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 0); }
    } SCENE {
        MESSAGE("Alakazam had its HP restored!");
        if (status != STATUS1_NONE) {
            MESSAGE("Alakazam had its status healed!"); // The message is not printed if status wasn't healed.
        }
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Restore restores a party members HP and cures any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    PARAMETRIZE { status = STATUS1_NONE; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { HP(1); MaxHP(300); Status1(status); }
        PLAYER(SPECIES_ABRA) { HP(1); MaxHP(300); Status1(status); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 1); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        MESSAGE("Abra had its HP restored!");
        if (status != STATUS1_NONE) {
            MESSAGE("Abra had its status healed!"); // The message is not printed if status wasn't healed.
        }
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
        EXPECT_EQ(player->species, SPECIES_ABRA);
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Restore heals a battler from any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Status1(status); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 0); }
    } SCENE {
        NOT MESSAGE("Alakazam had its HP restored!"); // The message is not printed if mon has max HP.
        MESSAGE("Alakazam had its status healed!");
    } THEN {
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Restore heals a party member from any primary status")
{
    u16 status;
    PARAMETRIZE { status = STATUS1_BURN; }
    PARAMETRIZE { status = STATUS1_FREEZE; }
    PARAMETRIZE { status = STATUS1_PARALYSIS; }
    PARAMETRIZE { status = STATUS1_POISON; }
    PARAMETRIZE { status = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA) { Status1(status); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 1); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        NOT MESSAGE("Abra had its HP restored!"); // The message is not printed if mon has max HP.
        MESSAGE("Abra had its status healed!");
    } THEN {
        EXPECT_EQ(player->species, SPECIES_ABRA);
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}

SINGLE_BATTLE_TEST("Full Restore restores a battler's HP and cures confusion")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { HP(1); MaxHP(300); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN{ MOVE(opponent, MOVE_CONFUSE_RAY); }
        TURN{ USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 0); }
        TURN{ MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Alakazam had its HP restored!");
        NONE_OF { MESSAGE("Alakazam is confused!"); }
    } THEN {
        EXPECT_EQ(player->hp, player->maxHP);
    }
}

SINGLE_BATTLE_TEST("Full Restore resets Toxic Counter")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TOXIC); }
        TURN { ; }
        TURN { USE_ITEM(player, ITEM_FULL_RESTORE, partyIndex: 0); }
    } SCENE {
        MESSAGE("Foe Alakazam used Toxic!");
        MESSAGE("Alakazam had its HP restored!");
        MESSAGE("Alakazam had its status healed!");
    } THEN {
        EXPECT_EQ(player->status1, STATUS1_NONE);
    }
}
