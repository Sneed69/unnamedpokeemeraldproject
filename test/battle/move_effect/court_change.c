#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_COURT_CHANGE].effect == EFFECT_COURT_CHANGE);
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the opponent")
{
    GIVEN {
        PLAYER(SPECIES_ABRA);
        PLAYER(SPECIES_ABRA);
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STICKY_WEB); MOVE(opponentRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(opponentLeft, MOVE_SPIKES); MOVE(opponentRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(playerLeft, 2); SWITCH(opponentLeft, 2); }
    } SCENE {
        MESSAGE("Foe Alakazam used Sticky Web!");
        MESSAGE("Foe Alakazam used Stealth Rock!");
        MESSAGE("Foe Alakazam used Spikes!");
        MESSAGE("Foe Alakazam used Toxic Spikes!");
        MESSAGE("Abra used Court Change!");
        MESSAGE("Abra swapped the battle effects affecting each side!");
        SEND_IN_MESSAGE("Abra");
        NONE_OF {
            MESSAGE("Abra is hurt by spikes!");
            MESSAGE("Pointed stones dug into Abra!");
            MESSAGE("Abra was poisoned!");
            MESSAGE("Abra was caught in a Sticky Web!");
        }
        MESSAGE("2 sent out Alakazam!");
        MESSAGE("Foe Alakazam is hurt by spikes!");
        MESSAGE("Pointed stones dug into Foe Alakazam!");
        MESSAGE("Foe Alakazam was poisoned!");
        MESSAGE("Foe Alakazam was caught in a Sticky Web!");
    }
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the player")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
        OPPONENT(SPECIES_ABRA);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB); MOVE(playerRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(playerLeft, MOVE_SPIKES); MOVE(playerRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(opponentLeft, 2); SWITCH(playerLeft, 2); }
    } SCENE {
        MESSAGE("Alakazam used Sticky Web!");
        MESSAGE("Alakazam used Stealth Rock!");
        MESSAGE("Alakazam used Spikes!");
        MESSAGE("Alakazam used Toxic Spikes!");
        MESSAGE("Foe Abra used Court Change!");
        MESSAGE("Foe Abra swapped the battle effects affecting each side!");
        SEND_IN_MESSAGE("Alakazam");
        MESSAGE("Alakazam is hurt by spikes!");
        MESSAGE("Pointed stones dug into Alakazam!");
        MESSAGE("Alakazam was poisoned!");
        MESSAGE("Alakazam was caught in a Sticky Web!");
        MESSAGE("2 sent out Abra!");
        NONE_OF {
            MESSAGE("Foe Abra is hurt by spikes!");
            MESSAGE("Pointed stones dug into Foe Abra!");
            MESSAGE("Foe Abra was poisoned!");
            MESSAGE("Foe Abra was caught in a Sticky Web!");
        }
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the player swaps Mist, Safeguard, Lucky Chant, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_ABRA);
        PLAYER(SPECIES_ABRA);
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_MIST); MOVE(opponentRight, MOVE_SAFEGUARD); }
        TURN { MOVE(opponentLeft, MOVE_LUCKY_CHANT); MOVE(opponentRight, MOVE_REFLECT); }
        TURN { MOVE(opponentLeft, MOVE_LIGHT_SCREEN); MOVE(opponentRight, MOVE_TAILWIND); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Foe Alakazam used Mist!");
        MESSAGE("Foe Alakazam used Safeguard!");
        MESSAGE("Foe Alakazam used Lucky Chant!");
        MESSAGE("Foe Alakazam used Reflect!");
        MESSAGE("Foe Alakazam used Light Screen!");
        MESSAGE("Foe Alakazam used Tailwind!");
        MESSAGE("Abra used Court Change!");
        MESSAGE("Abra swapped the battle effects affecting each side!");
        // The effects now end for the player side.
        MESSAGE("Ally's Mist wore off!");
        MESSAGE("Ally's party is no longer protected by Safeguard!");
        MESSAGE("Ally's Reflect wore off!");
        MESSAGE("Your team's Lucky Chant wore off!");
        MESSAGE("Your team's tailwind petered out!");
        MESSAGE("Ally's Light Screen wore off!");
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the opponent swaps Mist, Safeguard, Lucky Chant, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
        OPPONENT(SPECIES_ABRA);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MIST); MOVE(playerRight, MOVE_SAFEGUARD); }
        TURN { MOVE(playerLeft, MOVE_LUCKY_CHANT); MOVE(playerRight, MOVE_REFLECT); }
        TURN { MOVE(playerLeft, MOVE_LIGHT_SCREEN); MOVE(playerRight, MOVE_TAILWIND); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Alakazam used Mist!");
        MESSAGE("Alakazam used Safeguard!");
        MESSAGE("Alakazam used Lucky Chant!");
        MESSAGE("Alakazam used Reflect!");
        MESSAGE("Alakazam used Light Screen!");
        MESSAGE("Alakazam used Tailwind!");
        MESSAGE("Foe Abra used Court Change!");
        MESSAGE("Foe Abra swapped the battle effects affecting each side!");
        // The effects now end for the player side.
        MESSAGE("Foe's Mist wore off!");
        MESSAGE("Foe's party is no longer protected by Safeguard!");
        MESSAGE("Foe's Reflect wore off!");
        MESSAGE("The opposing team's Lucky Chant wore off!");
        MESSAGE("The opposing team's tailwind petered out!");
        MESSAGE("Foe's Light Screen wore off!");
    }
}
