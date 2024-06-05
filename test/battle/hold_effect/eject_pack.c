#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_EJECT_PACK].holdEffect == HOLD_EFFECT_EJECT_PACK);
}

SINGLE_BATTLE_TEST("Eject Pack does not cause the new Pokémon to lose HP due to it's held Life Orb")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LIFE_ORB].holdEffect == HOLD_EFFECT_LIFE_ORB);
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_ABRA) { Item(ITEM_LIFE_ORB); }
        OPPONENT(SPECIES_ALAKAZAM) { HP(400); }
    } WHEN {
        TURN { MOVE(player, MOVE_OVERHEAT); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OVERHEAT, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam is switched out with the Eject Pack!");
        SEND_IN_MESSAGE("Abra");
        NOT MESSAGE("Abra was hurt by its Life Orb!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}

SINGLE_BATTLE_TEST("Eject Pack does not activate if there are no Pokémon left to battle")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_ALAKAZAM) { HP(0); }
        OPPONENT(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam is switched out with the Eject Pack!");
        }
    }
}

SINGLE_BATTLE_TEST("Eject Pack is triggered by self-inflicting stat decreases")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LIFE_ORB].holdEffect == HOLD_EFFECT_LIFE_ORB);
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_EJECT_PACK); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM)  { Item(ITEM_EJECT_PACK); HP(400); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(player, MOVE_OVERHEAT); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_OVERHEAT, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam is switched out with the Eject Pack!");
        SEND_IN_MESSAGE("Abra");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponent);
    }
}
