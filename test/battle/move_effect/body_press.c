#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_BODY_PRESS].effect == EFFECT_BODY_PRESS);
}

SINGLE_BATTLE_TEST("Body Press uses physical defense stat of target", s16 damage)
{
    u32 move;

    PARAMETRIZE { move = MOVE_MEGA_PUNCH; }
    PARAMETRIZE { move = MOVE_BODY_PRESS; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_MEGA_PUNCH].power == gMovesInfo[MOVE_BODY_PRESS].power);
        ASSUME(gMovesInfo[MOVE_CHARM].effect == EFFECT_ATTACK_DOWN_2);
        PLAYER(SPECIES_ALAKAZAM) { Attack(200); Defense(200); }
        OPPONENT(SPECIES_SHELLDER) { HP(400); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CHARM); MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
    }
}

TO_DO_BATTLE_TEST("Body Press's damage depends on the user's Defense stat stages");

// Could be split into multiple tests or maybe to separate files based on the modifier?
TO_DO_BATTLE_TEST("Body Press's damage is influenced by all other Attack modifiers that are not stat stages");
TO_DO_BATTLE_TEST("Body Press's damage is NOT influenced by any other Defense besides stat stages");

// Unconfirmed by Bulbapedia:
// - Defeatist interaction
