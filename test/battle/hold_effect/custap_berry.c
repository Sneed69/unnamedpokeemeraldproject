#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_CUSTAP_BERRY].holdEffect == HOLD_EFFECT_CUSTAP_BERRY);
}

SINGLE_BATTLE_TEST("Custap Berry allows the holder to move first in its priority bracket when HP is below 1/4")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(1); MaxHP(160); HP(40); Item(ITEM_CUSTAP_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam can act faster, thanks to Custap Berry!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Custap Berry allows the holder to move first in its priority bracket at full HP if the holder has Gluttony")
{
    GIVEN {
        PLAYER(SPECIES_SNORLAX) { Speed(1); Ability(ABILITY_GLUTTONY); Item(ITEM_CUSTAP_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(2); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_GLUTTONY);
        MESSAGE("Snorlax gives in to its Gluttony!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Snorlax can act faster, thanks to Custap Berry!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Custap Berry activates even if the opposing mon switches out")
{
    GIVEN {
        PLAYER(SPECIES_REGIROCK) { HP(1); Item(ITEM_CUSTAP_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Regirock can act faster, thanks to Custap Berry!");
    }
}
