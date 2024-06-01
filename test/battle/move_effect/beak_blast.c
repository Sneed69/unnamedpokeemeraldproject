#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_BEAK_BLAST].effect == EFFECT_BEAK_BLAST);
}

DOUBLE_BATTLE_TEST("Beak Blast's charging message is shown before other moves are used")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BEAK_BLAST].priority < 0);
        PLAYER(SPECIES_ABRA) { Speed(10); }
        PLAYER(SPECIES_ALAKAZAM) { Speed(5); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(2); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(3); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_BEAK_BLAST, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_BEAK_BLAST_SETUP, playerLeft);
        MESSAGE("Abra started heating up its beak!");

        MESSAGE("Alakazam used Celebrate!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        MESSAGE("Foe Alakazam used Celebrate!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
        MESSAGE("Foe Alakazam used Celebrate!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);

        MESSAGE("Abra used Beak Blast!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BEAK_BLAST, playerLeft);
        HP_BAR(opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("Beak Blast burns all who make contact with the pokemon")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BEAK_BLAST].priority < 0);
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        PLAYER(SPECIES_ABRA) { Speed(10); }
        PLAYER(SPECIES_ALAKAZAM) { Speed(5); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(2); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); MOVE(opponentRight, MOVE_TACKLE, target: playerLeft); MOVE(playerLeft, MOVE_BEAK_BLAST, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_BEAK_BLAST_SETUP, playerLeft);
        MESSAGE("Abra started heating up its beak!");

        MESSAGE("Alakazam used Celebrate!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);

        MESSAGE("Foe Alakazam used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        HP_BAR(playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentLeft);
        MESSAGE("Foe Alakazam was burned!");
        STATUS_ICON(opponentLeft, burn: TRUE);

        MESSAGE("Foe Alakazam used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        HP_BAR(playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentRight);
        MESSAGE("Foe Alakazam was burned!");
        STATUS_ICON(opponentRight, burn: TRUE);

        MESSAGE("Abra used Beak Blast!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BEAK_BLAST, playerLeft);
        HP_BAR(opponentLeft);
    }
}

SINGLE_BATTLE_TEST("Beak Blast burns only when contact moves are used")
{
    u32 move;
    bool32 burn;
    PARAMETRIZE { move = MOVE_TACKLE; burn = TRUE; }
    PARAMETRIZE { move = MOVE_WATER_GUN; burn = FALSE; }
    PARAMETRIZE { move = MOVE_LEER; burn = FALSE; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        ASSUME(!gMovesInfo[MOVE_WATER_GUN].makesContact);
        ASSUME(!gMovesInfo[MOVE_LEER].makesContact);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_BEAK_BLAST); MOVE(opponent, move); }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_BEAK_BLAST_SETUP, player);
        MESSAGE("Alakazam started heating up its beak!");
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);

        if (burn) {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponent);
            MESSAGE("Foe Alakazam was burned!");
            STATUS_ICON(opponent, burn: TRUE);
        }
        else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponent);
                MESSAGE("Foe Alakazam was burned!");
                STATUS_ICON(opponent, burn: TRUE);
            }
        }

        MESSAGE("Alakazam used Beak Blast!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BEAK_BLAST, player);
        HP_BAR(opponent);
    }
}

TO_DO_BATTLE_TEST("Beak Blast's charging message is shown regardless if it would've missed");
TO_DO_BATTLE_TEST("Bulletproof is immune to Beak Blast but not to the burn it causes");
