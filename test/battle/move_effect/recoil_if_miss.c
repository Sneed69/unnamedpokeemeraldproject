#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_JUMP_KICK].effect == EFFECT_RECOIL_IF_MISS);
}

SINGLE_BATTLE_TEST("Jump Kick has 50% recoil on miss")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_JUMP_KICK, hit: FALSE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        MESSAGE("Alakazam used Jump Kick!");
        MESSAGE("Alakazam's attack missed!");
        MESSAGE("Alakazam kept going and crashed!");
        HP_BAR(player, damage: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Jump Kick has 50% recoil on protect")
{
    GIVEN {
        ASSUME(!gMovesInfo[MOVE_JUMP_KICK].ignoresProtect);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PROTECT); MOVE(player, MOVE_JUMP_KICK, hit: FALSE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, opponent);
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_JUMP_KICK, player);
        HP_BAR(player, damage: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Jump Kick has no recoil if no target")
{
    GIVEN {
        ASSUME(B_HEALING_WISH_SWITCH >= GEN_5);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); MOVE(player, MOVE_JUMP_KICK, hit: FALSE); SEND_OUT(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HEALING_WISH, opponent);
        NOT HP_BAR(player, damage: maxHP / 2);
    }
}

SINGLE_BATTLE_TEST("Jump Kick's recoil happens after Spiky Shield damage and Pokemon can faint from either of these")
{
    s16 hp, maxHp = 256;
    bool32 faintOnSpiky = FALSE, faintOnJumpKick = FALSE;

    PARAMETRIZE { hp = maxHp; }
    PARAMETRIZE { hp = maxHp / 2; faintOnJumpKick = TRUE; } // Faints after Jump Kick's recoil
    PARAMETRIZE { hp = maxHp / 8; faintOnSpiky = TRUE; } // Faints after Spiky Shield's recoil

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPIKY_SHIELD].effect == EFFECT_PROTECT);
        PLAYER(SPECIES_ALAKAZAM) { HP(hp); MaxHP(maxHp); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        if (!faintOnJumpKick && !faintOnSpiky) {
            TURN { MOVE(opponent, MOVE_SPIKY_SHIELD); MOVE(player, MOVE_JUMP_KICK, hit: FALSE); }
        } else {
            TURN { MOVE(opponent, MOVE_SPIKY_SHIELD); MOVE(player, MOVE_JUMP_KICK, hit: FALSE); SEND_OUT(player, 1); }
        }
        TURN { ; }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKY_SHIELD, opponent);
        MESSAGE("Alakazam used Jump Kick!");
        MESSAGE("Foe Alakazam protected itself!");
        HP_BAR(player, damage: maxHp / 8);
        MESSAGE("Alakazam was hurt by Foe Alakazam's Spiky Shield!");
        if (faintOnSpiky){
            MESSAGE("Alakazam fainted!");
            MESSAGE("Go! Abra!");
            NONE_OF {
                MESSAGE("Alakazam kept going and crashed!");
                HP_BAR(player);
            }
        } else {
            MESSAGE("Alakazam kept going and crashed!");
            HP_BAR(player);
            if (faintOnJumpKick) {
                MESSAGE("Alakazam fainted!");
                MESSAGE("Go! Abra!");
            }
        }
    }
}
