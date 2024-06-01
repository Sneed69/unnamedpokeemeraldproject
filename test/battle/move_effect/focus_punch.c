#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FOCUS_PUNCH].effect == EFFECT_FOCUS_PUNCH);
}

SINGLE_BATTLE_TEST("Focus Punch activates only if not damaged")
{
    u32 move;
    bool32 activate;
    PARAMETRIZE { move = MOVE_TACKLE; activate = FALSE; }
    PARAMETRIZE { move = MOVE_WATER_GUN; activate = FALSE; }
    PARAMETRIZE { move = MOVE_LEER; activate = TRUE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_FOCUS_PUNCH); MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, player);
        MESSAGE("Alakazam is tightening its focus!");
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);

        if (activate) {
            MESSAGE("Alakazam used Focus Punch!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_PUNCH, player);
            HP_BAR(opponent);
        } else {
            MESSAGE("Alakazam lost its focus and couldn't move!");
            NONE_OF {
                MESSAGE("Alakazam used Focus Punch!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_PUNCH, player);
                HP_BAR(opponent);
            }
        }
    }
}

DOUBLE_BATTLE_TEST("Focus Punch activation is based on Speed")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(2); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(1); }
        OPPONENT(SPECIES_ABRA) { Speed(5); }
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_FOCUS_PUNCH, target: playerLeft); MOVE(playerRight, MOVE_FOCUS_PUNCH, target: opponentLeft); MOVE(playerLeft, MOVE_FOCUS_PUNCH, target: opponentLeft); MOVE(opponentLeft, MOVE_FOCUS_PUNCH, target: playerLeft); }
    }
    SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, opponentRight);
        MESSAGE("Foe Abra is tightening its focus!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerRight);
        MESSAGE("Abra is tightening its focus!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, playerLeft);
        MESSAGE("Alakazam is tightening its focus!");

        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_FOCUS_PUNCH_SETUP, opponentLeft);
        MESSAGE("Foe Alakazam is tightening its focus!");

        MESSAGE("Foe Abra used Focus Punch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_PUNCH, opponentRight);
        HP_BAR(playerLeft);

        MESSAGE("Abra used Focus Punch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FOCUS_PUNCH, playerRight);
        HP_BAR(opponentLeft);

        MESSAGE("Alakazam lost its focus and couldn't move!");
        MESSAGE("Foe Alakazam lost its focus and couldn't move!");
    }
}
