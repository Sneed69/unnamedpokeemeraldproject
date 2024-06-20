#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_LIECHI_BERRY].holdEffect == HOLD_EFFECT_ATTACK_UP);
    ASSUME(gMovesInfo[MOVE_DRAGON_RAGE].effect == EFFECT_FIXED_DAMAGE_ARG);
    ASSUME(gMovesInfo[MOVE_DRAGON_RAGE].argument == 50);
}

SINGLE_BATTLE_TEST("Liechi Berry raises the holder's Attack by one stage when HP drops to 1/4 or below")
{
    u32 move;

    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_DRAGON_RAGE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { MaxHP(200); HP(100); Item(ITEM_LIECHI_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (move == MOVE_TACKLE) {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Using Liechi Berry, the Attack of Alakazam rose!");
            }
        } else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Using Liechi Berry, the Attack of Alakazam rose!");
        }
    } THEN {
        if (move == MOVE_DRAGON_RAGE)
            EXPECT_EQ(player->statStages[STAT_ATK], 7);
    }
}

SINGLE_BATTLE_TEST("Liechi Berry raises Attack by one stage at full HP if holder has Gluttony")
{
    GIVEN {
        PLAYER(SPECIES_SNORLAX) { Ability(ABILITY_GLUTTONY); Item(ITEM_LIECHI_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN;
    } SCENE {
        ABILITY_POPUP(player, ABILITY_GLUTTONY);
        MESSAGE("Snorlax gives in to its Gluttony!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Using Liechi Berry, the Attack of Snorlax rose!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Liechi Berry raises Attack by one stage when HP drops to 1/4 or below if holder has Ripen")
{
    GIVEN {
        PLAYER(SPECIES_SNORLAX) { MaxHP(200); HP(100); Ability(ABILITY_RIPEN); Item(ITEM_LIECHI_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_RAGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_RAGE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Using Liechi Berry, the Attack of Snorlax sharply rose!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
    }
}
