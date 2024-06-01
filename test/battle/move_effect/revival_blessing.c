#include "global.h"
#include "test/battle.h"

// Note: Since these tests are recorded battle, they don't test the right battle controller
// behaviors. These have been tested in-game, in double, in multi, and in link battles. AI will always
// revive their first fainted party member in order.

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_REVIVAL_BLESSING].effect == EFFECT_REVIVAL_BLESSING);
}

SINGLE_BATTLE_TEST("Revival Blessing revives a chosen fainted party member for the player")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM) { HP(0); }
        PLAYER(SPECIES_ABRA) { HP(0); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); SEND_OUT(player, 2); }
    } SCENE {
        MESSAGE("Alakazam used Revival Blessing!");
        MESSAGE("Abra was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing revives a fainted party member for an opponent")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_RAICHU);
        OPPONENT(SPECIES_PICHU) { HP(0); }
        OPPONENT(SPECIES_PIKACHU) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_REVIVAL_BLESSING); SEND_OUT(opponent, 1); }
    } SCENE {
        MESSAGE("Foe Raichu used Revival Blessing!");
        MESSAGE("Pichu was revived and is ready to fight again!");
    }
}

SINGLE_BATTLE_TEST("Revival Blessing fails if no party members are fainted")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        MESSAGE("Alakazam used Revival Blessing!");
        MESSAGE("But it failed!");
    }
}

// Note: There isn't a good way to test multi battles at the moment, but
// this PASSES in game!
TO_DO_BATTLE_TEST("Revival Blessing cannot revive a partner's party member");
// DOUBLE_BATTLE_TEST("Revival Blessing cannot revive a partner's party member")
// {
//     struct BattlePokemon *user;
//     gBattleTypeFlags |= BATTLE_TYPE_TWO_OPPONENTS;
//     PARAMETRIZE { user = opponentLeft; }
//     PARAMETRIZE { user = opponentRight; }
//     GIVEN {
//         ASSUME((gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) != FALSE);
//         PLAYER(SPECIES_ALAKAZAM);
//         PLAYER(SPECIES_ALAKAZAM);
//         OPPONENT(SPECIES_ALAKAZAM);
//         OPPONENT(SPECIES_ALAKAZAM);
//         OPPONENT(SPECIES_ALAKAZAM);
//         OPPONENT(SPECIES_ABRA);
//         OPPONENT(SPECIES_ABRA) { HP(0); }
//         OPPONENT(SPECIES_ABRA);
//     } WHEN {
//         TURN { MOVE(user, MOVE_REVIVAL_BLESSING); }
//     } SCENE {
//         if (user == opponentLeft) {
//             MESSAGE("Foe Alakazam used Revival Blessing!");
//             MESSAGE("But it failed!");
//         } else {
//             MESSAGE("Foe Abra used Revival Blessing!");
//             MESSAGE("Abra was revived and is ready to fight again!");
//         }
//     }
// }

// Note: The test runner gets upset about "sending out" a battler on the field,
// but this PASSES in game!
TO_DO_BATTLE_TEST("Revived battlers still lose their turn");
// DOUBLE_BATTLE_TEST("Revived battlers still lose their turn")
// {
//     GIVEN {
//         PLAYER(SPECIES_ALAKAZAM);
//         PLAYER(SPECIES_ABRA);
//         OPPONENT(SPECIES_ALAKAZAM);
//         OPPONENT(SPECIES_ABRA) { HP(1); }
//     } WHEN {
//         TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentRight);
//                MOVE(opponentLeft, MOVE_REVIVAL_BLESSING);
//                SEND_OUT(opponentLeft, 1); }
//     } SCENE {
//         MESSAGE("Alakazam used Tackle!");
//         MESSAGE("Foe Abra fainted!");
//         MESSAGE("Foe Alakazam used Revival Blessing!");
//         MESSAGE("Abra was revived and is ready to fight again!");
//         NOT { MESSAGE("Abra used Celebrate!"); }
//     }
// }
