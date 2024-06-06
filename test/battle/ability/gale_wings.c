#include "global.h"
#include "test/battle.h"

/*SINGLE_BATTLE_TEST("Gale Wings only grants priority at full HP")
{
    u16 hp;
    PARAMETRIZE { hp = 100; }
    PARAMETRIZE { hp = 99; }
    GIVEN {
        ASSUME(B_GALE_WINGS >= GEN_7);
        ASSUME(gMovesInfo[MOVE_AERIAL_ACE].type == TYPE_FLYING);
        PLAYER(SPECIES_TALONFLAME) { Ability(ABILITY_GALE_WINGS); HP(hp); MaxHP(100); Speed(1);}
        OPPONENT(SPECIES_ALAKAZAM) { Speed(100);};
    } WHEN {
        TURN { MOVE(player, MOVE_AERIAL_ACE); }
    } SCENE {
        if (hp == 100) {
            MESSAGE("Talonflame used Aerial Ace!");
            MESSAGE("Foe Alakazam used Celebrate!");
        }
        else {
            MESSAGE("Foe Alakazam used Celebrate!");
            MESSAGE("Talonflame used Aerial Ace!");
        }
    }
}*/

SINGLE_BATTLE_TEST("Gale Wings only grants priority to Flying-type moves")
{
    u32 move;
    PARAMETRIZE { move = MOVE_AERIAL_ACE; }
    PARAMETRIZE { move = MOVE_FLARE_BLITZ; }
    GIVEN {
        //ASSUME(B_GALE_WINGS >= GEN_7);
        ASSUME(gMovesInfo[MOVE_AERIAL_ACE].type == TYPE_FLYING);
        ASSUME(gMovesInfo[MOVE_FLARE_BLITZ].type == TYPE_FIRE);
        PLAYER(SPECIES_TALONFLAME) { Ability(ABILITY_GALE_WINGS); HP(100); MaxHP(100); Speed(1);}
        OPPONENT(SPECIES_ALAKAZAM) { Speed(100);};
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        if (move == MOVE_AERIAL_ACE) {
            MESSAGE("Talonflame used Aerial Ace!");
            MESSAGE("Foe Alakazam used Celebrate!");
        }
        else {
            MESSAGE("Foe Alakazam used Celebrate!");
            MESSAGE("Talonflame used Flare Blitz!");
        }
    }
}

SINGLE_BATTLE_TEST("Gale Wings doesn't increase priority of Flying-type Natural Gift, Judgment, Hidden Power")
{
    u32 move;
    u16 heldItem;
    PARAMETRIZE { move = MOVE_NATURAL_GIFT; heldItem = ITEM_LUM_BERRY; }
    PARAMETRIZE { move = MOVE_JUDGMENT; heldItem = ITEM_SKY_PLATE; }
    PARAMETRIZE { move = MOVE_HIDDEN_POWER; heldItem = ITEM_NONE; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_NATURAL_GIFT].effect == EFFECT_NATURAL_GIFT);
        ASSUME(gMovesInfo[MOVE_JUDGMENT].effect == EFFECT_CHANGE_TYPE_ON_ITEM);
        ASSUME(gMovesInfo[MOVE_HIDDEN_POWER].effect == EFFECT_HIDDEN_POWER);
        ASSUME(gItemsInfo[ITEM_SKY_PLATE].holdEffect == HOLD_EFFECT_PLATE);
        ASSUME(gItemsInfo[ITEM_SKY_PLATE].secondaryId == TYPE_FLYING);
        ASSUME(gNaturalGiftTable[ITEM_TO_BERRY(ITEM_LUM_BERRY)].type == TYPE_FLYING);
        OPPONENT(SPECIES_TALONFLAME) { Ability(ABILITY_GALE_WINGS); Speed(1); Item(heldItem); HiddenPower(TYPE_FLYING); }
        PLAYER(SPECIES_ALAKAZAM) { Speed(100); };
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
            MESSAGE("Alakazam used Celebrate!");
        if (move == MOVE_NATURAL_GIFT) {
            MESSAGE("Foe Talonflame used Natural Gift!");
        }
        else if (move == MOVE_JUDGMENT) {
            MESSAGE("Foe Talonflame used Judgment!");
        }
        else if (move == MOVE_HIDDEN_POWER) {
            MESSAGE("Foe Talonflame used Hidden Power!");
        }
        else {
            MESSAGE("Foe Talonflame used Tera Blast!");
        }
    }
}
