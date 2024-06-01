#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FILLET_AWAY].effect == EFFECT_FILLET_AWAY);
}

SINGLE_BATTLE_TEST("Fillet Away cuts the user's HP in half")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_FILLET_AWAY); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        HP_BAR(player, hp: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Fillet Away sharply raises Attack, Sp. Atk, and Speed")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_FILLET_AWAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FILLET_AWAY, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Alakazam's Attack sharply rose!");
        MESSAGE("Alakazam's Sp. Atk sharply rose!");
        MESSAGE("Alakazam's Speed sharply rose!");
        HP_BAR(player);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
        EXPECT_EQ(player->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 2);
        EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 2);
    }
}

SINGLE_BATTLE_TEST("Fillet Away fails if user's current HP is half or less than half its maximum")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { MaxHP(100); HP(50);}
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_FILLET_AWAY); }
    } SCENE {
        MESSAGE("But it failed!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FILLET_AWAY, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            HP_BAR(player);
        }
    }
}

SINGLE_BATTLE_TEST("Fillet Away's HP cost doesn't trigger effects that trigger on damage taken")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_FILLET_AWAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FILLET_AWAY, player);
        MESSAGE("Alakazam's Attack sharply rose!");
        MESSAGE("Alakazam's Sp. Atk sharply rose!");
        MESSAGE("Alakazam's Speed sharply rose!");
        NOT MESSAGE("Alakazam's Air Balloon popped!");
    }
}
