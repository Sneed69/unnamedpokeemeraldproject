#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_PLASMA_FISTS].effect == EFFECT_PLASMA_FISTS);
}

SINGLE_BATTLE_TEST("Ion Duldge turns normal moves into electric for the remainder of the current turn")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ION_DELUGE].effect == EFFECT_ION_DELUGE);
        PLAYER(SPECIES_CORPHISH);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_ION_DELUGE); MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Corphish used Ion Deluge!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ION_DELUGE, player);
        MESSAGE("A deluge of ions showers the battlefield!");
        MESSAGE("Foe Alakazam used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Plasma Fists turns normal moves into electric for the remainder of the current turn")
{
    GIVEN {
        PLAYER(SPECIES_CORPHISH);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Corphish used Plasma Fists!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        MESSAGE("A deluge of ions showers the battlefield!");
        MESSAGE("Foe Alakazam used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Plasma Fists type-changing effect is applied after Pixilate")
{
    GIVEN {
        PLAYER(SPECIES_CORPHISH) { Speed(300); };
        OPPONENT(SPECIES_ALTARIA) { Speed(1); Ability(ABILITY_PIXILATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Corphish used Plasma Fists!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        MESSAGE("A deluge of ions showers the battlefield!");
        MESSAGE("Foe Altaria used Tackle!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

SINGLE_BATTLE_TEST("Plasma Fists type-changing effect is applied after Normalize")
{
    GIVEN {
        PLAYER(SPECIES_CORPHISH);
        OPPONENT(SPECIES_SKITTY) { Ability(ABILITY_NORMALIZE); }
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_EMBER); }
    } SCENE {
        MESSAGE("Corphish used Plasma Fists!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        MESSAGE("A deluge of ions showers the battlefield!");
        MESSAGE("Foe Skitty used Ember!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, opponent);
        MESSAGE("It's super effective!");
    }
}

/*SINGLE_BATTLE_TEST("Plasma Fists turns normal type dynamax-moves into electric type moves")
{
    GIVEN {
        PLAYER(SPECIES_CORPHISH) { Speed(100); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_PLASMA_FISTS); MOVE(opponent, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("Corphish used Plasma Fists!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLASMA_FISTS, player);
        MESSAGE("A deluge of ions showers the battlefield!");
        MESSAGE("Foe Alakazam used Max Lightning!");
        MESSAGE("It's super effective!");
    }
}*/
