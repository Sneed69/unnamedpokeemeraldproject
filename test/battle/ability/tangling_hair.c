#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TACKLE].effect == EFFECT_HIT);
    ASSUME(gMovesInfo[MOVE_TACKLE].power > 0);
    ASSUME(gMovesInfo[MOVE_TACKLE].makesContact == TRUE);
}


SINGLE_BATTLE_TEST("Tangling Hair drops opposing mon's speed if ability user got hit by a contact move")
{
    u32 move;

    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_SWIFT; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWIFT].makesContact == FALSE);
        PLAYER(SPECIES_DUGTRIO) { Ability(ABILITY_TANGLING_HAIR); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (move == MOVE_TACKLE) {
            ABILITY_POPUP(player, ABILITY_TANGLING_HAIR);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
            MESSAGE("Foe Abra's Speed fell!");
        }
    }
}

SINGLE_BATTLE_TEST("Tangling Hair does not cause Rocky Helmet miss activation")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_ROCKY_HELMET].holdEffect == HOLD_EFFECT_ROCKY_HELMET);
        PLAYER(SPECIES_DUGTRIO) { Ability(ABILITY_TANGLING_HAIR); Item(ITEM_ROCKY_HELMET); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ABILITY_POPUP(player, ABILITY_TANGLING_HAIR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Abra's Speed fell!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Foe Abra was hurt by Dugtrio's Rocky Helmet!");
    }
}

SINGLE_BATTLE_TEST("Tangling Hair Speed stat drop triggers defiant")
{
    GIVEN {
        PLAYER(SPECIES_DUGTRIO) { Ability(ABILITY_TANGLING_HAIR); }
        OPPONENT(SPECIES_SNEASEL) { Ability(ABILITY_DEFIANT); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ABILITY_POPUP(player, ABILITY_TANGLING_HAIR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe Sneasel's Speed fell!");
        ABILITY_POPUP(opponent, ABILITY_DEFIANT);
        MESSAGE("Foe Sneasel's Attack sharply rose!");
    }
}
