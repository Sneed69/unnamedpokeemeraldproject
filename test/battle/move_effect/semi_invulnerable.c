#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FLY].effect == EFFECT_SEMI_INVULNERABLE);
    ASSUME(UNCOMPRESS_BITS(HIHALF(gMovesInfo[MOVE_FLY].argument)) == STATUS3_ON_AIR);
    ASSUME(gMovesInfo[MOVE_DIG].effect == EFFECT_SEMI_INVULNERABLE);
    ASSUME(UNCOMPRESS_BITS(HIHALF(gMovesInfo[MOVE_DIG].argument)) == STATUS3_UNDERGROUND);
    ASSUME(gMovesInfo[MOVE_BOUNCE].effect == EFFECT_SEMI_INVULNERABLE);
    ASSUME(UNCOMPRESS_BITS(HIHALF(gMovesInfo[MOVE_BOUNCE].argument)) == STATUS3_ON_AIR);
    ASSUME(gMovesInfo[MOVE_DIVE].effect == EFFECT_SEMI_INVULNERABLE);
    ASSUME(UNCOMPRESS_BITS(HIHALF(gMovesInfo[MOVE_DIVE].argument)) == STATUS3_UNDERWATER);
    ASSUME(gMovesInfo[MOVE_PHANTOM_FORCE].effect == EFFECT_SEMI_INVULNERABLE);
    ASSUME(UNCOMPRESS_BITS(HIHALF(gMovesInfo[MOVE_PHANTOM_FORCE].argument)) == STATUS3_PHANTOM_FORCE);
    ASSUME(gMovesInfo[MOVE_SHADOW_FORCE].effect == EFFECT_SEMI_INVULNERABLE);
    ASSUME(UNCOMPRESS_BITS(HIHALF(gMovesInfo[MOVE_SHADOW_FORCE].argument)) == STATUS3_PHANTOM_FORCE);
}

SINGLE_BATTLE_TEST("Semi-invulnerable moves make the user semi-invulnerable turn 1, then strike turn 2")
{
    u16 move;

    PARAMETRIZE { move = MOVE_FLY; }
    PARAMETRIZE { move = MOVE_DIG; }
    PARAMETRIZE { move = MOVE_BOUNCE; }
    PARAMETRIZE { move = MOVE_DIVE; }
    PARAMETRIZE { move = MOVE_PHANTOM_FORCE; }
    PARAMETRIZE { move = MOVE_SHADOW_FORCE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, move); MOVE(opponent, MOVE_AERIAL_ACE); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        // Charging turn
        if (B_UPDATED_MOVE_DATA >= GEN_5)
        {
            switch (move)
            {
                case MOVE_FLY:
                    NOT MESSAGE("Alakazam flew up high!");
                    MESSAGE("Alakazam used Fly!");
                    break;
                case MOVE_DIG:
                    NOT MESSAGE("Alakazam dug a hole!");
                    MESSAGE("Alakazam used Dig!");
                    break;
                case MOVE_BOUNCE:
                    NOT MESSAGE("Alakazam sprang up!");
                    MESSAGE("Alakazam used Bounce!");
                    break;
                case MOVE_DIVE:
                    NOT MESSAGE("Alakazam hid underwater!");
                    MESSAGE("Alakazam used Dive!");
                    break;
                case MOVE_PHANTOM_FORCE:
                    NOT MESSAGE("Alakazam vanished instantly!");
                    MESSAGE("Alakazam used Phantom Force!");
                    break;
                case MOVE_SHADOW_FORCE:
                    NOT MESSAGE("Alakazam vanished instantly!");
                    MESSAGE("Alakazam used Shadow Force!");
                    break;
            }
        } else {
            ANIMATION(ANIM_TYPE_MOVE, move, player);
        }
        if (B_UPDATED_MOVE_DATA < GEN_5)
        {
            switch (move)
            {
                case MOVE_FLY:
                    MESSAGE("Alakazam flew up high!");
                    break;
                case MOVE_DIG:
                    MESSAGE("Alakazam dug a hole!");
                    break;
                case MOVE_BOUNCE:
                    MESSAGE("Alakazam sprang up!");
                    break;
                case MOVE_DIVE:
                    MESSAGE("Alakazam hid underwater!");
                    break;
                case MOVE_PHANTOM_FORCE:
                case MOVE_SHADOW_FORCE:
                    MESSAGE("Alakazam vanished instantly!");
                    break;
            }
        }
        else
            ANIMATION(ANIM_TYPE_MOVE, move, player);

        // Aerial Ace cannot miss unless the target is semi-invulnerable
        MESSAGE("Foe Alakazam used Aerial Ace!");
        MESSAGE("Foe Alakazam's attack missed!");
        // Attack turn
        switch (move)
        {
            case MOVE_FLY:
                MESSAGE("Alakazam used Fly!");
                break;
            case MOVE_DIG:
                MESSAGE("Alakazam used Dig!");
                break;
            case MOVE_BOUNCE:
                MESSAGE("Alakazam used Bounce!");
                break;
            case MOVE_DIVE:
                MESSAGE("Alakazam used Dive!");
                break;
            case MOVE_PHANTOM_FORCE:
                MESSAGE("Alakazam used Phantom Force!");
                break;
            case MOVE_SHADOW_FORCE:
                MESSAGE("Alakazam used Shadow Force!");
                break;
        }
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Semi-invulnerable moves don't need to charge with Power Herb")
{
    u16 move;

    PARAMETRIZE { move = MOVE_FLY; }
    PARAMETRIZE { move = MOVE_DIG; }
    PARAMETRIZE { move = MOVE_BOUNCE; }
    PARAMETRIZE { move = MOVE_DIVE; }
    PARAMETRIZE { move = MOVE_PHANTOM_FORCE; }
    PARAMETRIZE { move = MOVE_SHADOW_FORCE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_POWER_HERB); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        // Charging turn
        if (B_UPDATED_MOVE_DATA >= GEN_5)
        {
            switch (move)
            {
                case MOVE_FLY:
                    NOT MESSAGE("Alakazam flew up high!");
                    MESSAGE("Alakazam used Fly!");
                    break;
                case MOVE_DIG:
                    NOT MESSAGE("Alakazam dug a hole!");
                    MESSAGE("Alakazam used Dig!");
                    break;
                case MOVE_BOUNCE:
                    NOT MESSAGE("Alakazam sprang up!");
                    MESSAGE("Alakazam used Bounce!");
                    break;
                case MOVE_DIVE:
                    NOT MESSAGE("Alakazam hid underwater!");
                    MESSAGE("Alakazam used Dive!");
                    break;
                case MOVE_PHANTOM_FORCE:
                    NOT MESSAGE("Alakazam vanished instantly!");
                    MESSAGE("Alakazam used Phantom Force!");
                    break;
                case MOVE_SHADOW_FORCE:
                    NOT MESSAGE("Alakazam vanished instantly!");
                    MESSAGE("Alakazam used Shadow Force!");
                    break;
            }
        } else {
            ANIMATION(ANIM_TYPE_MOVE, move, player);
        }
        if (B_UPDATED_MOVE_DATA < GEN_5)
        {
            switch (move)
            {
                case MOVE_FLY:
                    MESSAGE("Alakazam flew up high!");
                    break;
                case MOVE_DIG:
                    MESSAGE("Alakazam dug a hole!");
                    break;
                case MOVE_BOUNCE:
                    MESSAGE("Alakazam sprang up!");
                    break;
                case MOVE_DIVE:
                    MESSAGE("Alakazam hid underwater!");
                    break;
                case MOVE_PHANTOM_FORCE:
                case MOVE_SHADOW_FORCE:
                    MESSAGE("Alakazam vanished instantly!");
                    break;
            }
        }
        else
            ANIMATION(ANIM_TYPE_MOVE, move, player);
        MESSAGE("Alakazam became fully charged due to its Power Herb!");
        if (B_UPDATED_MOVE_DATA < GEN_5)
        {
            switch (move)
            {
                case MOVE_FLY:
                    MESSAGE("Alakazam used Fly!");
                    break;
                case MOVE_DIG:
                    MESSAGE("Alakazam used Dig!");
                    break;
                case MOVE_BOUNCE:
                    MESSAGE("Alakazam used Bounce!");
                    break;
                case MOVE_DIVE:
                    MESSAGE("Alakazam used Dive!");
                    break;
                case MOVE_PHANTOM_FORCE:
                    MESSAGE("Alakazam used Phantom Force!");
                    break;
                case MOVE_SHADOW_FORCE:
                    MESSAGE("Alakazam used Shadow Force!");
                    break;
            }
        }
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
    }
}

// No way to apply this test with Shadow Force/Phantom Force
SINGLE_BATTLE_TEST("Semi-invulnerable moves apply a status that won't block certain moves")
{
    u16 move, opMove;

    PARAMETRIZE { move = MOVE_FLY; opMove = MOVE_SKY_UPPERCUT; }
    PARAMETRIZE { move = MOVE_DIG; opMove = MOVE_EARTHQUAKE; }
    PARAMETRIZE { move = MOVE_BOUNCE; opMove = MOVE_THUNDER; }
    PARAMETRIZE { move = MOVE_DIVE; opMove = MOVE_SURF; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, move); MOVE(opponent, opMove); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        ANIMATION(ANIM_TYPE_MOVE, opMove, opponent);
        HP_BAR(player);
    }
}
