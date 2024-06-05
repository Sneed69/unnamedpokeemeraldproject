#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Sap Sipper negates damage from Grass-type moves")
{
    GIVEN {
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_VINE_WHIP); }
    } SCENE {
        NONE_OF { HP_BAR(player); }
    }
}

SINGLE_BATTLE_TEST("Sap Sipper negates effects from Grass-type moves")
{
    GIVEN {
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
            STATUS_ICON(player, sleep: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Sap Sipper increases Attack or Sp. Attack by one stage when hit by a Grass-type move")
{
    u32 attack = 1;
    u32 spAttack = 1;

    PARAMETRIZE;
    PARAMETRIZE { attack = 2; }
    PARAMETRIZE { spAttack = 2; }

    GIVEN {
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); Attack(attack); SpAttack(spAttack); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_VINE_WHIP); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SAP_SIPPER);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        if (attack > spAttack)
            MESSAGE("Marill's Sap Sipper raised its Attack!");
        else
            MESSAGE("Marill's Sap Sipper raised its Sp. Atk!");
    }
}

SINGLE_BATTLE_TEST("Sap Sipper does not increase Attack if already maxed")
{
    GIVEN {
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); Attack(400); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_BELLY_DRUM); MOVE(opponent, MOVE_VINE_WHIP); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SAP_SIPPER);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Marill's Sap Sipper raised its Attack!");
        }
    }
}

SINGLE_BATTLE_TEST("Sap Sipper blocks multi-hit grass type moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BULLET_SEED].effect == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); }
        OPPONENT(SPECIES_SHELLDER) { Ability(ABILITY_SKILL_LINK); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_BULLET_SEED); }
    } SCENE {
        MESSAGE("Foe Shellder used Bullet Seed!");
        ABILITY_POPUP(player, ABILITY_SAP_SIPPER);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BULLET_SEED, opponent);
            HP_BAR(player);
            MESSAGE("Hit 5 time(s)!");
        }
    }
}
