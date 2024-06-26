#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_MIRROR_HERB].holdEffect == HOLD_EFFECT_MIRROR_HERB);
}

SINGLE_BATTLE_TEST("Mirror Herb copies all of foe's positive stat changes in a turn", s16 damage)
{
    u32 item;
    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_MIRROR_HERB; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(5); Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_DANCE); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        if (item == ITEM_NONE) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            HP_BAR(player, captureDamage: &results[i].damage);
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            HP_BAR(player, captureDamage: &results[i].damage);
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        }
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
        EXPECT_EQ(player->statStages[STAT_ATK], opponent->statStages[STAT_ATK]);
        EXPECT_EQ(player->statStages[STAT_SPEED], opponent->statStages[STAT_SPEED]);
    }
}

SINGLE_BATTLE_TEST("Mirror Herb copies all of Stuff Cheeks' stat boosts")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LIECHI_BERRY].holdEffect == HOLD_EFFECT_ATTACK_UP);
        PLAYER(SPECIES_ZIGZAGOON) { Item(ITEM_LIECHI_BERRY); }
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_MIRROR_HERB); }
    } WHEN {
        TURN { MOVE(player, MOVE_STUFF_CHEEKS); }
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], opponent->statStages[STAT_ATK]);
        EXPECT_EQ(player->statStages[STAT_DEF], opponent->statStages[STAT_DEF]);
    }
}

DOUBLE_BATTLE_TEST("Mirror Herb does not trigger for Ally's Soul Heart's stat raise")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_MIRROR_HERB); }
        PLAYER(SPECIES_ABRA) { Ability(ABILITY_SOUL_HEART); } // Raises Sp. Atk after fainting am on
        OPPONENT(SPECIES_ALAKAZAM) { HP(1); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_TACKLE, target:opponentLeft); }
    } SCENE {
        MESSAGE("Abra used Tackle!");
        MESSAGE("Foe Alakazam fainted!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
            MESSAGE("Alakazam used its Mirror Herb to mirror its opponent's stat changes!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        }
    }
    THEN {
        EXPECT_EQ(playerRight->statStages[STAT_SPATK], DEFAULT_STAT_STAGE + 1);
        EXPECT_EQ(playerLeft->statStages[STAT_SPATK], DEFAULT_STAT_STAGE);
    }
}
