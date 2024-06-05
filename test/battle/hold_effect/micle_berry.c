#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_MICLE_BERRY].holdEffect == HOLD_EFFECT_MICLE_BERRY);
    ASSUME(gMovesInfo[MOVE_DRAGON_RAGE].effect == EFFECT_FIXED_DAMAGE_ARG);
    ASSUME(gMovesInfo[MOVE_DRAGON_RAGE].argument == 50);
}

SINGLE_BATTLE_TEST("Micle Berry raises the holder's accuracy by 1.2 when HP drops to 1/4 or below")
{
    u32 move;

    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_DRAGON_RAGE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { MaxHP(200); HP(100); Item(ITEM_MICLE_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (move == MOVE_TACKLE) {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Alakazam boosted the accuracy of its next move using Micle Berry!");
            }
        } else {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam boosted the accuracy of its next move using Micle Berry!");
        }
    }
}

SINGLE_BATTLE_TEST("Micle Berry raises the holder's accuracy by 1.2 when HP drops to 1/2 or below")
{
    GIVEN {
        PLAYER(SPECIES_SNORLAX) { MaxHP(100); HP(100); Ability(ABILITY_GLUTTONY); Item(ITEM_MICLE_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_RAGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_RAGE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Snorlax boosted the accuracy of its next move using Micle Berry!");
    }
}

SINGLE_BATTLE_TEST("Micle Berry raises the holder's accuracy by 1.2")
{
    PASSES_RANDOMLY(24, 25, RNG_ACCURACY);
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SUBMISSION].accuracy == 80);
        PLAYER(SPECIES_ALAKAZAM) { MaxHP(200); HP(100); Item(ITEM_MICLE_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_RAGE); MOVE(player, MOVE_SUBMISSION); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_RAGE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam boosted the accuracy of its next move using Micle Berry!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBMISSION, player);
    }
}
