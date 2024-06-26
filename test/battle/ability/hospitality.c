#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Hospitality user restores 25% of ally's health")
{
    s16 health;

    PARAMETRIZE { health = 75; }
    PARAMETRIZE { health = 100; }

    GIVEN {
        PLAYER(SPECIES_BANETTE) { Ability(ABILITY_HOSPITALITY); }
        PLAYER(SPECIES_ALAKAZAM) { HP(health); MaxHP(100); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { }
    } SCENE {
        if (health == 75) {
            ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
            MESSAGE("Alakazam drank down all the matcha that Banette made!");
            HP_BAR(playerRight, damage: -25);
        } else {
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
                MESSAGE("Alakazam drank down all the matcha that Banette made!");
                HP_BAR(playerRight, damage: -25);
            }
        }
    }
}

DOUBLE_BATTLE_TEST("Hospitality user restores 25% of ally's health on switch-in")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM)
        PLAYER(SPECIES_ALAKAZAM) { HP(75); MaxHP(100); }
        PLAYER(SPECIES_BANETTE) { Ability(ABILITY_HOSPITALITY); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
        SWITCH_OUT_MESSAGE("Alakazam");
        SEND_IN_MESSAGE("Banette");
        ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
        MESSAGE("Alakazam drank down all the matcha that Banette made!");
        HP_BAR(playerRight, damage: -25);
    }
}

DOUBLE_BATTLE_TEST("Hospitality ignores Substitute")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_BANETTE) { Ability(ABILITY_HOSPITALITY); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_SUBSTITUTE); }
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, playerRight);
        SWITCH_OUT_MESSAGE("Alakazam");
        SEND_IN_MESSAGE("Banette");
        ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
        MESSAGE("Alakazam drank down all the matcha that Banette made!");
    }
}

DOUBLE_BATTLE_TEST("Hospitality does not trigger if there is no ally on the field")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { HP(1);  }
        PLAYER(SPECIES_ALAKAZAM) { HP(1);  }
        PLAYER(SPECIES_BANETTE) { Ability(ABILITY_HOSPITALITY); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_BLIZZARD); SEND_OUT(playerLeft, 2); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BLIZZARD, opponentLeft);
        HP_BAR(playerLeft);
        MESSAGE("Alakazam fainted!");
        HP_BAR(playerRight);
        MESSAGE("Alakazam fainted!");
        SEND_IN_MESSAGE("Banette");
        NOT ABILITY_POPUP(playerLeft, ABILITY_HOSPITALITY);
    }
}
