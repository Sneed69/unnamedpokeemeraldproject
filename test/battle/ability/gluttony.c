#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Gluttony causes Oran Berry to be eaten when missing 40 or more HP")
{
    u32 hp;
    u32 maxHp = 100;
    u32 healing = ItemId_GetHoldEffectParam(ITEM_ORAN_BERRY);

    ASSUME(gItemsInfo[ITEM_ORAN_BERRY].holdEffect == HOLD_EFFECT_RESTORE_HP);

    PARAMETRIZE { hp = maxHp; }
    PARAMETRIZE { hp = 1; }
    PARAMETRIZE { hp = maxHp - healing; }
    PARAMETRIZE { hp = maxHp - healing + 1; }

    GIVEN {
        PLAYER(SPECIES_SNORLAX) { MaxHP(maxHp); HP(hp); Ability(ABILITY_GLUTTONY); Item(ITEM_ORAN_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN;
    } SCENE {
        if (maxHp - hp >= healing) {
            if (hp * 2 <= maxHp) {
                NONE_OF {
                    ABILITY_POPUP(player, ABILITY_GLUTTONY);
                    MESSAGE("Snorlax gives in to its Gluttony!");
                }
            } else {
                ABILITY_POPUP(player, ABILITY_GLUTTONY);
                MESSAGE("Snorlax gives in to its Gluttony!");
            }
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Snorlax's Oran Berry restored health!");
        } else {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_GLUTTONY);
                MESSAGE("Snorlax gives in to its Gluttony!");
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Snorlax's Oran Berry restored health!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Gluttony causes Sitrus Berry to be eaten when missing 25% or more HP")
{
    u32 hp;
    u32 maxHp = 100;
    u32 healing = ItemId_GetHoldEffectParam(ITEM_SITRUS_BERRY);

    ASSUME(gItemsInfo[ITEM_SITRUS_BERRY].holdEffect == HOLD_EFFECT_RESTORE_PCT_HP);

    PARAMETRIZE { hp = maxHp; }
    PARAMETRIZE { hp = 1; }
    PARAMETRIZE { hp = maxHp - healing; }
    PARAMETRIZE { hp = maxHp - healing + 1; }

    GIVEN {
        PLAYER(SPECIES_SNORLAX) { MaxHP(maxHp); HP(hp); Ability(ABILITY_GLUTTONY); Item(ITEM_SITRUS_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN;
    } SCENE {
        if (maxHp - hp >= healing) {
            if (hp * 2 <= maxHp) {
                NONE_OF {
                    ABILITY_POPUP(player, ABILITY_GLUTTONY);
                    MESSAGE("Snorlax gives in to its Gluttony!");
                }
            } else {
                ABILITY_POPUP(player, ABILITY_GLUTTONY);
                MESSAGE("Snorlax gives in to its Gluttony!");
            }
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Snorlax's Sitrus Berry restored health!");
        } else {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_GLUTTONY);
                MESSAGE("Snorlax gives in to its Gluttony!");
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Snorlax's Sitrus Berry restored health!");
            }
        }
    }
}
