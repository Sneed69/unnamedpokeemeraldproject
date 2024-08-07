#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_LANSAT_BERRY].holdEffect == HOLD_EFFECT_CRITICAL_UP);
    ASSUME(gMovesInfo[MOVE_DRAGON_RAGE].effect == EFFECT_FIXED_DAMAGE_ARG);
    ASSUME(gMovesInfo[MOVE_DRAGON_RAGE].argument == 50);
}

SINGLE_BATTLE_TEST("Lansat Berry raises the holder's critical-hit-ratio by two stages when HP drops to 1/4 or below")
{
    u32 move;

    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_DRAGON_RAGE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { MaxHP(200); HP(100); Item(ITEM_LANSAT_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (move == MOVE_TACKLE) {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Alakazam used Lansat Berry to get pumped!");
            }
        } else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam used Lansat Berry to get pumped!");
        }
    }
}

SINGLE_BATTLE_TEST("Lansat Berry raises the holder's critical-hit-ratio by two stages at full HP with Gluttony")
{
    GIVEN {
        PLAYER(SPECIES_SNORLAX) { Ability(ABILITY_GLUTTONY); Item(ITEM_LANSAT_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN;
    } SCENE {
        ABILITY_POPUP(player, ABILITY_GLUTTONY);
        MESSAGE("Snorlax gives in to its Gluttony!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Snorlax used Lansat Berry to get pumped!");
    }
}

SINGLE_BATTLE_TEST("Lansat Berry raises the holder's critical-hit-ratio by two stages")
{
    PASSES_RANDOMLY(1, 2, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].criticalHitStage == 0);
        ASSUME(B_CRIT_CHANCE >= GEN_6);
        PLAYER(SPECIES_ALAKAZAM) { MaxHP(200); HP(100); Item(ITEM_LANSAT_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_RAGE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_RAGE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam used Lansat Berry to get pumped!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        MESSAGE("A critical hit!");
    }
}
