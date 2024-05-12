//
// DO NOT MODIFY THIS FILE! It is auto-generated from test/battle/trainer_control.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config.h and remove this notice.
// Use sed -i '/^#line/d' 'test/battle/trainer_control.h' to remove #line markers.
//

#line 1 "test/battle/trainer_control.party"

#line 1
    [0] =
    {
#line 2
        .trainerName = _("Test1"),
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9
            .species = SPECIES_SQUIRTLE,
#line 9
            .gender = TRAINER_MON_FEMALE,
#line 9
            .heldItem = ITEM_ASSAULT_VEST,
#line 12
            .ability = ABILITY_TORRENT,
#line 11
            .lvl = 67,
#line 14
            .ball = ITEM_MASTER_BALL,
#line 10
            .nature = NATURE_HASTY,
#line 13
            .isShiny = TRUE,
            .moves = {
#line 15
                MOVE_AIR_SLASH,
                MOVE_BARRIER,
                MOVE_SOLAR_BEAM,
                MOVE_EXPLOSION,
            },
            },
            {
#line 20
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 22
            .ability = ABILITY_TORRENT,
#line 21
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
            {
#line 24
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 25
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
