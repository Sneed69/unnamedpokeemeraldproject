#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_ALLY_SWITCH].effect == EFFECT_ALLY_SWITCH);
}

SINGLE_BATTLE_TEST("Ally Switch fails in a single battle")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_ALLY_SWITCH); }
    } SCENE {
        MESSAGE("Alakazam used Ally Switch!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, player);
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Ally Switch fails if there is no partner")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM) { HP(1); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target:playerRight); }
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); }
    } SCENE {
        MESSAGE("Alakazam fainted!");
        MESSAGE("Alakazam used Ally Switch!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Ally Switch changes the position of battlers")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SCREECH].effect == EFFECT_DEFENSE_DOWN_2);
        ASSUME(gMovesInfo[MOVE_SCREECH].target == MOVE_TARGET_SELECTED);
        PLAYER(SPECIES_ALAKAZAM) { Speed(5); } // Wobb is playerLeft, but it'll be Abra after Ally Switch
        PLAYER(SPECIES_ABRA) { Speed(4); }
        OPPONENT(SPECIES_KADABRA) { Speed(3); }
        OPPONENT(SPECIES_ABRA) { Speed(2); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(opponentLeft, MOVE_SCREECH, target:playerLeft); MOVE(opponentRight, MOVE_SCREECH, target:playerLeft); }
    } SCENE {
        MESSAGE("Alakazam used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Alakazam and Abra switched places!");

        MESSAGE("Foe Kadabra used Screech!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Abra's Defense harshly fell!");

        MESSAGE("Foe Abra used Screech!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Abra's Defense harshly fell!");
    } THEN {
        EXPECT_EQ(playerLeft->speed, 4);
        EXPECT_EQ(playerLeft->species, SPECIES_ABRA);
        EXPECT_EQ(playerRight->speed, 5);
        EXPECT_EQ(playerRight->species, SPECIES_ALAKAZAM);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch does not redirect the target of Snipe Shot")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SNIPE_SHOT].effect == EFFECT_SNIPE_SHOT);
        PLAYER(SPECIES_ALAKAZAM); // Wobb is playerLeft, but it'll be Abra after Ally Switch
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_KADABRA);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(opponentLeft, MOVE_SNIPE_SHOT, target:playerLeft); } // Kadabra targets Wobb and Snipe Shot ignores Ally Switch position change.
    } SCENE {
        MESSAGE("Alakazam used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Alakazam and Abra switched places!");

        MESSAGE("Foe Kadabra used Snipe Shot!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SNIPE_SHOT, opponentLeft);
        HP_BAR(playerRight);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch does not redirect moves done by pokemon with Stalwart and Propeller Tail")
{
    u16 ability;
    PARAMETRIZE { ability = ABILITY_STALWART; }
    PARAMETRIZE { ability = ABILITY_PROPELLER_TAIL; }
    PARAMETRIZE { ability = ABILITY_TELEPATHY; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM); // Wobb is playerLeft, but it'll be Abra after Ally Switch
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_KADABRA) { Ability(ability); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(opponentLeft, MOVE_TACKLE, target:playerRight); } // Kadabra targets playerRight Abra.
    } SCENE {
        MESSAGE("Alakazam used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Alakazam and Abra switched places!");

        MESSAGE("Foe Kadabra used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        HP_BAR((ability == ABILITY_STALWART || ability == ABILITY_PROPELLER_TAIL) ? playerLeft : playerRight);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch has no effect on partner's chosen move")
{
    u16 chosenMove;
    struct BattlePokemon *chosenTarget = NULL;

    PARAMETRIZE { chosenMove = MOVE_TACKLE; chosenTarget = opponentLeft; }
    PARAMETRIZE { chosenMove = MOVE_TACKLE; chosenTarget = opponentRight; }
    PARAMETRIZE { chosenMove = MOVE_POUND; chosenTarget = opponentLeft; }
    PARAMETRIZE { chosenMove = MOVE_POUND; chosenTarget = opponentRight; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA) { Moves(MOVE_TACKLE, MOVE_POUND, MOVE_CELEBRATE, MOVE_SCRATCH); }
        OPPONENT(SPECIES_KADABRA);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(playerRight, chosenMove, target:chosenTarget); }
    } SCENE {
        MESSAGE("Alakazam used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Alakazam and Abra switched places!");

        ANIMATION(ANIM_TYPE_MOVE, chosenMove, playerLeft);
        HP_BAR(chosenTarget);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch - move fails if the target was ally which changed position")
{
    u32 move = MOVE_NONE;

    PARAMETRIZE { move = MOVE_COACHING; }
    PARAMETRIZE { move = MOVE_AROMATIC_MIST; }
    PARAMETRIZE { move = MOVE_HOLD_HANDS; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_KADABRA);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(playerRight, move, target:playerLeft); }
    } SCENE {
        MESSAGE("Alakazam used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Alakazam and Abra switched places!");

        NOT ANIMATION(ANIM_TYPE_MOVE, move, playerLeft);
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Ally Switch increases the Protect-like moves counter")
{
    GIVEN {
        ASSUME(B_ALLY_SWITCH_FAIL_CHANCE >= GEN_9);
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); }
    } THEN {
        EXPECT(gDisableStructs[B_POSITION_PLAYER_RIGHT].protectUses == 1);
    }
}

DOUBLE_BATTLE_TEST("Ally Switch works if ally used two-turn move like Dig")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_DIG, target:opponentRight); }
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); SKIP_TURN(playerRight); }
    } SCENE {
        MESSAGE("Abra used Dig!");
        MESSAGE("Alakazam used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Alakazam and Abra switched places!");
        NOT MESSAGE("Abra used -!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DIG);
        HP_BAR(opponentRight);
    }
}

// Triple Battles required to test
//TO_DO_BATTLE_TEST("Ally Switch fails if the user is in the middle of the field in a Triple Battle");
