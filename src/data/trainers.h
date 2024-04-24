//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 1
    [TRAINER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 9
    [TRAINER_SAWYER_1] =
    {
#line 10
        .trainerName = _("Sawyer"),
#line 11
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 15
        .doubleBattle = FALSE,
#line 16
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 18
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 19
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 21
    [TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
#line 22
        .trainerName = _("Grunt"),
#line 23
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 24
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 26
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 27
        .doubleBattle = FALSE,
#line 28
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 30
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 31
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 33
    [TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 34
        .trainerName = _("Grunt"),
#line 35
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 36
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 38
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 39
        .doubleBattle = FALSE,
#line 40
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 42
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 43
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 45
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 46
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 48
    [TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 49
        .trainerName = _("Grunt"),
#line 50
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 51
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 53
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 54
        .doubleBattle = FALSE,
#line 55
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 57
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 58
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 60
    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 61
        .trainerName = _("Grunt"),
#line 62
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 63
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 65
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 66
        .doubleBattle = FALSE,
#line 67
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 69
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 70
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 72
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 73
        .trainerName = _("Grunt"),
#line 74
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 75
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 77
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 78
        .doubleBattle = FALSE,
#line 79
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 81
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 82
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 84
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 85
        .trainerName = _("Grunt"),
#line 86
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 87
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 89
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 90
        .doubleBattle = FALSE,
#line 91
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 94
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 96
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 97
        .trainerName = _("Grunt"),
#line 98
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 99
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 101
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 102
        .doubleBattle = FALSE,
#line 103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 105
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 106
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 108
    [TRAINER_GABRIELLE_1] =
    {
#line 109
        .trainerName = _("Gabrielle"),
#line 110
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 111
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 112
F_TRAINER_FEMALE | 
#line 113
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 114
        .doubleBattle = FALSE,
#line 115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 117
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 118
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 120
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 121
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 123
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 124
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 126
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 127
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 129
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 130
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 132
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 133
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 135
    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 136
        .trainerName = _("Grunt Louie"),
#line 137
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 138
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 140
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 141
        .doubleBattle = FALSE,
#line 142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 144
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 145
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 147
    [TRAINER_MARCEL] =
    {
#line 148
        .trainerName = _("Marcel"),
#line 149
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 150
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 152
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 153
        .doubleBattle = FALSE,
#line 154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 156
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 157
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 159
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 160
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 162
    [TRAINER_ALBERTO] =
    {
#line 163
        .trainerName = _("Alberto"),
#line 164
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 165
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 167
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 168
        .doubleBattle = FALSE,
#line 169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 171
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 172
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 174
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 175
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 177
    [TRAINER_ED] =
    {
#line 178
        .trainerName = _("Ed"),
#line 179
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 180
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 182
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 183
        .doubleBattle = FALSE,
#line 184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 186
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 187
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 189
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 190
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 192
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 193
        .trainerName = _("Grunt"),
#line 194
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 195
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 196
F_TRAINER_FEMALE | 
#line 197
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 198
        .doubleBattle = FALSE,
#line 199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 201
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 202
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 204
    [TRAINER_DECLAN] =
    {
#line 205
        .trainerName = _("Declan"),
#line 206
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 207
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 209
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 210
        .doubleBattle = FALSE,
#line 211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 213
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 214
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 216
    [TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 217
        .trainerName = _("Grunt Louie"),
#line 218
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 219
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 221
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 222
        .doubleBattle = FALSE,
#line 223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 225
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 226
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 228
    [TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 229
        .trainerName = _("Grunt"),
#line 230
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 231
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 233
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 234
        .doubleBattle = FALSE,
#line 235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 237
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 238
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 240
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 241
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 243
    [TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 244
        .trainerName = _("Grunt"),
#line 245
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 246
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 248
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 249
        .doubleBattle = FALSE,
#line 250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 252
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 253
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 255
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 256
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 258
    [TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 259
        .trainerName = _("Grunt"),
#line 260
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 261
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 263
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 264
        .doubleBattle = FALSE,
#line 265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 267
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 268
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 270
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 271
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 273
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 274
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 276
    [TRAINER_GRUNT_MUSEUM_1] =
    {
#line 277
        .trainerName = _("Grunt"),
#line 278
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 279
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 281
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 282
        .doubleBattle = FALSE,
#line 283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 285
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 286
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 288
    [TRAINER_GRUNT_MUSEUM_2] =
    {
#line 289
        .trainerName = _("Grunt"),
#line 290
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 291
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 293
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 294
        .doubleBattle = FALSE,
#line 295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 297
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 298
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 300
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 301
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 303
    [TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 304
        .trainerName = _("Grunt"),
#line 305
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 306
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 308
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 309
        .doubleBattle = FALSE,
#line 310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 312
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 313
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 315
    [TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 316
        .trainerName = _("Grunt"),
#line 317
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 318
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 320
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 321
        .doubleBattle = FALSE,
#line 322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 324
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 325
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 327
    [TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 328
        .trainerName = _("Grunt"),
#line 329
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 330
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 332
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 333
        .doubleBattle = FALSE,
#line 334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 336
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 337
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 339
    [TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 340
        .trainerName = _("Grunt"),
#line 341
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 342
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 344
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 345
        .doubleBattle = FALSE,
#line 346
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 348
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 349
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 351
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 352
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 354
    [TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 355
        .trainerName = _("Grunt"),
#line 356
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 357
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 358
F_TRAINER_FEMALE | 
#line 359
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 360
        .doubleBattle = FALSE,
#line 361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 363
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 364
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 366
    [TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 367
        .trainerName = _("Grunt"),
#line 368
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 369
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 370
F_TRAINER_FEMALE | 
#line 371
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 372
        .doubleBattle = FALSE,
#line 373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 375
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 376
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 378
    [TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 379
        .trainerName = _("Grunt"),
#line 380
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 381
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 382
F_TRAINER_FEMALE | 
#line 383
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 384
        .doubleBattle = FALSE,
#line 385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 387
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 388
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 390
    [TRAINER_FREDRICK] =
    {
#line 391
        .trainerName = _("Fredrick"),
#line 392
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 393
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 395
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 396
        .doubleBattle = FALSE,
#line 397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 399
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 400
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 402
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 403
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 405
    [TRAINER_MATT] =
    {
#line 406
        .trainerName = _("Matt"),
#line 407
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 408
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender = 
#line 410
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 411
        .doubleBattle = FALSE,
#line 412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 414
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 415
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 417
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 418
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 420
    [TRAINER_ZANDER] =
    {
#line 421
        .trainerName = _("Zander"),
#line 422
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 423
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 425
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 426
        .doubleBattle = FALSE,
#line 427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 429
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 430
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 432
    [TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 433
        .trainerName = _("Shelly"),
#line 434
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 435
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender = 
#line 436
F_TRAINER_FEMALE | 
#line 437
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 438
        .doubleBattle = FALSE,
#line 439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 441
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 442
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 444
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 445
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 447
    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 448
        .trainerName = _("Shelly"),
#line 449
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 450
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender = 
#line 451
F_TRAINER_FEMALE | 
#line 452
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 453
        .doubleBattle = FALSE,
#line 454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 456
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 457
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 459
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 460
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 462
    [TRAINER_ARCHIE] =
    {
#line 463
        .trainerName = _("Archie"),
#line 464
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 465
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender = 
#line 467
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 468
        .doubleBattle = FALSE,
#line 469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 471
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 472
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 474
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 475
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 477
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 478
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 480
    [TRAINER_LEAH] =
    {
#line 481
        .trainerName = _("Leah"),
#line 482
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 483
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 484
F_TRAINER_FEMALE | 
#line 485
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 486
        .doubleBattle = FALSE,
#line 487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 489
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 490
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 492
    [TRAINER_DAISY] =
    {
#line 493
        .trainerName = _("Daisy"),
#line 494
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 495
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 496
F_TRAINER_FEMALE | 
#line 497
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 498
        .doubleBattle = FALSE,
#line 499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 501
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 502
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 504
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 505
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 507
    [TRAINER_ROSE_1] =
    {
#line 508
        .trainerName = _("Rose"),
#line 509
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 510
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 511
F_TRAINER_FEMALE | 
#line 512
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 513
        .doubleBattle = FALSE,
#line 514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 516
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 517
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 519
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 520
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 522
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 523
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 525
    [TRAINER_FELIX] =
    {
#line 526
        .trainerName = _("Felix"),
#line 527
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 528
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 530
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 531
        .doubleBattle = FALSE,
#line 532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 534
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 535
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 536
                MOVE_PSYCHIC,
            },
            },
            {
#line 538
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 539
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 540
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 543
    [TRAINER_VIOLET] =
    {
#line 544
        .trainerName = _("Violet"),
#line 545
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 546
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 547
F_TRAINER_FEMALE | 
#line 548
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 549
        .doubleBattle = FALSE,
#line 550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 552
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 553
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 555
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 556
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 558
    [TRAINER_ROSE_2] =
    {
#line 559
        .trainerName = _("Rose"),
#line 560
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 561
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 562
F_TRAINER_FEMALE | 
#line 563
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 564
        .doubleBattle = FALSE,
#line 565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 567
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 568
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 570
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 571
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 573
    [TRAINER_ROSE_3] =
    {
#line 574
        .trainerName = _("Rose"),
#line 575
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 576
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 577
F_TRAINER_FEMALE | 
#line 578
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 579
        .doubleBattle = FALSE,
#line 580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 582
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 583
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 585
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 586
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 588
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 589
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 591
    [TRAINER_ROSE_4] =
    {
#line 592
        .trainerName = _("Rose"),
#line 593
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 594
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 595
F_TRAINER_FEMALE | 
#line 596
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 597
        .doubleBattle = FALSE,
#line 598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 600
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 601
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 603
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 606
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 607
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 609
    [TRAINER_ROSE_5] =
    {
#line 610
        .trainerName = _("Rose"),
#line 611
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 612
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 613
F_TRAINER_FEMALE | 
#line 614
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 615
        .doubleBattle = FALSE,
#line 616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 618
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 619
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 621
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 622
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 624
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 625
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 627
    [TRAINER_DUSTY_1] =
    {
#line 628
        .trainerName = _("Dusty"),
#line 629
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 630
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 632
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 633
        .doubleBattle = FALSE,
#line 634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 636
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .lvl = 23,
            .nature = NATURE_HARDY,
            .moves = {
#line 638
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 643
    [TRAINER_CHIP] =
    {
#line 644
        .trainerName = _("Chip"),
#line 645
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 646
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 648
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 649
        .doubleBattle = FALSE,
#line 650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 652
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 653
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 654
                MOVE_PSYBEAM,
                MOVE_SELF_DESTRUCT,
                MOVE_SANDSTORM,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 659
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 660
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 661
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 666
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 667
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 668
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 673
    [TRAINER_FOSTER] =
    {
#line 674
        .trainerName = _("Foster"),
#line 675
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 676
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 678
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 679
        .doubleBattle = FALSE,
#line 680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 682
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 683
            .lvl = 25,
            .nature = NATURE_HARDY,
            .moves = {
#line 684
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 689
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 690
            .lvl = 25,
            .nature = NATURE_HARDY,
            .moves = {
#line 691
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 696
    [TRAINER_DUSTY_2] =
    {
#line 697
        .trainerName = _("Dusty"),
#line 698
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 699
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 701
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 702
        .doubleBattle = FALSE,
#line 703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 705
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 706
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 707
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 712
    [TRAINER_DUSTY_3] =
    {
#line 713
        .trainerName = _("Dusty"),
#line 714
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 715
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 717
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 718
        .doubleBattle = FALSE,
#line 719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 721
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 722
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 723
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 728
    [TRAINER_DUSTY_4] =
    {
#line 729
        .trainerName = _("Dusty"),
#line 730
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 731
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 733
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 734
        .doubleBattle = FALSE,
#line 735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 737
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 738
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 739
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 744
    [TRAINER_DUSTY_5] =
    {
#line 745
        .trainerName = _("Dusty"),
#line 746
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 747
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 749
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 750
        .doubleBattle = FALSE,
#line 751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 753
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 754
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 755
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 760
    [TRAINER_GABBY_AND_TY_1] =
    {
#line 761
        .trainerName = _("Gabby & Ty"),
#line 762
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 763
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 765
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 766
        .doubleBattle = TRUE,
#line 767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 769
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 770
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 772
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 773
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 775
    [TRAINER_GABBY_AND_TY_2] =
    {
#line 776
        .trainerName = _("Gabby & Ty"),
#line 777
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 778
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 780
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 781
        .doubleBattle = TRUE,
#line 782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 784
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 785
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 787
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 788
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 790
    [TRAINER_GABBY_AND_TY_3] =
    {
#line 791
        .trainerName = _("Gabby & Ty"),
#line 792
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 793
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 795
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 796
        .doubleBattle = TRUE,
#line 797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 799
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 800
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 802
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 803
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 805
    [TRAINER_GABBY_AND_TY_4] =
    {
#line 806
        .trainerName = _("Gabby & Ty"),
#line 807
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 808
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 810
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 811
        .doubleBattle = TRUE,
#line 812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 814
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 815
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 817
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 818
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 820
    [TRAINER_GABBY_AND_TY_5] =
    {
#line 821
        .trainerName = _("Gabby & Ty"),
#line 822
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 823
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 825
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 826
        .doubleBattle = TRUE,
#line 827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 829
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 830
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 832
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 833
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 835
    [TRAINER_GABBY_AND_TY_6] =
    {
#line 836
        .trainerName = _("Gabby & Ty"),
#line 837
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 838
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender = 
#line 840
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 841
        .doubleBattle = TRUE,
#line 842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 844
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 845
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 846
                MOVE_SONIC_BOOM,
                MOVE_THUNDER_WAVE,
                MOVE_METAL_SOUND,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 851
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 852
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 853
                MOVE_ASTONISH,
                MOVE_STOMP,
                MOVE_SUPERSONIC,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 858
    [TRAINER_LOLA_1] =
    {
#line 859
        .trainerName = _("Lola"),
#line 860
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 861
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 862
F_TRAINER_FEMALE | 
#line 863
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 864
        .doubleBattle = FALSE,
#line 865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 867
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 868
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
            {
#line 870
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 871
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 873
    [TRAINER_AUSTINA] =
    {
#line 874
        .trainerName = _("Austina"),
#line 875
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 876
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 877
F_TRAINER_FEMALE | 
#line 878
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 879
        .doubleBattle = FALSE,
#line 880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 882
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 883
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 885
    [TRAINER_GWEN] =
    {
#line 886
        .trainerName = _("Gwen"),
#line 887
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 888
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 889
F_TRAINER_FEMALE | 
#line 890
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 891
        .doubleBattle = FALSE,
#line 892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 894
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 895
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 897
    [TRAINER_LOLA_2] =
    {
#line 898
        .trainerName = _("Lola"),
#line 899
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 900
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 901
F_TRAINER_FEMALE | 
#line 902
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 903
        .doubleBattle = FALSE,
#line 904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 906
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 907
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 909
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 910
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 912
    [TRAINER_LOLA_3] =
    {
#line 913
        .trainerName = _("Lola"),
#line 914
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 915
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 916
F_TRAINER_FEMALE | 
#line 917
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 918
        .doubleBattle = FALSE,
#line 919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 921
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 922
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 924
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 925
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 927
    [TRAINER_LOLA_4] =
    {
#line 928
        .trainerName = _("Lola"),
#line 929
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 930
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 931
F_TRAINER_FEMALE | 
#line 932
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 933
        .doubleBattle = FALSE,
#line 934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 936
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 937
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 939
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 940
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 942
    [TRAINER_LOLA_5] =
    {
#line 943
        .trainerName = _("Lola"),
#line 944
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 945
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 946
F_TRAINER_FEMALE | 
#line 947
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 948
        .doubleBattle = FALSE,
#line 949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 951
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 952
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 954
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 955
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 957
    [TRAINER_RICKY_1] =
    {
#line 958
        .trainerName = _("Ricky"),
#line 959
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 960
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 962
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 963
        .doubleBattle = FALSE,
#line 964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 966
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 967
            .lvl = 13,
            .nature = NATURE_HARDY,
            .moves = {
#line 968
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 973
    [TRAINER_SIMON] =
    {
#line 974
        .trainerName = _("Simon"),
#line 975
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 976
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 978
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 979
        .doubleBattle = FALSE,
#line 980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 982
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 983
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
            {
#line 985
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 986
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 988
    [TRAINER_CHARLIE] =
    {
#line 989
        .trainerName = _("Charlie"),
#line 990
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 991
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 993
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 994
        .doubleBattle = FALSE,
#line 995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 997
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 998
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1000
    [TRAINER_RICKY_2] =
    {
#line 1001
        .trainerName = _("Ricky"),
#line 1002
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1003
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1005
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1006
        .doubleBattle = FALSE,
#line 1007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1009
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1010
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 1011
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1016
    [TRAINER_RICKY_3] =
    {
#line 1017
        .trainerName = _("Ricky"),
#line 1018
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1019
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1021
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1022
        .doubleBattle = FALSE,
#line 1023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1025
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1026
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 1027
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1032
    [TRAINER_RICKY_4] =
    {
#line 1033
        .trainerName = _("Ricky"),
#line 1034
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1035
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1037
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1038
        .doubleBattle = FALSE,
#line 1039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1041
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1042
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 1043
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1048
    [TRAINER_RICKY_5] =
    {
#line 1049
        .trainerName = _("Ricky"),
#line 1050
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1051
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 1053
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1054
        .doubleBattle = FALSE,
#line 1055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1057
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1058
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 1059
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1064
    [TRAINER_RANDALL] =
    {
#line 1065
        .trainerName = _("Randall"),
#line 1066
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1067
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1069
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1070
        .doubleBattle = FALSE,
#line 1071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1073
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1074
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 1075
                MOVE_QUICK_ATTACK,
                MOVE_AGILITY,
                MOVE_WING_ATTACK,
            },
            },
        },
    },
#line 1079
    [TRAINER_PARKER] =
    {
#line 1080
        .trainerName = _("Parker"),
#line 1081
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1082
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1084
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1085
        .doubleBattle = FALSE,
#line 1086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1088
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1089
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 1090
                MOVE_TEETER_DANCE,
                MOVE_DIZZY_PUNCH,
                MOVE_FOCUS_PUNCH,
            },
            },
        },
    },
#line 1094
    [TRAINER_GEORGE] =
    {
#line 1095
        .trainerName = _("George"),
#line 1096
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1097
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1099
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1100
        .doubleBattle = FALSE,
#line 1101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1103
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1103
            .heldItem = ITEM_SITRUS_BERRY,
#line 1104
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 1105
                MOVE_SLACK_OFF,
                MOVE_COUNTER,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1109
    [TRAINER_BERKE] =
    {
#line 1110
        .trainerName = _("Berke"),
#line 1111
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1112
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1114
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1115
        .doubleBattle = FALSE,
#line 1116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1118
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1119
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 1120
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1123
    [TRAINER_BRAXTON] =
    {
#line 1124
        .trainerName = _("Braxton"),
#line 1125
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1126
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1128
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1129
        .doubleBattle = FALSE,
#line 1130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1132
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1133
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 1134
                MOVE_FOCUS_ENERGY,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 1139
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1140
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 1141
                MOVE_BITE,
                MOVE_DIG,
                MOVE_FEINT_ATTACK,
                MOVE_SAND_TOMB,
            },
            },
            {
#line 1146
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1147
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 1148
                MOVE_ROLLOUT,
                MOVE_WHIRLPOOL,
                MOVE_ASTONISH,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1153
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1154
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 1155
                MOVE_THUNDERBOLT,
                MOVE_SUPERSONIC,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 1160
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1161
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 1162
                MOVE_GIGA_DRAIN,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
            },
            },
        },
    },
#line 1167
    [TRAINER_VINCENT] =
    {
#line 1168
        .trainerName = _("Vincent"),
#line 1169
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1170
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1172
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1173
        .doubleBattle = FALSE,
#line 1174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1176
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1177
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
            {
#line 1179
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1180
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
            {
#line 1182
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1183
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1185
    [TRAINER_LEROY] =
    {
#line 1186
        .trainerName = _("Leroy"),
#line 1187
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1188
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1190
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1191
        .doubleBattle = FALSE,
#line 1192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1194
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1195
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
            {
#line 1197
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1198
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1200
    [TRAINER_WILTON_1] =
    {
#line 1201
        .trainerName = _("Wilton"),
#line 1202
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1203
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1205
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1206
        .doubleBattle = FALSE,
#line 1207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1209
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 1212
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1213
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 1215
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1216
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1218
    [TRAINER_EDGAR] =
    {
#line 1219
        .trainerName = _("Edgar"),
#line 1220
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1221
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1223
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1224
        .doubleBattle = FALSE,
#line 1225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1227
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1228
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 1230
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1231
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1233
    [TRAINER_ALBERT] =
    {
#line 1234
        .trainerName = _("Albert"),
#line 1235
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1236
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1238
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1239
        .doubleBattle = FALSE,
#line 1240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1242
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1243
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 1245
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1246
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1248
    [TRAINER_SAMUEL] =
    {
#line 1249
        .trainerName = _("Samuel"),
#line 1250
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1251
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1253
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1254
        .doubleBattle = FALSE,
#line 1255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1257
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1258
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1260
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1261
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1263
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1264
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1266
    [TRAINER_VITO] =
    {
#line 1267
        .trainerName = _("Vito"),
#line 1268
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1269
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1271
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1272
        .doubleBattle = FALSE,
#line 1273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1275
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1278
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1279
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1281
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1282
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1284
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1285
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1287
    [TRAINER_OWEN] =
    {
#line 1288
        .trainerName = _("Owen"),
#line 1289
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1290
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1292
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1293
        .doubleBattle = FALSE,
#line 1294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1296
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1297
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1299
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1300
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1302
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1303
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1305
    [TRAINER_WILTON_2] =
    {
#line 1306
        .trainerName = _("Wilton"),
#line 1307
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1308
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1310
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1311
        .doubleBattle = FALSE,
#line 1312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1314
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1315
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 1317
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1318
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 1320
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1321
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1323
    [TRAINER_WILTON_3] =
    {
#line 1324
        .trainerName = _("Wilton"),
#line 1325
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1326
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1328
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1329
        .doubleBattle = FALSE,
#line 1330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1332
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1333
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 1335
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1336
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 1338
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1339
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1341
    [TRAINER_WILTON_4] =
    {
#line 1342
        .trainerName = _("Wilton"),
#line 1343
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1344
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1346
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1347
        .doubleBattle = FALSE,
#line 1348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1350
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1351
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 1353
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1354
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 1356
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1357
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1359
    [TRAINER_WILTON_5] =
    {
#line 1360
        .trainerName = _("Wilton"),
#line 1361
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1362
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1364
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1365
        .doubleBattle = FALSE,
#line 1366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1368
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1369
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 1371
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1372
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 1374
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1375
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1377
    [TRAINER_WARREN] =
    {
#line 1378
        .trainerName = _("Warren"),
#line 1379
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1380
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 1382
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1383
        .doubleBattle = FALSE,
#line 1384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1386
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1387
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 1389
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1390
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1392
    [TRAINER_MARY] =
    {
#line 1393
        .trainerName = _("Mary"),
#line 1394
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1395
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1396
F_TRAINER_FEMALE | 
#line 1397
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1398
        .doubleBattle = FALSE,
#line 1399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1401
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1402
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 1403
                MOVE_FEINT_ATTACK,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },
#line 1406
    [TRAINER_ALEXIA] =
    {
#line 1407
        .trainerName = _("Alexia"),
#line 1408
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1409
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1410
F_TRAINER_FEMALE | 
#line 1411
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1412
        .doubleBattle = FALSE,
#line 1413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1415
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1416
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 1417
                MOVE_DEFENSE_CURL,
                MOVE_DOUBLE_EDGE,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1421
    [TRAINER_JODY] =
    {
#line 1422
        .trainerName = _("Jody"),
#line 1423
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1424
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1425
F_TRAINER_FEMALE | 
#line 1426
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1427
        .doubleBattle = FALSE,
#line 1428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1430
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1431
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 1432
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1435
    [TRAINER_WENDY] =
    {
#line 1436
        .trainerName = _("Wendy"),
#line 1437
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1438
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1439
F_TRAINER_FEMALE | 
#line 1440
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1441
        .doubleBattle = FALSE,
#line 1442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1444
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1445
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 1446
                MOVE_BATON_PASS,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_TEARS,
                MOVE_BITE,
            },
            },
            {
#line 1451
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1452
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 1453
                MOVE_MEGA_DRAIN,
                MOVE_MAGICAL_LEAF,
                MOVE_GRASS_WHISTLE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1458
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1459
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 1460
                MOVE_FLY,
                MOVE_WATER_GUN,
                MOVE_MIST,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 1465
    [TRAINER_KEIRA] =
    {
#line 1466
        .trainerName = _("Keira"),
#line 1467
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1468
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1469
F_TRAINER_FEMALE | 
#line 1470
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1471
        .doubleBattle = FALSE,
#line 1472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1474
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1475
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 1477
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1478
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1480
    [TRAINER_BROOKE_1] =
    {
#line 1481
        .trainerName = _("Brooke"),
#line 1482
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1483
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1484
F_TRAINER_FEMALE | 
#line 1485
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1486
        .doubleBattle = FALSE,
#line 1487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1489
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1490
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 1492
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1493
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 1495
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1496
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1498
    [TRAINER_JENNIFER] =
    {
#line 1499
        .trainerName = _("Jennifer"),
#line 1500
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1501
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1502
F_TRAINER_FEMALE | 
#line 1503
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1504
        .doubleBattle = FALSE,
#line 1505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1507
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1508
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1510
    [TRAINER_HOPE] =
    {
#line 1511
        .trainerName = _("Hope"),
#line 1512
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1513
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1514
F_TRAINER_FEMALE | 
#line 1515
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1516
        .doubleBattle = FALSE,
#line 1517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1519
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1520
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1522
    [TRAINER_SHANNON] =
    {
#line 1523
        .trainerName = _("Shannon"),
#line 1524
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1525
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1526
F_TRAINER_FEMALE | 
#line 1527
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1528
        .doubleBattle = FALSE,
#line 1529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1531
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1532
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1534
    [TRAINER_MICHELLE] =
    {
#line 1535
        .trainerName = _("Michelle"),
#line 1536
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1537
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1538
F_TRAINER_FEMALE | 
#line 1539
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1540
        .doubleBattle = FALSE,
#line 1541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1543
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1544
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1546
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1547
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1549
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1550
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1552
    [TRAINER_CAROLINE] =
    {
#line 1553
        .trainerName = _("Caroline"),
#line 1554
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1555
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1556
F_TRAINER_FEMALE | 
#line 1557
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1558
        .doubleBattle = FALSE,
#line 1559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1561
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1562
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 1564
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1565
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1567
    [TRAINER_JULIE] =
    {
#line 1568
        .trainerName = _("Julie"),
#line 1569
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1570
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1571
F_TRAINER_FEMALE | 
#line 1572
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1573
        .doubleBattle = FALSE,
#line 1574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1576
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1577
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1579
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1580
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1582
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1583
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1585
    [TRAINER_BROOKE_2] =
    {
#line 1586
        .trainerName = _("Brooke"),
#line 1587
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1588
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1589
F_TRAINER_FEMALE | 
#line 1590
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1591
        .doubleBattle = FALSE,
#line 1592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1594
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1595
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 1597
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1598
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 1600
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1601
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1603
    [TRAINER_BROOKE_3] =
    {
#line 1604
        .trainerName = _("Brooke"),
#line 1605
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1606
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1607
F_TRAINER_FEMALE | 
#line 1608
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1609
        .doubleBattle = FALSE,
#line 1610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1612
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1613
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 1615
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1616
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 1618
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1619
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1621
    [TRAINER_BROOKE_4] =
    {
#line 1622
        .trainerName = _("Brooke"),
#line 1623
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1624
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1625
F_TRAINER_FEMALE | 
#line 1626
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1627
        .doubleBattle = FALSE,
#line 1628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1630
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1631
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 1633
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1634
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 1636
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1637
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1639
    [TRAINER_BROOKE_5] =
    {
#line 1640
        .trainerName = _("Brooke"),
#line 1641
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1642
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 1643
F_TRAINER_FEMALE | 
#line 1644
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1645
        .doubleBattle = FALSE,
#line 1646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1648
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1649
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 1651
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1652
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 1654
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1655
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1657
    [TRAINER_PATRICIA] =
    {
#line 1658
        .trainerName = _("Patricia"),
#line 1659
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1660
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1661
F_TRAINER_FEMALE | 
#line 1662
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1663
        .doubleBattle = FALSE,
#line 1664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1666
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1667
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 1669
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1670
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1672
    [TRAINER_KINDRA] =
    {
#line 1673
        .trainerName = _("Kindra"),
#line 1674
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1675
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1676
F_TRAINER_FEMALE | 
#line 1677
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1678
        .doubleBattle = FALSE,
#line 1679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1681
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1682
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 1684
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1685
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1687
    [TRAINER_TAMMY] =
    {
#line 1688
        .trainerName = _("Tammy"),
#line 1689
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1690
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1691
F_TRAINER_FEMALE | 
#line 1692
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1693
        .doubleBattle = FALSE,
#line 1694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1696
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1697
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 1699
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1700
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1702
    [TRAINER_VALERIE_1] =
    {
#line 1703
        .trainerName = _("Valerie"),
#line 1704
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1705
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1706
F_TRAINER_FEMALE | 
#line 1707
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1708
        .doubleBattle = FALSE,
#line 1709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1711
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1712
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1714
    [TRAINER_TASHA] =
    {
#line 1715
        .trainerName = _("Tasha"),
#line 1716
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1717
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1718
F_TRAINER_FEMALE | 
#line 1719
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1720
        .doubleBattle = FALSE,
#line 1721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1723
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1724
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1726
    [TRAINER_VALERIE_2] =
    {
#line 1727
        .trainerName = _("Valerie"),
#line 1728
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1729
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1730
F_TRAINER_FEMALE | 
#line 1731
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1732
        .doubleBattle = FALSE,
#line 1733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1735
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1736
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 1738
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1739
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1741
    [TRAINER_VALERIE_3] =
    {
#line 1742
        .trainerName = _("Valerie"),
#line 1743
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1744
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1745
F_TRAINER_FEMALE | 
#line 1746
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1747
        .doubleBattle = FALSE,
#line 1748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1750
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1751
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 1753
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1754
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1756
    [TRAINER_VALERIE_4] =
    {
#line 1757
        .trainerName = _("Valerie"),
#line 1758
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1759
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1760
F_TRAINER_FEMALE | 
#line 1761
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1762
        .doubleBattle = FALSE,
#line 1763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1765
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1766
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 1768
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1769
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1771
    [TRAINER_VALERIE_5] =
    {
#line 1772
        .trainerName = _("Valerie"),
#line 1773
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1774
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 1775
F_TRAINER_FEMALE | 
#line 1776
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1777
        .doubleBattle = FALSE,
#line 1778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1780
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1781
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1783
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1784
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 1786
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1787
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1789
    [TRAINER_CINDY_1] =
    {
#line 1790
        .trainerName = _("Cindy"),
#line 1791
        .trainerClass = TRAINER_CLASS_LADY,
#line 1792
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1793
F_TRAINER_FEMALE | 
#line 1794
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1795
        .doubleBattle = FALSE,
#line 1796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1798
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1798
            .heldItem = ITEM_NUGGET,
#line 1799
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1801
    [TRAINER_DAPHNE] =
    {
#line 1802
        .trainerName = _("Daphne"),
#line 1803
        .trainerClass = TRAINER_CLASS_LADY,
#line 1804
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1805
F_TRAINER_FEMALE | 
#line 1806
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1807
        .doubleBattle = FALSE,
#line 1808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1810
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1810
            .heldItem = ITEM_NUGGET,
#line 1811
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 1812
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1817
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1817
            .heldItem = ITEM_NUGGET,
#line 1818
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 1819
                MOVE_ATTRACT,
                MOVE_SAFEGUARD,
                MOVE_TAKE_DOWN,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1824
    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1825
        .trainerName = _("Grunt"),
#line 1826
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1827
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 1829
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1830
        .doubleBattle = FALSE,
#line 1831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1833
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1834
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 1836
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1837
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 1839
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1840
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1842
    [TRAINER_CINDY_2] =
    {
#line 1843
        .trainerName = _("Cindy"),
#line 1844
        .trainerClass = TRAINER_CLASS_LADY,
#line 1845
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1846
F_TRAINER_FEMALE | 
#line 1847
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1848
        .doubleBattle = FALSE,
#line 1849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1851
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1851
            .heldItem = ITEM_NUGGET,
#line 1852
            .lvl = 11,
            .nature = NATURE_HARDY,
            .moves = {
#line 1853
                MOVE_TACKLE,
                MOVE_TAIL_WHIP,
            },
            },
        },
    },
#line 1856
    [TRAINER_BRIANNA] =
    {
#line 1857
        .trainerName = _("Brianna"),
#line 1858
        .trainerClass = TRAINER_CLASS_LADY,
#line 1859
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1860
F_TRAINER_FEMALE | 
#line 1861
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1862
        .doubleBattle = FALSE,
#line 1863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1865
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1865
            .heldItem = ITEM_NUGGET,
#line 1866
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1868
    [TRAINER_NAOMI] =
    {
#line 1869
        .trainerName = _("Naomi"),
#line 1870
        .trainerClass = TRAINER_CLASS_LADY,
#line 1871
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1872
F_TRAINER_FEMALE | 
#line 1873
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1874
        .doubleBattle = FALSE,
#line 1875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1877
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1877
            .heldItem = ITEM_NUGGET,
#line 1878
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1880
    [TRAINER_CINDY_3] =
    {
#line 1881
        .trainerName = _("Cindy"),
#line 1882
        .trainerClass = TRAINER_CLASS_LADY,
#line 1883
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1884
F_TRAINER_FEMALE | 
#line 1885
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1886
        .doubleBattle = FALSE,
#line 1887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1889
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1889
            .heldItem = ITEM_NUGGET,
#line 1890
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1892
    [TRAINER_CINDY_4] =
    {
#line 1893
        .trainerName = _("Cindy"),
#line 1894
        .trainerClass = TRAINER_CLASS_LADY,
#line 1895
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1896
F_TRAINER_FEMALE | 
#line 1897
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1898
        .doubleBattle = FALSE,
#line 1899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1901
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1901
            .heldItem = ITEM_NUGGET,
#line 1902
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1904
    [TRAINER_CINDY_5] =
    {
#line 1905
        .trainerName = _("Cindy"),
#line 1906
        .trainerClass = TRAINER_CLASS_LADY,
#line 1907
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1908
F_TRAINER_FEMALE | 
#line 1909
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1910
        .doubleBattle = FALSE,
#line 1911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1913
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1913
            .heldItem = ITEM_NUGGET,
#line 1914
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1916
    [TRAINER_CINDY_6] =
    {
#line 1917
        .trainerName = _("Cindy"),
#line 1918
        .trainerClass = TRAINER_CLASS_LADY,
#line 1919
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 1920
F_TRAINER_FEMALE | 
#line 1921
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1922
        .doubleBattle = FALSE,
#line 1923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1925
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1925
            .heldItem = ITEM_NUGGET,
#line 1926
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 1927
                MOVE_FURY_SWIPES,
                MOVE_MUD_SPORT,
                MOVE_ODOR_SLEUTH,
                MOVE_SAND_ATTACK,
            },
            },
        },
    },
#line 1932
    [TRAINER_MELISSA] =
    {
#line 1933
        .trainerName = _("Melissa"),
#line 1934
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1935
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1936
F_TRAINER_FEMALE | 
#line 1937
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1938
        .doubleBattle = FALSE,
#line 1939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1941
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1942
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1944
    [TRAINER_SHEILA] =
    {
#line 1945
        .trainerName = _("Sheila"),
#line 1946
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1947
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1948
F_TRAINER_FEMALE | 
#line 1949
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1950
        .doubleBattle = FALSE,
#line 1951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1953
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1956
    [TRAINER_SHIRLEY] =
    {
#line 1957
        .trainerName = _("Shirley"),
#line 1958
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1959
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1960
F_TRAINER_FEMALE | 
#line 1961
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1962
        .doubleBattle = FALSE,
#line 1963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1965
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1966
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 1968
    [TRAINER_JESSICA_1] =
    {
#line 1969
        .trainerName = _("Jessica"),
#line 1970
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1971
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1972
F_TRAINER_FEMALE | 
#line 1973
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1974
        .doubleBattle = FALSE,
#line 1975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1977
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1978
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 1979
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1984
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1985
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 1986
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 1991
    [TRAINER_CONNIE] =
    {
#line 1992
        .trainerName = _("Connie"),
#line 1993
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1994
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 1995
F_TRAINER_FEMALE | 
#line 1996
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1997
        .doubleBattle = FALSE,
#line 1998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2000
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2001
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2003
    [TRAINER_BRIDGET] =
    {
#line 2004
        .trainerName = _("Bridget"),
#line 2005
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2006
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2007
F_TRAINER_FEMALE | 
#line 2008
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2009
        .doubleBattle = FALSE,
#line 2010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2012
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2013
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2015
    [TRAINER_OLIVIA] =
    {
#line 2016
        .trainerName = _("Olivia"),
#line 2017
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2018
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2019
F_TRAINER_FEMALE | 
#line 2020
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2021
        .doubleBattle = FALSE,
#line 2022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2024
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2025
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 2026
                MOVE_IRON_DEFENSE,
                MOVE_WHIRLPOOL,
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2031
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2032
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 2033
                MOVE_TAUNT,
                MOVE_CRABHAMMER,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 2037
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2038
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 2039
                MOVE_UPROAR,
                MOVE_FURY_SWIPES,
                MOVE_FAKE_OUT,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 2044
    [TRAINER_TIFFANY] =
    {
#line 2045
        .trainerName = _("Tiffany"),
#line 2046
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2047
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2048
F_TRAINER_FEMALE | 
#line 2049
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2050
        .doubleBattle = FALSE,
#line 2051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2053
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2054
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 2056
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2057
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2059
    [TRAINER_JESSICA_2] =
    {
#line 2060
        .trainerName = _("Jessica"),
#line 2061
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2062
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2063
F_TRAINER_FEMALE | 
#line 2064
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2065
        .doubleBattle = FALSE,
#line 2066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2068
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2069
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 2070
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2075
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2076
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 2077
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2082
    [TRAINER_JESSICA_3] =
    {
#line 2083
        .trainerName = _("Jessica"),
#line 2084
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2085
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2086
F_TRAINER_FEMALE | 
#line 2087
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2088
        .doubleBattle = FALSE,
#line 2089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2091
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2092
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 2093
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2098
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 2100
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2105
    [TRAINER_JESSICA_4] =
    {
#line 2106
        .trainerName = _("Jessica"),
#line 2107
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2108
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2109
F_TRAINER_FEMALE | 
#line 2110
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2111
        .doubleBattle = FALSE,
#line 2112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2114
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2115
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 2116
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2121
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2122
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 2123
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2128
    [TRAINER_JESSICA_5] =
    {
#line 2129
        .trainerName = _("Jessica"),
#line 2130
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2131
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2132
F_TRAINER_FEMALE | 
#line 2133
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2134
        .doubleBattle = FALSE,
#line 2135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2137
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2138
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 2139
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 2144
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2145
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 2146
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 2151
    [TRAINER_WINSTON_1] =
    {
#line 2152
        .trainerName = _("Winston"),
#line 2153
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2154
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2156
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2157
        .doubleBattle = FALSE,
#line 2158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2160
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2160
            .heldItem = ITEM_NUGGET,
#line 2161
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2163
    [TRAINER_MOLLIE] =
    {
#line 2164
        .trainerName = _("Mollie"),
#line 2165
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2166
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 2167
F_TRAINER_FEMALE | 
#line 2168
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2169
        .doubleBattle = FALSE,
#line 2170
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2172
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2173
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2175
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2176
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2178
    [TRAINER_GARRET] =
    {
#line 2179
        .trainerName = _("Garret"),
#line 2180
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2181
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2183
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2184
        .doubleBattle = FALSE,
#line 2185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2187
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2187
            .heldItem = ITEM_NUGGET,
#line 2188
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2190
    [TRAINER_WINSTON_2] =
    {
#line 2191
        .trainerName = _("Winston"),
#line 2192
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2193
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2195
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2196
        .doubleBattle = FALSE,
#line 2197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2199
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2199
            .heldItem = ITEM_NUGGET,
#line 2200
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2202
    [TRAINER_WINSTON_3] =
    {
#line 2203
        .trainerName = _("Winston"),
#line 2204
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2205
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2207
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2208
        .doubleBattle = FALSE,
#line 2209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2211
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2211
            .heldItem = ITEM_NUGGET,
#line 2212
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2214
    [TRAINER_WINSTON_4] =
    {
#line 2215
        .trainerName = _("Winston"),
#line 2216
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2217
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2219
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2220
        .doubleBattle = FALSE,
#line 2221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2223
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2223
            .heldItem = ITEM_NUGGET,
#line 2224
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2226
    [TRAINER_WINSTON_5] =
    {
#line 2227
        .trainerName = _("Winston"),
#line 2228
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2229
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 2231
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2232
        .doubleBattle = FALSE,
#line 2233
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2235
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2235
            .heldItem = ITEM_NUGGET,
#line 2236
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 2237
                MOVE_FURY_SWIPES,
                MOVE_MUD_SPORT,
                MOVE_ODOR_SLEUTH,
                MOVE_SAND_ATTACK,
            },
            },
        },
    },
#line 2242
    [TRAINER_STEVE_1] =
    {
#line 2243
        .trainerName = _("Steve"),
#line 2244
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2245
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2247
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2248
        .doubleBattle = FALSE,
#line 2249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2251
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2252
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2254
    [TRAINER_THALIA_1] =
    {
#line 2255
        .trainerName = _("Thalia"),
#line 2256
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2257
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 2258
F_TRAINER_FEMALE | 
#line 2259
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2260
        .doubleBattle = FALSE,
#line 2261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2263
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2264
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 2266
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2267
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2269
    [TRAINER_MARK] =
    {
#line 2270
        .trainerName = _("Mark"),
#line 2271
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2272
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2274
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2275
        .doubleBattle = FALSE,
#line 2276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2278
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2279
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2281
    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 2282
        .trainerName = _("Grunt"),
#line 2283
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2284
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 2285
F_TRAINER_FEMALE | 
#line 2286
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2287
        .doubleBattle = FALSE,
#line 2288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2290
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2291
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2293
    [TRAINER_STEVE_2] =
    {
#line 2294
        .trainerName = _("Steve"),
#line 2295
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2296
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2298
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2299
        .doubleBattle = FALSE,
#line 2300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2302
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2303
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2305
    [TRAINER_STEVE_3] =
    {
#line 2306
        .trainerName = _("Steve"),
#line 2307
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2308
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2310
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2311
        .doubleBattle = FALSE,
#line 2312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2314
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2315
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 2317
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2318
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2320
    [TRAINER_STEVE_4] =
    {
#line 2321
        .trainerName = _("Steve"),
#line 2322
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2323
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2325
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2326
        .doubleBattle = FALSE,
#line 2327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2329
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2330
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 2332
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2333
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2335
    [TRAINER_STEVE_5] =
    {
#line 2336
        .trainerName = _("Steve"),
#line 2337
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2338
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 2340
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2341
        .doubleBattle = FALSE,
#line 2342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2344
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2345
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 2347
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2348
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2350
    [TRAINER_LUIS] =
    {
#line 2351
        .trainerName = _("Luis"),
#line 2352
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2353
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2355
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2356
        .doubleBattle = FALSE,
#line 2357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2359
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2360
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2362
    [TRAINER_DOMINIK] =
    {
#line 2363
        .trainerName = _("Dominik"),
#line 2364
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2365
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2367
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2368
        .doubleBattle = FALSE,
#line 2369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2371
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2372
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2374
    [TRAINER_DOUGLAS] =
    {
#line 2375
        .trainerName = _("Douglas"),
#line 2376
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2377
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2379
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2380
        .doubleBattle = FALSE,
#line 2381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2383
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2384
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 2386
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2387
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2389
    [TRAINER_DARRIN] =
    {
#line 2390
        .trainerName = _("Darrin"),
#line 2391
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2392
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2394
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2395
        .doubleBattle = FALSE,
#line 2396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2398
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2399
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 2401
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2402
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 2404
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2405
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2407
    [TRAINER_TONY_1] =
    {
#line 2408
        .trainerName = _("Tony"),
#line 2409
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2410
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2412
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2413
        .doubleBattle = FALSE,
#line 2414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2416
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2417
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2419
    [TRAINER_JEROME] =
    {
#line 2420
        .trainerName = _("Jerome"),
#line 2421
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2422
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2424
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2425
        .doubleBattle = FALSE,
#line 2426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2428
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2429
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2431
    [TRAINER_MATTHEW] =
    {
#line 2432
        .trainerName = _("Matthew"),
#line 2433
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2434
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2436
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2437
        .doubleBattle = FALSE,
#line 2438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2440
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2441
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2443
    [TRAINER_DAVID] =
    {
#line 2444
        .trainerName = _("David"),
#line 2445
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2446
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2448
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2449
        .doubleBattle = FALSE,
#line 2450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2452
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2453
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 2455
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2456
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2458
    [TRAINER_SPENCER] =
    {
#line 2459
        .trainerName = _("Spencer"),
#line 2460
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2461
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2463
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2464
        .doubleBattle = FALSE,
#line 2465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2467
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2468
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2470
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2471
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2473
    [TRAINER_ROLAND] =
    {
#line 2474
        .trainerName = _("Roland"),
#line 2475
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2476
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2478
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2479
        .doubleBattle = FALSE,
#line 2480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2482
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2483
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2485
    [TRAINER_NOLEN] =
    {
#line 2486
        .trainerName = _("Nolen"),
#line 2487
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2488
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2490
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2491
        .doubleBattle = FALSE,
#line 2492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2494
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2495
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2497
    [TRAINER_STAN] =
    {
#line 2498
        .trainerName = _("Stan"),
#line 2499
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2500
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2502
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2503
        .doubleBattle = FALSE,
#line 2504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2506
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2507
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2509
    [TRAINER_BARRY] =
    {
#line 2510
        .trainerName = _("Barry"),
#line 2511
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2512
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2514
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2515
        .doubleBattle = FALSE,
#line 2516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2518
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2519
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2521
    [TRAINER_DEAN] =
    {
#line 2522
        .trainerName = _("Dean"),
#line 2523
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2524
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2526
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2527
        .doubleBattle = FALSE,
#line 2528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2530
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2531
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 2533
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2534
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 2536
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2537
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2539
    [TRAINER_RODNEY] =
    {
#line 2540
        .trainerName = _("Rodney"),
#line 2541
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2542
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2544
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2545
        .doubleBattle = FALSE,
#line 2546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2548
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2549
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2551
    [TRAINER_RICHARD] =
    {
#line 2552
        .trainerName = _("Richard"),
#line 2553
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2554
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2556
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2557
        .doubleBattle = FALSE,
#line 2558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2560
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2561
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2563
    [TRAINER_HERMAN] =
    {
#line 2564
        .trainerName = _("Herman"),
#line 2565
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2566
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2568
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2569
        .doubleBattle = FALSE,
#line 2570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2572
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2573
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2575
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2576
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2578
    [TRAINER_SANTIAGO] =
    {
#line 2579
        .trainerName = _("Santiago"),
#line 2580
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2581
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2583
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2584
        .doubleBattle = FALSE,
#line 2585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2587
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2588
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2590
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2591
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2593
    [TRAINER_GILBERT] =
    {
#line 2594
        .trainerName = _("Gilbert"),
#line 2595
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2596
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2598
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2599
        .doubleBattle = FALSE,
#line 2600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2602
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2603
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2605
    [TRAINER_FRANKLIN] =
    {
#line 2606
        .trainerName = _("Franklin"),
#line 2607
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2608
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2610
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2611
        .doubleBattle = FALSE,
#line 2612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2614
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2615
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2617
    [TRAINER_KEVIN] =
    {
#line 2618
        .trainerName = _("Kevin"),
#line 2619
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2620
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2622
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2623
        .doubleBattle = FALSE,
#line 2624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2626
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2627
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2629
    [TRAINER_JACK] =
    {
#line 2630
        .trainerName = _("Jack"),
#line 2631
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2632
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2634
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2635
        .doubleBattle = FALSE,
#line 2636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2638
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2639
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2641
    [TRAINER_DUDLEY] =
    {
#line 2642
        .trainerName = _("Dudley"),
#line 2643
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2644
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2646
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2647
        .doubleBattle = FALSE,
#line 2648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2650
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2651
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2653
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2654
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2656
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2657
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2659
    [TRAINER_CHAD] =
    {
#line 2660
        .trainerName = _("Chad"),
#line 2661
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2662
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2664
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2665
        .doubleBattle = FALSE,
#line 2666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2668
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2669
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2671
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2672
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2674
    [TRAINER_TONY_2] =
    {
#line 2675
        .trainerName = _("Tony"),
#line 2676
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2677
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2679
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2680
        .doubleBattle = FALSE,
#line 2681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2683
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2684
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2686
    [TRAINER_TONY_3] =
    {
#line 2687
        .trainerName = _("Tony"),
#line 2688
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2689
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2691
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2692
        .doubleBattle = FALSE,
#line 2693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2695
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2696
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2698
    [TRAINER_TONY_4] =
    {
#line 2699
        .trainerName = _("Tony"),
#line 2700
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2701
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2703
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2704
        .doubleBattle = FALSE,
#line 2705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2707
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2708
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 2710
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2711
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2713
    [TRAINER_TONY_5] =
    {
#line 2714
        .trainerName = _("Tony"),
#line 2715
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2716
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 2718
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2719
        .doubleBattle = FALSE,
#line 2720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2722
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2723
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 2725
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2726
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2728
    [TRAINER_TAKAO] =
    {
#line 2729
        .trainerName = _("Takao"),
#line 2730
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2731
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2733
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2734
        .doubleBattle = FALSE,
#line 2735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2737
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2738
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2740
    [TRAINER_HITOSHI] =
    {
#line 2741
        .trainerName = _("Hitoshi"),
#line 2742
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2743
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2745
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2746
        .doubleBattle = FALSE,
#line 2747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2749
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2750
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 2752
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2753
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2755
    [TRAINER_KIYO] =
    {
#line 2756
        .trainerName = _("Kiyo"),
#line 2757
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2758
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2760
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2761
        .doubleBattle = FALSE,
#line 2762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2764
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2765
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2767
    [TRAINER_KOICHI] =
    {
#line 2768
        .trainerName = _("Koichi"),
#line 2769
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2770
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2772
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2773
        .doubleBattle = FALSE,
#line 2774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2776
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2777
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 2779
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2780
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2782
    [TRAINER_NOB_1] =
    {
#line 2783
        .trainerName = _("Nob"),
#line 2784
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2785
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2787
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2788
        .doubleBattle = FALSE,
#line 2789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2791
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2792
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2794
    [TRAINER_NOB_2] =
    {
#line 2795
        .trainerName = _("Nob"),
#line 2796
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2797
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2799
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2800
        .doubleBattle = FALSE,
#line 2801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2803
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2804
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2806
    [TRAINER_NOB_3] =
    {
#line 2807
        .trainerName = _("Nob"),
#line 2808
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2809
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2811
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2812
        .doubleBattle = FALSE,
#line 2813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2815
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2816
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 2818
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2819
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2821
    [TRAINER_NOB_4] =
    {
#line 2822
        .trainerName = _("Nob"),
#line 2823
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2824
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2826
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2827
        .doubleBattle = FALSE,
#line 2828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2830
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2831
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 2833
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2834
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 2836
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2837
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2839
    [TRAINER_NOB_5] =
    {
#line 2840
        .trainerName = _("Nob"),
#line 2841
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2842
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2844
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2845
        .doubleBattle = FALSE,
#line 2846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2848
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2849
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2851
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2852
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2854
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2855
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 2857
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2857
            .heldItem = ITEM_BLACK_BELT,
#line 2858
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2860
    [TRAINER_YUJI] =
    {
#line 2861
        .trainerName = _("Yuji"),
#line 2862
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2863
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2865
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2866
        .doubleBattle = FALSE,
#line 2867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2869
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2870
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 2872
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2875
    [TRAINER_DAISUKE] =
    {
#line 2876
        .trainerName = _("Daisuke"),
#line 2877
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2878
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2880
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2881
        .doubleBattle = FALSE,
#line 2882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2884
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2885
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2887
    [TRAINER_ATSUSHI] =
    {
#line 2888
        .trainerName = _("Atsushi"),
#line 2889
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2890
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 2892
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2893
        .doubleBattle = FALSE,
#line 2894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2896
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2897
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2899
    [TRAINER_KIRK] =
    {
#line 2900
        .trainerName = _("Kirk"),
#line 2901
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2902
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2904
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2905
        .doubleBattle = FALSE,
#line 2906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2908
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2909
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 2910
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_LEER,
            },
            },
            {
#line 2915
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2916
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 2917
                MOVE_CHARGE,
                MOVE_SHOCK_WAVE,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 2921
    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2922
        .trainerName = _("Grunt"),
#line 2923
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2924
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 2925
F_TRAINER_FEMALE | 
#line 2926
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2927
        .doubleBattle = FALSE,
#line 2928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2930
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2931
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 2933
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2934
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2936
    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2937
        .trainerName = _("Grunt"),
#line 2938
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2939
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 2941
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2942
        .doubleBattle = FALSE,
#line 2943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2945
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2946
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2948
    [TRAINER_SHAWN] =
    {
#line 2949
        .trainerName = _("Shawn"),
#line 2950
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2951
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2953
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2954
        .doubleBattle = FALSE,
#line 2955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2957
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2958
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 2960
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2961
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2963
    [TRAINER_FERNANDO_1] =
    {
#line 2964
        .trainerName = _("Fernando"),
#line 2965
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2966
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2968
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2969
        .doubleBattle = FALSE,
#line 2970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2972
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2973
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 2975
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2976
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2978
    [TRAINER_DALTON_1] =
    {
#line 2979
        .trainerName = _("Dalton"),
#line 2980
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2981
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2983
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2984
        .doubleBattle = FALSE,
#line 2985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2987
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2988
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 2990
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2991
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 2993
    [TRAINER_DALTON_2] =
    {
#line 2994
        .trainerName = _("Dalton"),
#line 2995
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2996
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 2998
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2999
        .doubleBattle = FALSE,
#line 3000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3002
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3003
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 3005
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3006
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 3008
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3009
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3011
    [TRAINER_DALTON_3] =
    {
#line 3012
        .trainerName = _("Dalton"),
#line 3013
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3014
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3016
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3017
        .doubleBattle = FALSE,
#line 3018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3020
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3021
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 3023
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3024
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 3026
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3027
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3029
    [TRAINER_DALTON_4] =
    {
#line 3030
        .trainerName = _("Dalton"),
#line 3031
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3032
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3034
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3035
        .doubleBattle = FALSE,
#line 3036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3038
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3039
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 3041
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3042
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 3044
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3045
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3047
    [TRAINER_DALTON_5] =
    {
#line 3048
        .trainerName = _("Dalton"),
#line 3049
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 3050
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 3052
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3053
        .doubleBattle = FALSE,
#line 3054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3056
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3057
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 3059
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3060
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 3062
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3063
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3065
    [TRAINER_COLE] =
    {
#line 3066
        .trainerName = _("Cole"),
#line 3067
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3068
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3070
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3071
        .doubleBattle = FALSE,
#line 3072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3074
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3075
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3077
    [TRAINER_JEFF] =
    {
#line 3078
        .trainerName = _("Jeff"),
#line 3079
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3080
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3082
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3083
        .doubleBattle = FALSE,
#line 3084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3086
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3087
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 3089
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3090
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3092
    [TRAINER_AXLE] =
    {
#line 3093
        .trainerName = _("Axle"),
#line 3094
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3095
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3097
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3098
        .doubleBattle = FALSE,
#line 3099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3101
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3102
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3104
    [TRAINER_JACE] =
    {
#line 3105
        .trainerName = _("Jace"),
#line 3106
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3107
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3109
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3110
        .doubleBattle = FALSE,
#line 3111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3113
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3114
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3116
    [TRAINER_KEEGAN] =
    {
#line 3117
        .trainerName = _("Keegan"),
#line 3118
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3119
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3121
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3122
        .doubleBattle = FALSE,
#line 3123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3125
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3126
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3128
    [TRAINER_BERNIE_1] =
    {
#line 3129
        .trainerName = _("Bernie"),
#line 3130
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3131
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3133
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3134
        .doubleBattle = FALSE,
#line 3135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3137
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3138
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 3140
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3141
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3143
    [TRAINER_BERNIE_2] =
    {
#line 3144
        .trainerName = _("Bernie"),
#line 3145
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3146
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3148
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3149
        .doubleBattle = FALSE,
#line 3150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3152
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3153
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 3155
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3156
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3158
    [TRAINER_BERNIE_3] =
    {
#line 3159
        .trainerName = _("Bernie"),
#line 3160
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3161
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3163
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3164
        .doubleBattle = FALSE,
#line 3165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3167
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3168
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 3170
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3171
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3173
    [TRAINER_BERNIE_4] =
    {
#line 3174
        .trainerName = _("Bernie"),
#line 3175
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3176
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3178
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3179
        .doubleBattle = FALSE,
#line 3180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3182
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3183
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 3185
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3186
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3188
    [TRAINER_BERNIE_5] =
    {
#line 3189
        .trainerName = _("Bernie"),
#line 3190
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 3191
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 3193
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 3194
        .doubleBattle = FALSE,
#line 3195
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3197
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3198
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 3200
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3201
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3203
    [TRAINER_DREW] =
    {
#line 3204
        .trainerName = _("Drew"),
#line 3205
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3206
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3208
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3209
        .doubleBattle = FALSE,
#line 3210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3212
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3213
            .lvl = 23,
            .nature = NATURE_HARDY,
            .moves = {
#line 3214
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3219
    [TRAINER_BEAU] =
    {
#line 3220
        .trainerName = _("Beau"),
#line 3221
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3222
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3224
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3225
        .doubleBattle = FALSE,
#line 3226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3228
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3229
            .lvl = 21,
            .nature = NATURE_HARDY,
            .moves = {
#line 3230
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3235
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3236
            .lvl = 21,
            .nature = NATURE_HARDY,
            .moves = {
#line 3237
                MOVE_POISON_STING,
                MOVE_SAND_ATTACK,
                MOVE_SCRATCH,
                MOVE_DIG,
            },
            },
            {
#line 3242
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3243
            .lvl = 21,
            .nature = NATURE_HARDY,
            .moves = {
#line 3244
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3249
    [TRAINER_LARRY] =
    {
#line 3250
        .trainerName = _("Larry"),
#line 3251
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3252
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3254
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3255
        .doubleBattle = FALSE,
#line 3256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3258
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3259
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3261
    [TRAINER_SHANE] =
    {
#line 3262
        .trainerName = _("Shane"),
#line 3263
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3264
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3266
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3267
        .doubleBattle = FALSE,
#line 3268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3270
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3271
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 3273
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3274
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3276
    [TRAINER_JUSTIN] =
    {
#line 3277
        .trainerName = _("Justin"),
#line 3278
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3279
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3281
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3282
        .doubleBattle = FALSE,
#line 3283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3285
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3286
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3288
    [TRAINER_ETHAN_1] =
    {
#line 3289
        .trainerName = _("Ethan"),
#line 3290
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3291
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3293
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3294
        .doubleBattle = FALSE,
#line 3295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3297
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3298
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
            {
#line 3300
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3301
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3303
    [TRAINER_AUTUMN] =
    {
#line 3304
        .trainerName = _("Autumn"),
#line 3305
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 3306
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 3307
F_TRAINER_FEMALE | 
#line 3308
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3309
        .doubleBattle = FALSE,
#line 3310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3312
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3313
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3315
    [TRAINER_TRAVIS] =
    {
#line 3316
        .trainerName = _("Travis"),
#line 3317
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3318
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3320
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3321
        .doubleBattle = FALSE,
#line 3322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3324
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3325
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3327
    [TRAINER_ETHAN_2] =
    {
#line 3328
        .trainerName = _("Ethan"),
#line 3329
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3330
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3332
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3333
        .doubleBattle = FALSE,
#line 3334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3336
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3337
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 3339
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3340
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3342
    [TRAINER_ETHAN_3] =
    {
#line 3343
        .trainerName = _("Ethan"),
#line 3344
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3345
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3347
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3348
        .doubleBattle = FALSE,
#line 3349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3351
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3352
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 3354
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3355
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3357
    [TRAINER_ETHAN_4] =
    {
#line 3358
        .trainerName = _("Ethan"),
#line 3359
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3360
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3362
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3363
        .doubleBattle = FALSE,
#line 3364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3366
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 3369
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3370
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 3372
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3373
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3375
    [TRAINER_ETHAN_5] =
    {
#line 3376
        .trainerName = _("Ethan"),
#line 3377
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3378
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 3380
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3381
        .doubleBattle = FALSE,
#line 3382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3384
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3385
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 3387
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3388
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 3390
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3391
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3393
    [TRAINER_BRENT] =
    {
#line 3394
        .trainerName = _("Brent"),
#line 3395
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3396
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3398
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3399
        .doubleBattle = FALSE,
#line 3400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3402
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3403
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3405
    [TRAINER_DONALD] =
    {
#line 3406
        .trainerName = _("Donald"),
#line 3407
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3408
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3410
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3411
        .doubleBattle = FALSE,
#line 3412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3414
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3415
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 3417
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3418
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 3420
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3421
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3423
    [TRAINER_TAYLOR] =
    {
#line 3424
        .trainerName = _("Taylor"),
#line 3425
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3426
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3428
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3429
        .doubleBattle = FALSE,
#line 3430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3432
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3433
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 3435
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3436
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 3438
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3439
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3441
    [TRAINER_JEFFREY_1] =
    {
#line 3442
        .trainerName = _("Jeffrey"),
#line 3443
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3444
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3446
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3447
        .doubleBattle = FALSE,
#line 3448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3450
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3451
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 3453
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3454
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 3456
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3457
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3459
    [TRAINER_DEREK] =
    {
#line 3460
        .trainerName = _("Derek"),
#line 3461
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3462
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3464
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3465
        .doubleBattle = FALSE,
#line 3466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3468
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3469
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 3471
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3472
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3474
    [TRAINER_JEFFREY_2] =
    {
#line 3475
        .trainerName = _("Jeffrey"),
#line 3476
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3477
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3479
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3480
        .doubleBattle = FALSE,
#line 3481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3483
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3484
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 3486
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3487
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 3489
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3490
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3492
    [TRAINER_JEFFREY_3] =
    {
#line 3493
        .trainerName = _("Jeffrey"),
#line 3494
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3495
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3497
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3498
        .doubleBattle = FALSE,
#line 3499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3501
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 3504
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3505
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 3507
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3508
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3510
    [TRAINER_JEFFREY_4] =
    {
#line 3511
        .trainerName = _("Jeffrey"),
#line 3512
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3513
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3515
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3516
        .doubleBattle = FALSE,
#line 3517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3519
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3520
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 3522
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3523
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 3525
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3526
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 3528
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3529
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3531
    [TRAINER_JEFFREY_5] =
    {
#line 3532
        .trainerName = _("Jeffrey"),
#line 3533
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3534
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 3536
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3537
        .doubleBattle = FALSE,
#line 3538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3540
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3541
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 3543
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3544
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 3546
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3547
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 3549
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3549
            .heldItem = ITEM_SILVER_POWDER,
#line 3550
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 3552
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3553
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3555
    [TRAINER_EDWARD] =
    {
#line 3556
        .trainerName = _("Edward"),
#line 3557
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3558
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3560
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3561
        .doubleBattle = FALSE,
#line 3562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3564
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3565
            .lvl = 15,
            .nature = NATURE_HARDY,
            .moves = {
#line 3566
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3568
    [TRAINER_PRESTON] =
    {
#line 3569
        .trainerName = _("Preston"),
#line 3570
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3571
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3573
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3574
        .doubleBattle = FALSE,
#line 3575
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3577
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3578
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3580
    [TRAINER_VIRGIL] =
    {
#line 3581
        .trainerName = _("Virgil"),
#line 3582
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3583
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3585
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3586
        .doubleBattle = FALSE,
#line 3587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3589
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3590
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3592
    [TRAINER_BLAKE] =
    {
#line 3593
        .trainerName = _("Blake"),
#line 3594
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3595
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3597
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3598
        .doubleBattle = FALSE,
#line 3599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3601
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3602
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3604
    [TRAINER_WILLIAM] =
    {
#line 3605
        .trainerName = _("William"),
#line 3606
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3607
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3609
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3610
        .doubleBattle = FALSE,
#line 3611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3613
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 3616
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3617
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 3619
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3622
    [TRAINER_JOSHUA] =
    {
#line 3623
        .trainerName = _("Joshua"),
#line 3624
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3625
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3627
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3628
        .doubleBattle = FALSE,
#line 3629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3631
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3632
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 3634
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3635
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3637
    [TRAINER_CAMERON_1] =
    {
#line 3638
        .trainerName = _("Cameron"),
#line 3639
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3640
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3642
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3643
        .doubleBattle = FALSE,
#line 3644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3646
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3647
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3649
    [TRAINER_CAMERON_2] =
    {
#line 3650
        .trainerName = _("Cameron"),
#line 3651
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3652
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3654
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3655
        .doubleBattle = FALSE,
#line 3656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3658
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3659
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 3661
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3664
    [TRAINER_CAMERON_3] =
    {
#line 3665
        .trainerName = _("Cameron"),
#line 3666
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3667
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3669
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3670
        .doubleBattle = FALSE,
#line 3671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3673
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3674
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 3676
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3677
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3679
    [TRAINER_CAMERON_4] =
    {
#line 3680
        .trainerName = _("Cameron"),
#line 3681
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3682
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3684
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3685
        .doubleBattle = FALSE,
#line 3686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3688
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3689
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 3691
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3694
    [TRAINER_CAMERON_5] =
    {
#line 3695
        .trainerName = _("Cameron"),
#line 3696
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3697
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 3699
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3700
        .doubleBattle = FALSE,
#line 3701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3703
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3704
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 3706
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3707
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3709
    [TRAINER_JACLYN] =
    {
#line 3710
        .trainerName = _("Jaclyn"),
#line 3711
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3712
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3713
F_TRAINER_FEMALE | 
#line 3714
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3715
        .doubleBattle = FALSE,
#line 3716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3718
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3719
            .lvl = 16,
            .nature = NATURE_HARDY,
            .moves = {
#line 3720
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3722
    [TRAINER_HANNAH] =
    {
#line 3723
        .trainerName = _("Hannah"),
#line 3724
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3725
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3726
F_TRAINER_FEMALE | 
#line 3727
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3728
        .doubleBattle = FALSE,
#line 3729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3731
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3732
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3734
    [TRAINER_SAMANTHA] =
    {
#line 3735
        .trainerName = _("Samantha"),
#line 3736
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3737
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3738
F_TRAINER_FEMALE | 
#line 3739
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3740
        .doubleBattle = FALSE,
#line 3741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3743
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3744
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3746
    [TRAINER_MAURA] =
    {
#line 3747
        .trainerName = _("Maura"),
#line 3748
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3749
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3750
F_TRAINER_FEMALE | 
#line 3751
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3752
        .doubleBattle = FALSE,
#line 3753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3755
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3758
    [TRAINER_KAYLA] =
    {
#line 3759
        .trainerName = _("Jayla"),
#line 3760
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3761
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3762
F_TRAINER_FEMALE | 
#line 3763
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3764
        .doubleBattle = FALSE,
#line 3765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3767
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3768
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 3770
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3771
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 3773
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3774
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3776
    [TRAINER_ALEXIS] =
    {
#line 3777
        .trainerName = _("Alexis"),
#line 3778
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3779
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3780
F_TRAINER_FEMALE | 
#line 3781
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3782
        .doubleBattle = FALSE,
#line 3783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3785
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3786
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 3788
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3789
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3791
    [TRAINER_JACKI_1] =
    {
#line 3792
        .trainerName = _("Jacki"),
#line 3793
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3794
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3795
F_TRAINER_FEMALE | 
#line 3796
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3797
        .doubleBattle = FALSE,
#line 3798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3800
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3801
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 3803
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3804
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3806
    [TRAINER_JACKI_2] =
    {
#line 3807
        .trainerName = _("Jacki"),
#line 3808
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3809
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3810
F_TRAINER_FEMALE | 
#line 3811
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3812
        .doubleBattle = FALSE,
#line 3813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3815
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3816
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 3818
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3819
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3821
    [TRAINER_JACKI_3] =
    {
#line 3822
        .trainerName = _("Jacki"),
#line 3823
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3824
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3825
F_TRAINER_FEMALE | 
#line 3826
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3827
        .doubleBattle = FALSE,
#line 3828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3830
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3831
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 3833
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3834
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3836
    [TRAINER_JACKI_4] =
    {
#line 3837
        .trainerName = _("Jacki"),
#line 3838
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3839
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3840
F_TRAINER_FEMALE | 
#line 3841
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3842
        .doubleBattle = FALSE,
#line 3843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3845
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 3848
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3849
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3851
    [TRAINER_JACKI_5] =
    {
#line 3852
        .trainerName = _("Jacki"),
#line 3853
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3854
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 3855
F_TRAINER_FEMALE | 
#line 3856
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3857
        .doubleBattle = FALSE,
#line 3858
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3860
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3861
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 3863
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3864
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3866
    [TRAINER_WALTER_1] =
    {
#line 3867
        .trainerName = _("Walter"),
#line 3868
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3869
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3871
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3872
        .doubleBattle = FALSE,
#line 3873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3875
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3876
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3878
    [TRAINER_MICAH] =
    {
#line 3879
        .trainerName = _("Micah"),
#line 3880
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3881
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3883
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3884
        .doubleBattle = FALSE,
#line 3885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3887
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3888
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
            {
#line 3890
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3891
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3893
    [TRAINER_THOMAS] =
    {
#line 3894
        .trainerName = _("Thomas"),
#line 3895
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3896
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3898
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3899
        .doubleBattle = FALSE,
#line 3900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3902
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3903
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3905
    [TRAINER_WALTER_2] =
    {
#line 3906
        .trainerName = _("Walter"),
#line 3907
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3908
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3910
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3911
        .doubleBattle = FALSE,
#line 3912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3914
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3915
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 3917
    [TRAINER_WALTER_3] =
    {
#line 3918
        .trainerName = _("Walter"),
#line 3919
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3920
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3922
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3923
        .doubleBattle = FALSE,
#line 3924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3926
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3927
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 3928
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_ODOR_SLEUTH,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 3933
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3934
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 3935
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_ODOR_SLEUTH,
                MOVE_ROAR,
            },
            },
        },
    },
#line 3940
    [TRAINER_WALTER_4] =
    {
#line 3941
        .trainerName = _("Walter"),
#line 3942
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3943
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3945
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3946
        .doubleBattle = FALSE,
#line 3947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3949
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3950
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 3951
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_ODOR_SLEUTH,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 3956
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 3958
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_ODOR_SLEUTH,
            },
            },
        },
    },
#line 3962
    [TRAINER_WALTER_5] =
    {
#line 3963
        .trainerName = _("Walter"),
#line 3964
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3965
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 3967
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3968
        .doubleBattle = FALSE,
#line 3969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3971
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3972
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 3973
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_ODOR_SLEUTH,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 3978
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3979
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 3980
                MOVE_FURY_SWIPES,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_PSYCH_UP,
            },
            },
            {
#line 3985
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3986
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 3987
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_ODOR_SLEUTH,
                MOVE_ROAR,
            },
            },
        },
    },
#line 3992
    [TRAINER_SIDNEY] =
    {
#line 3993
        .trainerName = _("Sidney"),
#line 3994
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3995
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender = 
#line 3997
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3998
        .doubleBattle = FALSE,
#line 3999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,
#line 4000
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4002
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4003
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 4004
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 4009
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4010
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 4011
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 4016
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4017
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 4018
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 4023
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4024
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 4025
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 4030
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4030
            .heldItem = ITEM_SITRUS_BERRY,
#line 4031
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 4032
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 4037
    [TRAINER_PHOEBE] =
    {
#line 4038
        .trainerName = _("Phoebe"),
#line 4039
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 4040
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender = 
#line 4041
F_TRAINER_FEMALE | 
#line 4042
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 4043
        .doubleBattle = FALSE,
#line 4044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 4045
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4047
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4048
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 4049
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 4054
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4055
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 4056
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 4061
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4062
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 4063
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 4068
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4069
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 4070
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 4075
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4075
            .heldItem = ITEM_SITRUS_BERRY,
#line 4076
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 4077
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 4082
    [TRAINER_GLACIA] =
    {
#line 4083
        .trainerName = _("Glacia"),
#line 4084
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 4085
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender = 
#line 4086
F_TRAINER_FEMALE | 
#line 4087
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 4088
        .doubleBattle = FALSE,
#line 4089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 4090
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4092
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4093
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 4094
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 4099
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4100
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 4101
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4106
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4107
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 4108
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 4113
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4114
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 4115
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4120
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4120
            .heldItem = ITEM_SITRUS_BERRY,
#line 4121
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 4122
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 4127
    [TRAINER_DRAKE] =
    {
#line 4128
        .trainerName = _("Drake"),
#line 4129
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 4130
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender = 
#line 4132
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 4133
        .doubleBattle = FALSE,
#line 4134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 4135
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4137
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 4139
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 4144
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4145
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 4146
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 4151
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4152
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 4153
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 4158
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4159
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 4160
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4165
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4165
            .heldItem = ITEM_SITRUS_BERRY,
#line 4166
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 4167
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 4172
    [TRAINER_ROXANNE_1] =
    {
#line 4173
        .trainerName = _("Roxanne"),
#line 4174
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4175
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 4176
F_TRAINER_FEMALE | 
#line 4177
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4178
        .doubleBattle = FALSE,
#line 4179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4181
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4182
            .lvl = 12,
            .nature = NATURE_HARDY,
            .moves = {
#line 4183
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 4188
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4189
            .lvl = 12,
            .nature = NATURE_HARDY,
            .moves = {
#line 4190
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 4195
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .lvl = 12,
            .nature = NATURE_HARDY,
            .moves = {
#line 4197
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 4202
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4203
            .lvl = 12,
            .nature = NATURE_HARDY,
            .moves = {
#line 4204
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 4209
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4210
            .lvl = 12,
            .nature = NATURE_HARDY,
            .moves = {
#line 4211
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 4216
    [TRAINER_BRAWLY_1] =
    {
#line 4217
        .trainerName = _("Brawly"),
#line 4218
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4219
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 4221
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4222
        .doubleBattle = FALSE,
#line 4223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4225
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .lvl = 16,
            .nature = NATURE_HARDY,
            .moves = {
#line 4227
                MOVE_KARATE_CHOP,
                MOVE_LOW_KICK,
                MOVE_SEISMIC_TOSS,
                MOVE_BULK_UP,
            },
            },
            {
#line 4232
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4233
            .lvl = 16,
            .nature = NATURE_HARDY,
            .moves = {
#line 4234
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_BULK_UP,
            },
            },
            {
#line 4239
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4239
            .heldItem = ITEM_SITRUS_BERRY,
#line 4240
            .lvl = 19,
            .nature = NATURE_HARDY,
            .moves = {
#line 4241
                MOVE_ARM_THRUST,
                MOVE_VITAL_THROW,
                MOVE_REVERSAL,
                MOVE_BULK_UP,
            },
            },
        },
    },
#line 4246
    [TRAINER_WATTSON_1] =
    {
#line 4247
        .trainerName = _("Wattson"),
#line 4248
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4249
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 4251
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4252
        .doubleBattle = FALSE,
#line 4253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4255
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4256
            .lvl = 20,
            .nature = NATURE_HARDY,
            .moves = {
#line 4257
                MOVE_ROLLOUT,
                MOVE_SPARK,
                MOVE_SELF_DESTRUCT,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 4262
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4263
            .lvl = 20,
            .nature = NATURE_HARDY,
            .moves = {
#line 4264
                MOVE_SHOCK_WAVE,
                MOVE_LEER,
                MOVE_QUICK_ATTACK,
                MOVE_HOWL,
            },
            },
            {
#line 4269
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4270
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 4271
                MOVE_SUPERSONIC,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 4276
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4276
            .heldItem = ITEM_SITRUS_BERRY,
#line 4277
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 4278
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_HOWL,
            },
            },
        },
    },
#line 4283
    [TRAINER_FLANNERY_1] =
    {
#line 4284
        .trainerName = _("Flannery"),
#line 4285
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4286
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 4287
F_TRAINER_FEMALE | 
#line 4288
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4289
        .doubleBattle = FALSE,
#line 4290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4292
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4293
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 4294
                MOVE_OVERHEAT,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 4299
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4300
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 4301
                MOVE_OVERHEAT,
                MOVE_SMOG,
                MOVE_LIGHT_SCREEN,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 4306
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4307
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 4308
                MOVE_OVERHEAT,
                MOVE_TACKLE,
                MOVE_SUNNY_DAY,
                MOVE_ATTRACT,
            },
            },
            {
#line 4313
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4313
            .heldItem = ITEM_WHITE_HERB,
#line 4314
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 4315
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 4320
    [TRAINER_NORMAN_1] =
    {
#line 4321
        .trainerName = _("Norman"),
#line 4322
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4323
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 4325
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4326
        .doubleBattle = FALSE,
#line 4327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4329
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4330
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 4331
                MOVE_TEETER_DANCE,
                MOVE_PSYBEAM,
                MOVE_FACADE,
                MOVE_ENCORE,
            },
            },
            {
#line 4336
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4337
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 4338
                MOVE_SLASH,
                MOVE_FACADE,
                MOVE_ENCORE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 4343
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4343
            .heldItem = ITEM_SITRUS_BERRY,
#line 4344
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 4345
                MOVE_SLASH,
                MOVE_BELLY_DRUM,
                MOVE_FACADE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 4350
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4350
            .heldItem = ITEM_CHOICE_SCARF,
#line 4351
            .lvl = 31,
            .nature = NATURE_HARDY,
            .moves = {
#line 4352
                MOVE_FIRE_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_GIGA_IMPACT,
                MOVE_NIGHT_SLASH,
            },
            },
        },
    },
#line 4357
    [TRAINER_WINONA_1] =
    {
#line 4358
        .trainerName = _("Winona"),
#line 4359
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4360
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 4361
F_TRAINER_FEMALE | 
#line 4362
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4363
        .doubleBattle = FALSE,
#line 4364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4366
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4367
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 4368
                MOVE_PERISH_SONG,
                MOVE_MIRROR_MOVE,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 4373
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4373
            .heldItem = ITEM_TOXIC_ORB,
#line 4377
            .lvl = 29,
            .nature = NATURE_HARDY,
#line 4374
            .isShiny = TRUE,
#line 4375
            .majorProficiency = STAT_ATTACK,
#line 4376
            .minorProficiency = STAT_SPEED,
            .moves = {
#line 4378
                MOVE_FACADE,
                MOVE_PROTECT,
                MOVE_BRAVE_BIRD,
                MOVE_U_TURN,
            },
            },
            {
#line 4383
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4384
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 4385
                MOVE_WATER_GUN,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 4390
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4391
            .lvl = 31,
            .nature = NATURE_HARDY,
            .moves = {
#line 4392
                MOVE_SAND_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 4397
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4397
            .heldItem = ITEM_ORAN_BERRY,
#line 4398
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 4399
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 4404
    [TRAINER_TATE_AND_LIZA_1] =
    {
#line 4405
        .trainerName = _("Tate&Liza"),
#line 4406
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4407
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 4409
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4410
        .doubleBattle = TRUE,
#line 4411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4413
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4414
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 4415
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 4420
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4421
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 4422
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4427
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4427
            .heldItem = ITEM_SITRUS_BERRY,
#line 4428
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 4429
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4434
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .heldItem = ITEM_SITRUS_BERRY,
#line 4435
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 4436
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 4441
    [TRAINER_JUAN_1] =
    {
#line 4442
        .trainerName = _("Juan"),
#line 4443
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4444
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 4446
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4447
        .doubleBattle = FALSE,
#line 4448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4450
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4451
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 4452
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 4457
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4458
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 4459
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4464
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4465
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 4466
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4471
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4472
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 4473
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 4478
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4478
            .heldItem = ITEM_CHESTO_BERRY,
#line 4479
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 4480
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 4485
    [TRAINER_JERRY_1] =
    {
#line 4486
        .trainerName = _("Jerry"),
#line 4487
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4488
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4490
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4491
        .doubleBattle = FALSE,
#line 4492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4494
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4495
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4497
    [TRAINER_TED] =
    {
#line 4498
        .trainerName = _("Ted"),
#line 4499
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4500
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4502
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4503
        .doubleBattle = FALSE,
#line 4504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4506
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4507
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4509
    [TRAINER_PAUL] =
    {
#line 4510
        .trainerName = _("Paul"),
#line 4511
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4512
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4514
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4515
        .doubleBattle = FALSE,
#line 4516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4518
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4519
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 4521
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 4524
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4525
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4527
    [TRAINER_JERRY_2] =
    {
#line 4528
        .trainerName = _("Jerry"),
#line 4529
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4530
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4532
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4533
        .doubleBattle = FALSE,
#line 4534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4536
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4537
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 4539
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4540
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4542
    [TRAINER_JERRY_3] =
    {
#line 4543
        .trainerName = _("Jerry"),
#line 4544
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4545
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4547
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4548
        .doubleBattle = FALSE,
#line 4549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4551
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4552
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 4554
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4555
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4557
    [TRAINER_JERRY_4] =
    {
#line 4558
        .trainerName = _("Jerry"),
#line 4559
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4560
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4562
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4563
        .doubleBattle = FALSE,
#line 4564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4566
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4567
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 4569
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4570
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4572
    [TRAINER_JERRY_5] =
    {
#line 4573
        .trainerName = _("Jerry"),
#line 4574
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4575
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender = 
#line 4577
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4578
        .doubleBattle = FALSE,
#line 4579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4581
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4582
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 4584
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4585
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 4587
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4588
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4590
    [TRAINER_KAREN_1] =
    {
#line 4591
        .trainerName = _("Karen"),
#line 4592
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4593
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4594
F_TRAINER_FEMALE | 
#line 4595
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4596
        .doubleBattle = FALSE,
#line 4597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4599
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4600
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4602
    [TRAINER_GEORGIA] =
    {
#line 4603
        .trainerName = _("Georgia"),
#line 4604
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4605
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4606
F_TRAINER_FEMALE | 
#line 4607
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4608
        .doubleBattle = FALSE,
#line 4609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4611
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4612
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 4614
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4615
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4617
    [TRAINER_KAREN_2] =
    {
#line 4618
        .trainerName = _("Karen"),
#line 4619
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4620
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4621
F_TRAINER_FEMALE | 
#line 4622
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4623
        .doubleBattle = FALSE,
#line 4624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4626
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4627
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 4629
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4630
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4632
    [TRAINER_KAREN_3] =
    {
#line 4633
        .trainerName = _("Karen"),
#line 4634
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4635
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4636
F_TRAINER_FEMALE | 
#line 4637
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4638
        .doubleBattle = FALSE,
#line 4639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4641
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 4644
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4645
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4647
    [TRAINER_KAREN_4] =
    {
#line 4648
        .trainerName = _("Karen"),
#line 4649
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4650
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4651
F_TRAINER_FEMALE | 
#line 4652
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4653
        .doubleBattle = FALSE,
#line 4654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4656
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4657
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 4659
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4660
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4662
    [TRAINER_KAREN_5] =
    {
#line 4663
        .trainerName = _("Karen"),
#line 4664
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4665
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender = 
#line 4666
F_TRAINER_FEMALE | 
#line 4667
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4668
        .doubleBattle = FALSE,
#line 4669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4671
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4672
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 4674
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4675
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4677
    [TRAINER_KATE_AND_JOY] =
    {
#line 4678
        .trainerName = _("Kate & Joy"),
#line 4679
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4680
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4682
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4683
        .doubleBattle = TRUE,
#line 4684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4686
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4687
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 4688
                MOVE_HYPNOSIS,
                MOVE_PSYBEAM,
                MOVE_DIZZY_PUNCH,
                MOVE_TEETER_DANCE,
            },
            },
            {
#line 4693
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4694
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 4695
                MOVE_FOCUS_PUNCH,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 4700
    [TRAINER_ANNA_AND_MEG_1] =
    {
#line 4701
        .trainerName = _("Anna & Meg"),
#line 4702
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4703
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4705
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4706
        .doubleBattle = TRUE,
#line 4707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4709
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4710
            .lvl = 15,
            .nature = NATURE_HARDY,
            .moves = {
#line 4711
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4716
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4717
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 4718
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4722
    [TRAINER_ANNA_AND_MEG_2] =
    {
#line 4723
        .trainerName = _("Anna & Meg"),
#line 4724
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4725
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4727
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4728
        .doubleBattle = TRUE,
#line 4729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4731
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4732
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 4733
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4738
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4739
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 4740
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4744
    [TRAINER_ANNA_AND_MEG_3] =
    {
#line 4745
        .trainerName = _("Anna & Meg"),
#line 4746
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4747
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4749
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4750
        .doubleBattle = TRUE,
#line 4751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4753
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4754
            .lvl = 31,
            .nature = NATURE_HARDY,
            .moves = {
#line 4755
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4760
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4761
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 4762
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4766
    [TRAINER_ANNA_AND_MEG_4] =
    {
#line 4767
        .trainerName = _("Anna & Meg"),
#line 4768
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4769
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4771
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4772
        .doubleBattle = TRUE,
#line 4773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4775
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4776
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 4777
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4782
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4783
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 4784
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4788
    [TRAINER_ANNA_AND_MEG_5] =
    {
#line 4789
        .trainerName = _("Anna & Meg"),
#line 4790
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4791
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 4793
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4794
        .doubleBattle = TRUE,
#line 4795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4797
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4798
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 4799
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4804
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4805
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 4806
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4810
    [TRAINER_VICTOR] =
    {
#line 4811
        .trainerName = _("Victor"),
#line 4812
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4813
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4815
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4816
        .doubleBattle = FALSE,
#line 4817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4819
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4819
            .heldItem = ITEM_ORAN_BERRY,
#line 4820
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 4822
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4822
            .heldItem = ITEM_ORAN_BERRY,
#line 4823
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4825
    [TRAINER_MIGUEL_1] =
    {
#line 4826
        .trainerName = _("Miguel"),
#line 4827
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4828
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4830
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4831
        .doubleBattle = FALSE,
#line 4832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4834
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4834
            .heldItem = ITEM_ORAN_BERRY,
#line 4835
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4837
    [TRAINER_COLTON] =
    {
#line 4838
        .trainerName = _("Colton"),
#line 4839
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4840
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4842
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4843
        .doubleBattle = FALSE,
#line 4844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4846
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4846
            .heldItem = ITEM_ORAN_BERRY,
#line 4847
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 4848
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4853
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4853
            .heldItem = ITEM_ORAN_BERRY,
#line 4854
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 4855
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4860
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4860
            .heldItem = ITEM_ORAN_BERRY,
#line 4861
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 4862
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4867
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4867
            .heldItem = ITEM_ORAN_BERRY,
#line 4868
            .lvl = 12,
            .nature = NATURE_HARDY,
            .moves = {
#line 4869
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4874
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4874
            .heldItem = ITEM_ORAN_BERRY,
#line 4875
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 4876
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4881
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4881
            .heldItem = ITEM_ORAN_BERRY,
#line 4882
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 4883
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4888
    [TRAINER_MIGUEL_2] =
    {
#line 4889
        .trainerName = _("Miguel"),
#line 4890
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4891
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4893
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4894
        .doubleBattle = FALSE,
#line 4895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4897
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4897
            .heldItem = ITEM_ORAN_BERRY,
#line 4898
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4900
    [TRAINER_MIGUEL_3] =
    {
#line 4901
        .trainerName = _("Miguel"),
#line 4902
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4903
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4905
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4906
        .doubleBattle = FALSE,
#line 4907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4909
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4909
            .heldItem = ITEM_ORAN_BERRY,
#line 4910
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4912
    [TRAINER_MIGUEL_4] =
    {
#line 4913
        .trainerName = _("Miguel"),
#line 4914
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4915
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4917
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4918
        .doubleBattle = FALSE,
#line 4919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4921
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4921
            .heldItem = ITEM_ORAN_BERRY,
#line 4922
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4924
    [TRAINER_MIGUEL_5] =
    {
#line 4925
        .trainerName = _("Miguel"),
#line 4926
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4927
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 4929
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4930
        .doubleBattle = FALSE,
#line 4931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4933
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4933
            .heldItem = ITEM_SITRUS_BERRY,
#line 4934
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4936
    [TRAINER_VICTORIA] =
    {
#line 4937
        .trainerName = _("Victoria"),
#line 4938
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4939
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4940
F_TRAINER_FEMALE | 
#line 4941
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4942
        .doubleBattle = FALSE,
#line 4943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4945
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4945
            .heldItem = ITEM_ORAN_BERRY,
#line 4946
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4948
    [TRAINER_VANESSA] =
    {
#line 4949
        .trainerName = _("Vanessa"),
#line 4950
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4951
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4952
F_TRAINER_FEMALE | 
#line 4953
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4954
        .doubleBattle = FALSE,
#line 4955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4957
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4957
            .heldItem = ITEM_ORAN_BERRY,
#line 4958
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4960
    [TRAINER_BETHANY] =
    {
#line 4961
        .trainerName = _("Bethany"),
#line 4962
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4963
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4964
F_TRAINER_FEMALE | 
#line 4965
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4966
        .doubleBattle = FALSE,
#line 4967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4969
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4969
            .heldItem = ITEM_ORAN_BERRY,
#line 4970
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 4972
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4972
            .heldItem = ITEM_ORAN_BERRY,
#line 4973
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 4975
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4975
            .heldItem = ITEM_ORAN_BERRY,
#line 4976
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4978
    [TRAINER_ISABEL_1] =
    {
#line 4979
        .trainerName = _("Isabel"),
#line 4980
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4981
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4982
F_TRAINER_FEMALE | 
#line 4983
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4984
        .doubleBattle = FALSE,
#line 4985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4987
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4987
            .heldItem = ITEM_ORAN_BERRY,
#line 4988
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 4990
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4990
            .heldItem = ITEM_ORAN_BERRY,
#line 4991
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 4993
    [TRAINER_ISABEL_2] =
    {
#line 4994
        .trainerName = _("Isabel"),
#line 4995
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4996
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 4997
F_TRAINER_FEMALE | 
#line 4998
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4999
        .doubleBattle = FALSE,
#line 5000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5002
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .heldItem = ITEM_ORAN_BERRY,
#line 5003
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 5005
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5005
            .heldItem = ITEM_ORAN_BERRY,
#line 5006
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5008
    [TRAINER_ISABEL_3] =
    {
#line 5009
        .trainerName = _("Isabel"),
#line 5010
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5011
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 5012
F_TRAINER_FEMALE | 
#line 5013
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5014
        .doubleBattle = FALSE,
#line 5015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5017
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5017
            .heldItem = ITEM_ORAN_BERRY,
#line 5018
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 5020
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5020
            .heldItem = ITEM_ORAN_BERRY,
#line 5021
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5023
    [TRAINER_ISABEL_4] =
    {
#line 5024
        .trainerName = _("Isabel"),
#line 5025
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5026
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 5027
F_TRAINER_FEMALE | 
#line 5028
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5029
        .doubleBattle = FALSE,
#line 5030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5032
            .heldItem = ITEM_ORAN_BERRY,
#line 5033
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 5035
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5035
            .heldItem = ITEM_ORAN_BERRY,
#line 5036
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5038
    [TRAINER_ISABEL_5] =
    {
#line 5039
        .trainerName = _("Isabel"),
#line 5040
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5041
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 5042
F_TRAINER_FEMALE | 
#line 5043
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5044
        .doubleBattle = FALSE,
#line 5045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5047
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5047
            .heldItem = ITEM_SITRUS_BERRY,
#line 5048
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 5050
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5050
            .heldItem = ITEM_SITRUS_BERRY,
#line 5051
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5053
    [TRAINER_TIMOTHY_1] =
    {
#line 5054
        .trainerName = _("Timothy"),
#line 5055
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5056
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 5058
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5059
        .doubleBattle = FALSE,
#line 5060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5062
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5065
    [TRAINER_TIMOTHY_2] =
    {
#line 5066
        .trainerName = _("Timothy"),
#line 5067
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5068
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 5070
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5071
        .doubleBattle = FALSE,
#line 5072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5075
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 5076
                MOVE_ARM_THRUST,
                MOVE_KNOCK_OFF,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 5081
    [TRAINER_TIMOTHY_3] =
    {
#line 5082
        .trainerName = _("Timothy"),
#line 5083
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5084
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 5086
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5087
        .doubleBattle = FALSE,
#line 5088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5090
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5091
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 5092
                MOVE_ARM_THRUST,
                MOVE_KNOCK_OFF,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 5097
    [TRAINER_TIMOTHY_4] =
    {
#line 5098
        .trainerName = _("Timothy"),
#line 5099
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5100
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 5102
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5103
        .doubleBattle = FALSE,
#line 5104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5106
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5107
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 5108
                MOVE_ARM_THRUST,
                MOVE_BELLY_DRUM,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 5113
    [TRAINER_TIMOTHY_5] =
    {
#line 5114
        .trainerName = _("Timothy"),
#line 5115
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5116
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 5118
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5119
        .doubleBattle = FALSE,
#line 5120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5122
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 5124
                MOVE_ARM_THRUST,
                MOVE_BELLY_DRUM,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 5129
    [TRAINER_VICKY] =
    {
#line 5130
        .trainerName = _("Vicky"),
#line 5131
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 5132
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 5133
F_TRAINER_FEMALE | 
#line 5134
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5135
        .doubleBattle = FALSE,
#line 5136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5138
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5139
            .lvl = 18,
            .nature = NATURE_HARDY,
            .moves = {
#line 5140
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
        },
    },
#line 5145
    [TRAINER_SHELBY_1] =
    {
#line 5146
        .trainerName = _("Shelby"),
#line 5147
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5148
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 5149
F_TRAINER_FEMALE | 
#line 5150
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5151
        .doubleBattle = FALSE,
#line 5152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5154
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5155
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
            {
#line 5157
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5158
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5160
    [TRAINER_SHELBY_2] =
    {
#line 5161
        .trainerName = _("Shelby"),
#line 5162
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5163
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 5164
F_TRAINER_FEMALE | 
#line 5165
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5166
        .doubleBattle = FALSE,
#line 5167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5169
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5170
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 5172
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5173
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5175
    [TRAINER_SHELBY_3] =
    {
#line 5176
        .trainerName = _("Shelby"),
#line 5177
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5178
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 5179
F_TRAINER_FEMALE | 
#line 5180
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5181
        .doubleBattle = FALSE,
#line 5182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5184
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5185
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 5187
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5188
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5190
    [TRAINER_SHELBY_4] =
    {
#line 5191
        .trainerName = _("Shelby"),
#line 5192
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5193
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 5194
F_TRAINER_FEMALE | 
#line 5195
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5196
        .doubleBattle = FALSE,
#line 5197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5199
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5200
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 5202
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5203
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5205
    [TRAINER_SHELBY_5] =
    {
#line 5206
        .trainerName = _("Shelby"),
#line 5207
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5208
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 5209
F_TRAINER_FEMALE | 
#line 5210
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5211
        .doubleBattle = FALSE,
#line 5212
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5214
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5215
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 5217
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5218
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5220
    [TRAINER_CALVIN_1] =
    {
#line 5221
        .trainerName = _("Calvin"),
#line 5222
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5223
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5225
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5226
        .doubleBattle = FALSE,
#line 5227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5229
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5230
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5232
    [TRAINER_BILLY] =
    {
#line 5233
        .trainerName = _("Billy"),
#line 5234
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5235
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5237
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5238
        .doubleBattle = FALSE,
#line 5239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5241
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5242
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
            {
#line 5244
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5245
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5247
    [TRAINER_JOSH] =
    {
#line 5248
        .trainerName = _("Josh"),
#line 5249
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5250
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5252
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5253
        .doubleBattle = FALSE,
#line 5254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5256
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5257
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 5258
                MOVE_TACKLE,
            },
            },
        },
    },
#line 5260
    [TRAINER_TOMMY] =
    {
#line 5261
        .trainerName = _("Tommy"),
#line 5262
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5263
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5265
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5266
        .doubleBattle = FALSE,
#line 5267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5269
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5270
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 5272
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5273
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5275
    [TRAINER_JOEY] =
    {
#line 5276
        .trainerName = _("Joey"),
#line 5277
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5278
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5280
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5281
        .doubleBattle = FALSE,
#line 5282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5284
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5285
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5287
    [TRAINER_BEN] =
    {
#line 5288
        .trainerName = _("Ben"),
#line 5289
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5290
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5292
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5293
        .doubleBattle = FALSE,
#line 5294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5296
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5297
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 5298
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 5303
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5304
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 5305
                MOVE_AMNESIA,
                MOVE_SLUDGE,
                MOVE_YAWN,
                MOVE_POUND,
            },
            },
        },
    },
#line 5310
    [TRAINER_QUINCY] =
    {
#line 5311
        .trainerName = _("Quincy"),
#line 5312
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5313
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 5315
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5316
        .doubleBattle = FALSE,
#line 5317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5319
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5320
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 5321
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 5326
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5327
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 5328
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5333
    [TRAINER_KATELYNN] =
    {
#line 5334
        .trainerName = _("Katelynn"),
#line 5335
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5336
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 5337
F_TRAINER_FEMALE | 
#line 5338
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5339
        .doubleBattle = FALSE,
#line 5340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5342
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5343
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 5344
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 5349
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5350
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 5351
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 5356
    [TRAINER_JAYLEN] =
    {
#line 5357
        .trainerName = _("Jaylen"),
#line 5358
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5359
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5361
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5362
        .doubleBattle = FALSE,
#line 5363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5365
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5366
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5368
    [TRAINER_DILLON] =
    {
#line 5369
        .trainerName = _("Dillon"),
#line 5370
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5371
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5373
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5374
        .doubleBattle = FALSE,
#line 5375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5377
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5380
    [TRAINER_CALVIN_2] =
    {
#line 5381
        .trainerName = _("Calvin"),
#line 5382
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5383
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5385
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5386
        .doubleBattle = FALSE,
#line 5387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5389
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5390
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5392
    [TRAINER_CALVIN_3] =
    {
#line 5393
        .trainerName = _("Calvin"),
#line 5394
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5395
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5397
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5398
        .doubleBattle = FALSE,
#line 5399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5401
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5402
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 5404
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5407
    [TRAINER_CALVIN_4] =
    {
#line 5408
        .trainerName = _("Calvin"),
#line 5409
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5410
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5412
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5413
        .doubleBattle = FALSE,
#line 5414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5416
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5417
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 5419
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5420
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 5422
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5423
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5425
    [TRAINER_CALVIN_5] =
    {
#line 5426
        .trainerName = _("Calvin"),
#line 5427
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5428
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5430
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5431
        .doubleBattle = FALSE,
#line 5432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5434
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5435
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 5437
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5438
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 5440
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5441
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5443
    [TRAINER_EDDIE] =
    {
#line 5444
        .trainerName = _("Eddie"),
#line 5445
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5446
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5448
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5449
        .doubleBattle = FALSE,
#line 5450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5452
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5453
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5455
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5456
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5458
    [TRAINER_ALLEN] =
    {
#line 5459
        .trainerName = _("Allen"),
#line 5460
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5461
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5463
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5464
        .doubleBattle = FALSE,
#line 5465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5467
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5469
            .lvl = 6,
            .nature = NATURE_HARDY,
#line 5468
            .isShiny = TRUE,
            },
            {
#line 5471
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5472
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5474
    [TRAINER_TIMMY] =
    {
#line 5475
        .trainerName = _("Timmy"),
#line 5476
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5477
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5479
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5480
        .doubleBattle = FALSE,
#line 5481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5483
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5484
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 5486
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5487
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5489
    [TRAINER_WALLACE] =
    {
#line 5490
        .trainerName = _("Wallace"),
#line 5491
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 5492
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender = 
#line 5494
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5495
        .doubleBattle = FALSE,
#line 5496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 5497
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5499
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5500
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 5501
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 5506
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5507
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 5508
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5513
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5514
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 5515
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5520
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 5522
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 5527
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5528
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 5529
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 5534
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .heldItem = ITEM_SITRUS_BERRY,
#line 5535
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 5536
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5541
    [TRAINER_ANDREW] =
    {
#line 5542
        .trainerName = _("Andrew"),
#line 5543
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5544
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5546
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5547
        .doubleBattle = FALSE,
#line 5548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5550
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5551
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
            {
#line 5553
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5554
            .lvl = 10,
            .nature = NATURE_HARDY,
            },
            {
#line 5556
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5557
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5559
    [TRAINER_IVAN] =
    {
#line 5560
        .trainerName = _("Ivan"),
#line 5561
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5562
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5564
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5565
        .doubleBattle = FALSE,
#line 5566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5568
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5569
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
            {
#line 5571
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5572
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 5574
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5575
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5577
    [TRAINER_CLAUDE] =
    {
#line 5578
        .trainerName = _("Claude"),
#line 5579
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5580
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5582
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5583
        .doubleBattle = FALSE,
#line 5584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5586
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5587
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 5589
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 5592
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5593
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5595
    [TRAINER_ELLIOT_1] =
    {
#line 5596
        .trainerName = _("Elliot"),
#line 5597
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5598
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5600
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5601
        .doubleBattle = FALSE,
#line 5602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5604
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5605
            .lvl = 10,
            .nature = NATURE_HARDY,
            },
            {
#line 5607
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5608
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
            {
#line 5610
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5611
            .lvl = 10,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5613
    [TRAINER_NED] =
    {
#line 5614
        .trainerName = _("Ned"),
#line 5615
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5616
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5618
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5619
        .doubleBattle = FALSE,
#line 5620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5622
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5623
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5625
    [TRAINER_DALE] =
    {
#line 5626
        .trainerName = _("Dale"),
#line 5627
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5628
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5630
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5631
        .doubleBattle = FALSE,
#line 5632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5634
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5635
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 5637
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5638
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5640
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5641
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 5643
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5644
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5646
    [TRAINER_NOLAN] =
    {
#line 5647
        .trainerName = _("Nolan"),
#line 5648
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5649
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5651
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5652
        .doubleBattle = FALSE,
#line 5653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5655
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5656
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5658
    [TRAINER_BARNY] =
    {
#line 5659
        .trainerName = _("Barny"),
#line 5660
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5661
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5663
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5664
        .doubleBattle = FALSE,
#line 5665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5667
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5668
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 5670
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5671
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5673
    [TRAINER_WADE] =
    {
#line 5674
        .trainerName = _("Wade"),
#line 5675
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5676
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5678
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5679
        .doubleBattle = FALSE,
#line 5680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5682
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5683
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5685
    [TRAINER_CARTER] =
    {
#line 5686
        .trainerName = _("Carter"),
#line 5687
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5688
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5690
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5691
        .doubleBattle = FALSE,
#line 5692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5694
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5695
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 5697
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5700
    [TRAINER_ELLIOT_2] =
    {
#line 5701
        .trainerName = _("Elliot"),
#line 5702
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5703
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5705
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5706
        .doubleBattle = FALSE,
#line 5707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5709
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5710
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 5712
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5713
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 5715
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5716
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5718
    [TRAINER_ELLIOT_3] =
    {
#line 5719
        .trainerName = _("Elliot"),
#line 5720
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5721
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5723
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5724
        .doubleBattle = FALSE,
#line 5725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5727
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5728
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 5730
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5731
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 5733
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5734
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 5736
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5737
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5739
    [TRAINER_ELLIOT_4] =
    {
#line 5740
        .trainerName = _("Elliot"),
#line 5741
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5742
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5744
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5745
        .doubleBattle = FALSE,
#line 5746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5748
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5749
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 5751
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5752
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 5754
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5755
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 5757
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5760
    [TRAINER_ELLIOT_5] =
    {
#line 5761
        .trainerName = _("Elliot"),
#line 5762
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5763
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5765
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5766
        .doubleBattle = FALSE,
#line 5767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5769
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5770
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 5772
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5773
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 5775
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5776
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 5778
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5779
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5781
    [TRAINER_RONALD] =
    {
#line 5782
        .trainerName = _("Ronald"),
#line 5783
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5784
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5786
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5787
        .doubleBattle = FALSE,
#line 5788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5790
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5791
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
            {
#line 5793
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
            {
#line 5796
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5797
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
            {
#line 5799
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5800
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 5802
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5803
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 5805
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5806
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5808
    [TRAINER_JACOB] =
    {
#line 5809
        .trainerName = _("Jacob"),
#line 5810
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5811
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5813
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5814
        .doubleBattle = FALSE,
#line 5815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5817
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5818
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 5820
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5821
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 5823
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5824
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5826
    [TRAINER_ANTHONY] =
    {
#line 5827
        .trainerName = _("Anthony"),
#line 5828
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5829
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5831
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5832
        .doubleBattle = FALSE,
#line 5833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5835
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5836
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5838
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5839
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5841
    [TRAINER_BENJAMIN_1] =
    {
#line 5842
        .trainerName = _("Benjamin"),
#line 5843
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5844
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5846
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5847
        .doubleBattle = FALSE,
#line 5848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5850
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5851
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5853
    [TRAINER_BENJAMIN_2] =
    {
#line 5854
        .trainerName = _("Benjamin"),
#line 5855
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5856
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5858
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5859
        .doubleBattle = FALSE,
#line 5860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5862
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5863
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5865
    [TRAINER_BENJAMIN_3] =
    {
#line 5866
        .trainerName = _("Benjamin"),
#line 5867
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5868
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5870
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5871
        .doubleBattle = FALSE,
#line 5872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5874
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5875
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5877
    [TRAINER_BENJAMIN_4] =
    {
#line 5878
        .trainerName = _("Benjamin"),
#line 5879
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5880
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5882
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5883
        .doubleBattle = FALSE,
#line 5884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5886
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5887
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5889
    [TRAINER_BENJAMIN_5] =
    {
#line 5890
        .trainerName = _("Benjamin"),
#line 5891
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5892
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5894
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5895
        .doubleBattle = FALSE,
#line 5896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5898
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5899
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5901
    [TRAINER_ABIGAIL_1] =
    {
#line 5902
        .trainerName = _("Abigail"),
#line 5903
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5904
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5905
F_TRAINER_FEMALE | 
#line 5906
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5907
        .doubleBattle = FALSE,
#line 5908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5910
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5911
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5913
    [TRAINER_JASMINE] =
    {
#line 5914
        .trainerName = _("Jasmine"),
#line 5915
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5916
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5917
F_TRAINER_FEMALE | 
#line 5918
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5919
        .doubleBattle = FALSE,
#line 5920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5922
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5923
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5925
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5926
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5928
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5929
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5931
    [TRAINER_ABIGAIL_2] =
    {
#line 5932
        .trainerName = _("Abigail"),
#line 5933
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5934
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5935
F_TRAINER_FEMALE | 
#line 5936
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5937
        .doubleBattle = FALSE,
#line 5938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5940
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5941
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5943
    [TRAINER_ABIGAIL_3] =
    {
#line 5944
        .trainerName = _("Abigail"),
#line 5945
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5946
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5947
F_TRAINER_FEMALE | 
#line 5948
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5949
        .doubleBattle = FALSE,
#line 5950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5952
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5953
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5955
    [TRAINER_ABIGAIL_4] =
    {
#line 5956
        .trainerName = _("Abigail"),
#line 5957
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5958
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5959
F_TRAINER_FEMALE | 
#line 5960
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5961
        .doubleBattle = FALSE,
#line 5962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5964
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5965
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5967
    [TRAINER_ABIGAIL_5] =
    {
#line 5968
        .trainerName = _("Abigail"),
#line 5969
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5970
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5971
F_TRAINER_FEMALE | 
#line 5972
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5973
        .doubleBattle = FALSE,
#line 5974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5976
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5977
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5979
    [TRAINER_DYLAN_1] =
    {
#line 5980
        .trainerName = _("Dylan"),
#line 5981
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5982
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5984
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5985
        .doubleBattle = FALSE,
#line 5986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5988
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5989
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5991
    [TRAINER_DYLAN_2] =
    {
#line 5992
        .trainerName = _("Dylan"),
#line 5993
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5994
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5996
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5997
        .doubleBattle = FALSE,
#line 5998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6000
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6001
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6003
    [TRAINER_DYLAN_3] =
    {
#line 6004
        .trainerName = _("Dylan"),
#line 6005
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6006
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6008
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6009
        .doubleBattle = FALSE,
#line 6010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6012
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6013
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6015
    [TRAINER_DYLAN_4] =
    {
#line 6016
        .trainerName = _("Dylan"),
#line 6017
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6018
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6020
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6021
        .doubleBattle = FALSE,
#line 6022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6024
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6025
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6027
    [TRAINER_DYLAN_5] =
    {
#line 6028
        .trainerName = _("Dylan"),
#line 6029
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6030
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6032
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6033
        .doubleBattle = FALSE,
#line 6034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6036
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6037
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6039
    [TRAINER_MARIA_1] =
    {
#line 6040
        .trainerName = _("Maria"),
#line 6041
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6042
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6043
F_TRAINER_FEMALE | 
#line 6044
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6045
        .doubleBattle = FALSE,
#line 6046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6048
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6049
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6051
    [TRAINER_MARIA_2] =
    {
#line 6052
        .trainerName = _("Maria"),
#line 6053
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6054
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6055
F_TRAINER_FEMALE | 
#line 6056
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6057
        .doubleBattle = FALSE,
#line 6058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6060
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6061
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6063
    [TRAINER_MARIA_3] =
    {
#line 6064
        .trainerName = _("Maria"),
#line 6065
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6066
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6067
F_TRAINER_FEMALE | 
#line 6068
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6069
        .doubleBattle = FALSE,
#line 6070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6072
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6073
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6075
    [TRAINER_MARIA_4] =
    {
#line 6076
        .trainerName = _("Maria"),
#line 6077
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6078
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6079
F_TRAINER_FEMALE | 
#line 6080
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6081
        .doubleBattle = FALSE,
#line 6082
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6084
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6085
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6087
    [TRAINER_MARIA_5] =
    {
#line 6088
        .trainerName = _("Maria"),
#line 6089
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6090
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6091
F_TRAINER_FEMALE | 
#line 6092
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6093
        .doubleBattle = FALSE,
#line 6094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6096
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6097
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6099
    [TRAINER_CAMDEN] =
    {
#line 6100
        .trainerName = _("Camden"),
#line 6101
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6102
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6104
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6105
        .doubleBattle = FALSE,
#line 6106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6108
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6109
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 6111
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6112
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6114
    [TRAINER_DEMETRIUS] =
    {
#line 6115
        .trainerName = _("Demetrius"),
#line 6116
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 6117
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 6119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6120
        .doubleBattle = FALSE,
#line 6121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6123
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6124
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 6126
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6127
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6129
    [TRAINER_ISAIAH_1] =
    {
#line 6130
        .trainerName = _("Isaiah"),
#line 6131
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6132
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6134
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6135
        .doubleBattle = FALSE,
#line 6136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6138
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6139
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6141
    [TRAINER_PABLO_1] =
    {
#line 6142
        .trainerName = _("Pablo"),
#line 6143
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6144
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6146
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6147
        .doubleBattle = FALSE,
#line 6148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6150
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6151
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 6153
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6154
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6156
    [TRAINER_CHASE] =
    {
#line 6157
        .trainerName = _("Chase"),
#line 6158
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6159
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6161
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6162
        .doubleBattle = FALSE,
#line 6163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6165
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6166
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 6168
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6169
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6171
    [TRAINER_ISAIAH_2] =
    {
#line 6172
        .trainerName = _("Isaiah"),
#line 6173
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6174
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6176
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6177
        .doubleBattle = FALSE,
#line 6178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6180
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6181
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6183
    [TRAINER_ISAIAH_3] =
    {
#line 6184
        .trainerName = _("Isaiah"),
#line 6185
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6186
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6188
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6189
        .doubleBattle = FALSE,
#line 6190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6192
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6193
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6195
    [TRAINER_ISAIAH_4] =
    {
#line 6196
        .trainerName = _("Isaiah"),
#line 6197
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6198
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6200
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6201
        .doubleBattle = FALSE,
#line 6202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6204
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6205
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6207
    [TRAINER_ISAIAH_5] =
    {
#line 6208
        .trainerName = _("Isaiah"),
#line 6209
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6210
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6212
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6213
        .doubleBattle = FALSE,
#line 6214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6216
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6217
            .lvl = 48,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6219
    [TRAINER_ISOBEL] =
    {
#line 6220
        .trainerName = _("Isobel"),
#line 6221
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6222
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6223
F_TRAINER_FEMALE | 
#line 6224
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6225
        .doubleBattle = FALSE,
#line 6226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6228
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6229
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6231
    [TRAINER_DONNY] =
    {
#line 6232
        .trainerName = _("Donny"),
#line 6233
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6234
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6235
F_TRAINER_FEMALE | 
#line 6236
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6237
        .doubleBattle = FALSE,
#line 6238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6240
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6241
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 6243
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6244
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6246
    [TRAINER_TALIA] =
    {
#line 6247
        .trainerName = _("Talia"),
#line 6248
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6249
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6250
F_TRAINER_FEMALE | 
#line 6251
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6252
        .doubleBattle = FALSE,
#line 6253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6255
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6256
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6258
    [TRAINER_KATELYN_1] =
    {
#line 6259
        .trainerName = _("Katelyn"),
#line 6260
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6261
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6262
F_TRAINER_FEMALE | 
#line 6263
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6264
        .doubleBattle = FALSE,
#line 6265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6267
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6268
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6270
    [TRAINER_ALLISON] =
    {
#line 6271
        .trainerName = _("Allison"),
#line 6272
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6273
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6274
F_TRAINER_FEMALE | 
#line 6275
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6276
        .doubleBattle = FALSE,
#line 6277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6279
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6280
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 6282
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6283
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6285
    [TRAINER_KATELYN_2] =
    {
#line 6286
        .trainerName = _("Katelyn"),
#line 6287
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6288
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6289
F_TRAINER_FEMALE | 
#line 6290
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6291
        .doubleBattle = FALSE,
#line 6292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6294
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6295
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6297
    [TRAINER_KATELYN_3] =
    {
#line 6298
        .trainerName = _("Katelyn"),
#line 6299
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6300
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6301
F_TRAINER_FEMALE | 
#line 6302
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6303
        .doubleBattle = FALSE,
#line 6304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6306
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6307
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6309
    [TRAINER_KATELYN_4] =
    {
#line 6310
        .trainerName = _("Katelyn"),
#line 6311
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6312
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6313
F_TRAINER_FEMALE | 
#line 6314
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6315
        .doubleBattle = FALSE,
#line 6316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6318
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6319
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6321
    [TRAINER_KATELYN_5] =
    {
#line 6322
        .trainerName = _("Katelyn"),
#line 6323
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6324
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6325
F_TRAINER_FEMALE | 
#line 6326
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6327
        .doubleBattle = FALSE,
#line 6328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6330
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6331
            .lvl = 48,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6333
    [TRAINER_NICOLAS_1] =
    {
#line 6334
        .trainerName = _("Nicolas"),
#line 6335
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6336
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6338
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6339
        .doubleBattle = FALSE,
#line 6340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6342
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6343
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 6345
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6346
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6348
    [TRAINER_NICOLAS_2] =
    {
#line 6349
        .trainerName = _("Nicolas"),
#line 6350
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6351
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6353
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6354
        .doubleBattle = FALSE,
#line 6355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6357
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6358
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 6360
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6361
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6363
    [TRAINER_NICOLAS_3] =
    {
#line 6364
        .trainerName = _("Nicolas"),
#line 6365
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6366
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6368
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6369
        .doubleBattle = FALSE,
#line 6370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6372
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6373
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
            {
#line 6375
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6376
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6378
    [TRAINER_NICOLAS_4] =
    {
#line 6379
        .trainerName = _("Nicolas"),
#line 6380
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6381
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6383
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6384
        .doubleBattle = FALSE,
#line 6385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6387
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6388
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
            {
#line 6390
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6391
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
            {
#line 6393
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6394
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6396
    [TRAINER_NICOLAS_5] =
    {
#line 6397
        .trainerName = _("Nicolas"),
#line 6398
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6399
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6401
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6402
        .doubleBattle = FALSE,
#line 6403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6405
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6406
            .lvl = 49,
            .nature = NATURE_HARDY,
            },
            {
#line 6408
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6409
            .lvl = 49,
            .nature = NATURE_HARDY,
            },
            {
#line 6411
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6411
            .heldItem = ITEM_DRAGON_FANG,
#line 6412
            .lvl = 49,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6414
    [TRAINER_AARON] =
    {
#line 6415
        .trainerName = _("Aaron"),
#line 6416
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6417
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6419
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6420
        .doubleBattle = FALSE,
#line 6421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6423
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6424
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 6425
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 6430
    [TRAINER_PERRY] =
    {
#line 6431
        .trainerName = _("Perry"),
#line 6432
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6433
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6435
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6436
        .doubleBattle = FALSE,
#line 6437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6439
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6440
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6442
    [TRAINER_HUGH] =
    {
#line 6443
        .trainerName = _("Hugh"),
#line 6444
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6445
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6447
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6448
        .doubleBattle = FALSE,
#line 6449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6451
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6452
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 6454
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6455
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6457
    [TRAINER_PHIL] =
    {
#line 6458
        .trainerName = _("Phil"),
#line 6459
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6460
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6462
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6463
        .doubleBattle = FALSE,
#line 6464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6466
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6467
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6469
    [TRAINER_JARED] =
    {
#line 6470
        .trainerName = _("Jared"),
#line 6471
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6472
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6474
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6475
        .doubleBattle = FALSE,
#line 6476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6478
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6479
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 6481
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6482
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 6484
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6485
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6487
    [TRAINER_HUMBERTO] =
    {
#line 6488
        .trainerName = _("Humberto"),
#line 6489
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6490
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6492
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6493
        .doubleBattle = FALSE,
#line 6494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6496
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6497
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6499
    [TRAINER_PRESLEY] =
    {
#line 6500
        .trainerName = _("Presley"),
#line 6501
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6502
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6504
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6505
        .doubleBattle = FALSE,
#line 6506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6508
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6509
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 6511
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6512
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6514
    [TRAINER_EDWARDO] =
    {
#line 6515
        .trainerName = _("Edwardo"),
#line 6516
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6517
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6519
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6520
        .doubleBattle = FALSE,
#line 6521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6523
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6524
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 6526
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6527
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6529
    [TRAINER_COLIN] =
    {
#line 6530
        .trainerName = _("Colin"),
#line 6531
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6532
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6534
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6535
        .doubleBattle = FALSE,
#line 6536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6538
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6539
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 6541
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6542
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6544
    [TRAINER_ROBERT_1] =
    {
#line 6545
        .trainerName = _("Robert"),
#line 6546
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6547
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6549
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6550
        .doubleBattle = FALSE,
#line 6551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6553
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6554
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6556
    [TRAINER_BENNY] =
    {
#line 6557
        .trainerName = _("Benny"),
#line 6558
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6559
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6561
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6562
        .doubleBattle = FALSE,
#line 6563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6565
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6566
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 6568
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6569
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 6571
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6572
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6574
    [TRAINER_CHESTER] =
    {
#line 6575
        .trainerName = _("Chester"),
#line 6576
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6577
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6579
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6580
        .doubleBattle = FALSE,
#line 6581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6583
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6584
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 6586
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6587
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6589
    [TRAINER_ROBERT_2] =
    {
#line 6590
        .trainerName = _("Robert"),
#line 6591
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6592
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6594
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6595
        .doubleBattle = FALSE,
#line 6596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6598
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6599
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 6601
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6602
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6604
    [TRAINER_ROBERT_3] =
    {
#line 6605
        .trainerName = _("Robert"),
#line 6606
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6607
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6609
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6610
        .doubleBattle = FALSE,
#line 6611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6613
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6614
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 6616
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6617
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6619
    [TRAINER_ROBERT_4] =
    {
#line 6620
        .trainerName = _("Robert"),
#line 6621
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6622
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6624
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6625
        .doubleBattle = FALSE,
#line 6626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6628
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6629
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 6631
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6632
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6634
    [TRAINER_ROBERT_5] =
    {
#line 6635
        .trainerName = _("Robert"),
#line 6636
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6637
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6639
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6640
        .doubleBattle = FALSE,
#line 6641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6643
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 6646
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6647
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6649
    [TRAINER_ALEX] =
    {
#line 6650
        .trainerName = _("Alex"),
#line 6651
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6652
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6654
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6655
        .doubleBattle = FALSE,
#line 6656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6658
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6659
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 6661
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6662
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6664
    [TRAINER_BECK] =
    {
#line 6665
        .trainerName = _("Beck"),
#line 6666
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6667
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6669
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6670
        .doubleBattle = FALSE,
#line 6671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6673
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6674
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6676
    [TRAINER_YASU] =
    {
#line 6677
        .trainerName = _("Yasu"),
#line 6678
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6679
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6681
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6682
        .doubleBattle = FALSE,
#line 6683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6685
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6686
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6688
    [TRAINER_TAKASHI] =
    {
#line 6689
        .trainerName = _("Takashi"),
#line 6690
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6691
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6693
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6694
        .doubleBattle = FALSE,
#line 6695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6697
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6698
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 6700
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6701
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6703
    [TRAINER_DIANNE] =
    {
#line 6704
        .trainerName = _("Dianne"),
#line 6705
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6706
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6707
F_TRAINER_FEMALE | 
#line 6708
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6709
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6711
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6712
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 6713
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6716
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6717
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 6718
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 6721
    [TRAINER_JANI] =
    {
#line 6722
        .trainerName = _("Jani"),
#line 6723
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 6724
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 6725
F_TRAINER_FEMALE | 
#line 6726
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6727
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6729
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6730
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6732
    [TRAINER_LAO_1] =
    {
#line 6733
        .trainerName = _("Lao"),
#line 6734
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6735
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6737
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6738
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6740
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6741
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 6742
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6747
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6748
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 6749
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6754
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6755
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 6756
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 6761
    [TRAINER_LUNG] =
    {
#line 6762
        .trainerName = _("Lung"),
#line 6763
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6764
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6766
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6767
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6769
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6770
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 6772
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6773
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6775
    [TRAINER_LAO_2] =
    {
#line 6776
        .trainerName = _("Lao"),
#line 6777
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6778
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6780
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6781
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6783
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6784
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 6785
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6790
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6791
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 6792
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6796
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6797
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 6798
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6803
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6804
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 6805
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6808
    [TRAINER_LAO_3] =
    {
#line 6809
        .trainerName = _("Lao"),
#line 6810
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6811
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6813
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6814
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6816
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6817
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 6818
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6823
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6824
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 6825
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6830
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6831
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 6832
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6836
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6837
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 6838
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6841
    [TRAINER_LAO_4] =
    {
#line 6842
        .trainerName = _("Lao"),
#line 6843
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6844
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6846
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6847
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6849
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6850
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 6851
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6855
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6856
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 6857
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6861
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6862
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 6863
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6867
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6868
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 6869
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6872
    [TRAINER_LAO_5] =
    {
#line 6873
        .trainerName = _("Lao"),
#line 6874
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6875
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6877
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6878
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6880
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6881
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 6882
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6886
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6887
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 6888
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6893
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6894
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 6895
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6900
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6900
            .heldItem = ITEM_SMOKE_BALL,
#line 6901
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 6902
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6905
    [TRAINER_JOCELYN] =
    {
#line 6906
        .trainerName = _("Jocelyn"),
#line 6907
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6908
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6909
F_TRAINER_FEMALE | 
#line 6910
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6911
        .doubleBattle = FALSE,
#line 6912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6914
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6915
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6917
    [TRAINER_LAURA] =
    {
#line 6918
        .trainerName = _("Laura"),
#line 6919
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6920
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6921
F_TRAINER_FEMALE | 
#line 6922
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6923
        .doubleBattle = FALSE,
#line 6924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6926
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6927
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6929
    [TRAINER_CYNDY_1] =
    {
#line 6930
        .trainerName = _("Cyndy"),
#line 6931
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6932
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6933
F_TRAINER_FEMALE | 
#line 6934
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6935
        .doubleBattle = FALSE,
#line 6936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6938
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 6941
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6942
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6944
    [TRAINER_CORA] =
    {
#line 6945
        .trainerName = _("Cora"),
#line 6946
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6947
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6948
F_TRAINER_FEMALE | 
#line 6949
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6950
        .doubleBattle = FALSE,
#line 6951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6953
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6954
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6956
    [TRAINER_PAULA] =
    {
#line 6957
        .trainerName = _("Paula"),
#line 6958
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6959
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6960
F_TRAINER_FEMALE | 
#line 6961
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6962
        .doubleBattle = FALSE,
#line 6963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6965
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6966
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6968
    [TRAINER_CYNDY_2] =
    {
#line 6969
        .trainerName = _("Cyndy"),
#line 6970
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6971
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6972
F_TRAINER_FEMALE | 
#line 6973
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6974
        .doubleBattle = FALSE,
#line 6975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6977
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6978
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 6980
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6981
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6983
    [TRAINER_CYNDY_3] =
    {
#line 6984
        .trainerName = _("Cyndy"),
#line 6985
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6986
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6987
F_TRAINER_FEMALE | 
#line 6988
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6989
        .doubleBattle = FALSE,
#line 6990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6992
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6993
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 6995
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6996
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6998
    [TRAINER_CYNDY_4] =
    {
#line 6999
        .trainerName = _("Cyndy"),
#line 7000
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7001
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7002
F_TRAINER_FEMALE | 
#line 7003
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7004
        .doubleBattle = FALSE,
#line 7005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7007
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7008
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 7010
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7011
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7013
    [TRAINER_CYNDY_5] =
    {
#line 7014
        .trainerName = _("Cyndy"),
#line 7015
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7016
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7017
F_TRAINER_FEMALE | 
#line 7018
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7019
        .doubleBattle = FALSE,
#line 7020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7022
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7023
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 7025
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7026
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7028
    [TRAINER_MADELINE_1] =
    {
#line 7029
        .trainerName = _("Madeline"),
#line 7030
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7031
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7032
F_TRAINER_FEMALE | 
#line 7033
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7034
        .doubleBattle = FALSE,
#line 7035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7037
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7038
            .lvl = 19,
            .nature = NATURE_HARDY,
            .moves = {
#line 7039
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7044
    [TRAINER_CLARISSA] =
    {
#line 7045
        .trainerName = _("Clarissa"),
#line 7046
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7047
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7048
F_TRAINER_FEMALE | 
#line 7049
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7050
        .doubleBattle = FALSE,
#line 7051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7053
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7054
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 7056
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7057
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7059
    [TRAINER_ANGELICA] =
    {
#line 7060
        .trainerName = _("Angelica"),
#line 7061
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7062
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7063
F_TRAINER_FEMALE | 
#line 7064
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7065
        .doubleBattle = FALSE,
#line 7066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7068
            .species = SPECIES_CASTFORM_NORMAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7069
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 7070
                MOVE_RAIN_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_THUNDER,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 7075
    [TRAINER_MADELINE_2] =
    {
#line 7076
        .trainerName = _("Madeline"),
#line 7077
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7078
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7079
F_TRAINER_FEMALE | 
#line 7080
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7081
        .doubleBattle = FALSE,
#line 7082
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7084
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7085
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 7086
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7091
    [TRAINER_MADELINE_3] =
    {
#line 7092
        .trainerName = _("Madeline"),
#line 7093
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7094
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7095
F_TRAINER_FEMALE | 
#line 7096
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7097
        .doubleBattle = FALSE,
#line 7098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7100
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7101
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 7102
                MOVE_EMBER,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7107
    [TRAINER_MADELINE_4] =
    {
#line 7108
        .trainerName = _("Madeline"),
#line 7109
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7110
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7111
F_TRAINER_FEMALE | 
#line 7112
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7113
        .doubleBattle = FALSE,
#line 7114
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7116
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7117
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 7118
                MOVE_LEECH_SEED,
                MOVE_MEGA_DRAIN,
                MOVE_GRASS_WHISTLE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 7123
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7124
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 7125
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7130
    [TRAINER_MADELINE_5] =
    {
#line 7131
        .trainerName = _("Madeline"),
#line 7132
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7133
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7134
F_TRAINER_FEMALE | 
#line 7135
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7136
        .doubleBattle = FALSE,
#line 7137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7139
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7140
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 7141
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 7146
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7147
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 7148
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7153
    [TRAINER_BEVERLY] =
    {
#line 7154
        .trainerName = _("Beverly"),
#line 7155
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7156
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7157
F_TRAINER_FEMALE | 
#line 7158
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7159
        .doubleBattle = FALSE,
#line 7160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7162
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7163
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7165
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7166
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7168
    [TRAINER_IMANI] =
    {
#line 7169
        .trainerName = _("Imani"),
#line 7170
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7171
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7172
F_TRAINER_FEMALE | 
#line 7173
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7174
        .doubleBattle = FALSE,
#line 7175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7177
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7178
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7180
    [TRAINER_KYLA] =
    {
#line 7181
        .trainerName = _("Kyla"),
#line 7182
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7183
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7184
F_TRAINER_FEMALE | 
#line 7185
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7186
        .doubleBattle = FALSE,
#line 7187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7189
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7190
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7192
    [TRAINER_DENISE] =
    {
#line 7193
        .trainerName = _("Denise"),
#line 7194
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7195
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7196
F_TRAINER_FEMALE | 
#line 7197
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7198
        .doubleBattle = FALSE,
#line 7199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7201
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7202
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7204
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7205
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7207
    [TRAINER_BETH] =
    {
#line 7208
        .trainerName = _("Beth"),
#line 7209
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7210
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7211
F_TRAINER_FEMALE | 
#line 7212
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7213
        .doubleBattle = FALSE,
#line 7214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7216
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7217
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7219
    [TRAINER_TARA] =
    {
#line 7220
        .trainerName = _("Tara"),
#line 7221
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7222
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7223
F_TRAINER_FEMALE | 
#line 7224
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7225
        .doubleBattle = FALSE,
#line 7226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7228
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7229
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7231
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7232
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7234
    [TRAINER_MISSY] =
    {
#line 7235
        .trainerName = _("Missy"),
#line 7236
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7237
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7238
F_TRAINER_FEMALE | 
#line 7239
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7240
        .doubleBattle = FALSE,
#line 7241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7243
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7244
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7246
    [TRAINER_ALICE] =
    {
#line 7247
        .trainerName = _("Alice"),
#line 7248
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7249
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7250
F_TRAINER_FEMALE | 
#line 7251
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7252
        .doubleBattle = FALSE,
#line 7253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7255
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7256
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 7258
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7259
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 7261
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7262
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7264
    [TRAINER_JENNY_1] =
    {
#line 7265
        .trainerName = _("Jenny"),
#line 7266
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7267
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7268
F_TRAINER_FEMALE | 
#line 7269
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7270
        .doubleBattle = FALSE,
#line 7271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7273
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7274
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7276
    [TRAINER_GRACE] =
    {
#line 7277
        .trainerName = _("Grace"),
#line 7278
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7279
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7280
F_TRAINER_FEMALE | 
#line 7281
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7282
        .doubleBattle = FALSE,
#line 7283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7285
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7286
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7288
    [TRAINER_TANYA] =
    {
#line 7289
        .trainerName = _("Tanya"),
#line 7290
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7291
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7292
F_TRAINER_FEMALE | 
#line 7293
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7294
        .doubleBattle = FALSE,
#line 7295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7297
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7298
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7300
    [TRAINER_SHARON] =
    {
#line 7301
        .trainerName = _("Sharon"),
#line 7302
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7303
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7304
F_TRAINER_FEMALE | 
#line 7305
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7306
        .doubleBattle = FALSE,
#line 7307
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7309
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7310
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7312
    [TRAINER_NIKKI] =
    {
#line 7313
        .trainerName = _("Nikki"),
#line 7314
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7315
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7316
F_TRAINER_FEMALE | 
#line 7317
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7318
        .doubleBattle = FALSE,
#line 7319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7321
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7322
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7324
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7325
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7327
    [TRAINER_BRENDA] =
    {
#line 7328
        .trainerName = _("Brenda"),
#line 7329
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7330
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7331
F_TRAINER_FEMALE | 
#line 7332
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7333
        .doubleBattle = FALSE,
#line 7334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7336
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7337
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7339
    [TRAINER_KATIE] =
    {
#line 7340
        .trainerName = _("Katie"),
#line 7341
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7342
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7343
F_TRAINER_FEMALE | 
#line 7344
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7345
        .doubleBattle = FALSE,
#line 7346
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7348
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7349
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7351
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7352
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7354
    [TRAINER_SUSIE] =
    {
#line 7355
        .trainerName = _("Susie"),
#line 7356
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7357
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7358
F_TRAINER_FEMALE | 
#line 7359
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7360
        .doubleBattle = FALSE,
#line 7361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7363
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7364
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7366
    [TRAINER_KARA] =
    {
#line 7367
        .trainerName = _("Kara"),
#line 7368
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7369
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7370
F_TRAINER_FEMALE | 
#line 7371
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7372
        .doubleBattle = FALSE,
#line 7373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7375
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7376
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7378
    [TRAINER_DANA] =
    {
#line 7379
        .trainerName = _("Dana"),
#line 7380
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7381
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7382
F_TRAINER_FEMALE | 
#line 7383
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7384
        .doubleBattle = FALSE,
#line 7385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7387
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7388
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7390
    [TRAINER_SIENNA] =
    {
#line 7391
        .trainerName = _("Sienna"),
#line 7392
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7393
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7394
F_TRAINER_FEMALE | 
#line 7395
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7396
        .doubleBattle = FALSE,
#line 7397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7399
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7400
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7402
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7403
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7405
    [TRAINER_DEBRA] =
    {
#line 7406
        .trainerName = _("Debra"),
#line 7407
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7408
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7409
F_TRAINER_FEMALE | 
#line 7410
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7411
        .doubleBattle = FALSE,
#line 7412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7414
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7415
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7417
    [TRAINER_LINDA] =
    {
#line 7418
        .trainerName = _("Linda"),
#line 7419
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7420
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7421
F_TRAINER_FEMALE | 
#line 7422
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7423
        .doubleBattle = FALSE,
#line 7424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7426
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7427
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7429
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7430
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7432
    [TRAINER_KAYLEE] =
    {
#line 7433
        .trainerName = _("Kaylee"),
#line 7434
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7435
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7436
F_TRAINER_FEMALE | 
#line 7437
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7438
        .doubleBattle = FALSE,
#line 7439
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7441
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7442
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 7444
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7445
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7447
    [TRAINER_LAUREL] =
    {
#line 7448
        .trainerName = _("Laurel"),
#line 7449
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7450
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7451
F_TRAINER_FEMALE | 
#line 7452
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7453
        .doubleBattle = FALSE,
#line 7454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7456
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7457
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7459
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7460
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7462
    [TRAINER_CARLEE] =
    {
#line 7463
        .trainerName = _("Carlee"),
#line 7464
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7465
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7466
F_TRAINER_FEMALE | 
#line 7467
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7468
        .doubleBattle = FALSE,
#line 7469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7471
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7472
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7474
    [TRAINER_JENNY_2] =
    {
#line 7475
        .trainerName = _("Jenny"),
#line 7476
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7477
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7478
F_TRAINER_FEMALE | 
#line 7479
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7480
        .doubleBattle = FALSE,
#line 7481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7483
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7484
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7486
    [TRAINER_JENNY_3] =
    {
#line 7487
        .trainerName = _("Jenny"),
#line 7488
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7489
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7490
F_TRAINER_FEMALE | 
#line 7491
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7492
        .doubleBattle = FALSE,
#line 7493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7495
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7496
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7498
    [TRAINER_JENNY_4] =
    {
#line 7499
        .trainerName = _("Jenny"),
#line 7500
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7501
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7502
F_TRAINER_FEMALE | 
#line 7503
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7504
        .doubleBattle = FALSE,
#line 7505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7507
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7508
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 7510
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7511
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7513
    [TRAINER_JENNY_5] =
    {
#line 7514
        .trainerName = _("Jenny"),
#line 7515
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7516
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7517
F_TRAINER_FEMALE | 
#line 7518
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7519
        .doubleBattle = FALSE,
#line 7520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7522
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7523
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 7525
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7526
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 7528
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7529
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7531
    [TRAINER_HEIDI] =
    {
#line 7532
        .trainerName = _("Heidi"),
#line 7533
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7534
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7535
F_TRAINER_FEMALE | 
#line 7536
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7537
        .doubleBattle = FALSE,
#line 7538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7540
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7541
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 7542
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 7547
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7548
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 7549
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 7554
    [TRAINER_BECKY] =
    {
#line 7555
        .trainerName = _("Becky"),
#line 7556
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7557
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7558
F_TRAINER_FEMALE | 
#line 7559
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7560
        .doubleBattle = FALSE,
#line 7561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7563
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7564
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 7565
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 7570
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7571
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 7572
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 7577
    [TRAINER_CAROL] =
    {
#line 7578
        .trainerName = _("Carol"),
#line 7579
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7580
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7581
F_TRAINER_FEMALE | 
#line 7582
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7583
        .doubleBattle = FALSE,
#line 7584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7586
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7587
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 7589
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7590
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7592
    [TRAINER_NANCY] =
    {
#line 7593
        .trainerName = _("Nancy"),
#line 7594
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7595
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7596
F_TRAINER_FEMALE | 
#line 7597
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7598
        .doubleBattle = FALSE,
#line 7599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7601
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7602
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 7604
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7605
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7607
    [TRAINER_MARTHA] =
    {
#line 7608
        .trainerName = _("Martha"),
#line 7609
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7610
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7611
F_TRAINER_FEMALE | 
#line 7612
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7613
        .doubleBattle = FALSE,
#line 7614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7616
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7617
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
            {
#line 7619
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7620
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7622
    [TRAINER_DIANA_1] =
    {
#line 7623
        .trainerName = _("Diana"),
#line 7624
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7625
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7626
F_TRAINER_FEMALE | 
#line 7627
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7628
        .doubleBattle = FALSE,
#line 7629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7631
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7632
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
            {
#line 7634
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7635
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
            {
#line 7637
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7638
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7640
    [TRAINER_CEDRIC] =
    {
#line 7641
        .trainerName = _("Cedric"),
#line 7642
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7643
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 7645
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7646
        .doubleBattle = FALSE,
#line 7647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7649
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7650
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 7651
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 7656
    [TRAINER_IRENE] =
    {
#line 7657
        .trainerName = _("Irene"),
#line 7658
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7659
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7660
F_TRAINER_FEMALE | 
#line 7661
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7662
        .doubleBattle = FALSE,
#line 7663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7665
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7666
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 7668
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7669
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7671
    [TRAINER_DIANA_2] =
    {
#line 7672
        .trainerName = _("Diana"),
#line 7673
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7674
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7675
F_TRAINER_FEMALE | 
#line 7676
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7677
        .doubleBattle = FALSE,
#line 7678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7680
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7681
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7683
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7684
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7686
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7687
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7689
    [TRAINER_DIANA_3] =
    {
#line 7690
        .trainerName = _("Diana"),
#line 7691
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7692
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7693
F_TRAINER_FEMALE | 
#line 7694
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7695
        .doubleBattle = FALSE,
#line 7696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7698
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7699
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 7701
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7702
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 7704
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7705
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7707
    [TRAINER_DIANA_4] =
    {
#line 7708
        .trainerName = _("Diana"),
#line 7709
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7710
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7711
F_TRAINER_FEMALE | 
#line 7712
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7713
        .doubleBattle = FALSE,
#line 7714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7716
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7717
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 7719
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7720
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 7722
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7723
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7725
    [TRAINER_DIANA_5] =
    {
#line 7726
        .trainerName = _("Diana"),
#line 7727
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7728
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7729
F_TRAINER_FEMALE | 
#line 7730
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7731
        .doubleBattle = FALSE,
#line 7732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7734
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7735
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 7737
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7738
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 7740
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7741
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7743
    [TRAINER_AMY_AND_LIV_1] =
    {
#line 7744
        .trainerName = _("Amy & Liv"),
#line 7745
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7746
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7748
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7749
        .doubleBattle = TRUE,
#line 7750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7752
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7753
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 7755
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7756
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7758
    [TRAINER_AMY_AND_LIV_2] =
    {
#line 7759
        .trainerName = _("Amy & Liv"),
#line 7760
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7761
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7763
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7764
        .doubleBattle = TRUE,
#line 7765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7767
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7768
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 7770
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7771
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7773
    [TRAINER_GINA_AND_MIA_1] =
    {
#line 7774
        .trainerName = _("Gina & Mia"),
#line 7775
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7776
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7778
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7779
        .doubleBattle = TRUE,
#line 7780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7782
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7783
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 7785
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7786
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7788
    [TRAINER_MIU_AND_YUKI] =
    {
#line 7789
        .trainerName = _("Miu & Yuki"),
#line 7790
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7791
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7793
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7794
        .doubleBattle = TRUE,
#line 7795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7797
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7798
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 7800
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7801
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7803
    [TRAINER_AMY_AND_LIV_3] =
    {
#line 7804
        .trainerName = _("Amy & Liv"),
#line 7805
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7806
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7808
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7809
        .doubleBattle = TRUE,
#line 7810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7812
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7813
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
            {
#line 7815
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7816
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7818
    [TRAINER_GINA_AND_MIA_2] =
    {
#line 7819
        .trainerName = _("Gina & Mia"),
#line 7820
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7821
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7823
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7824
        .doubleBattle = TRUE,
#line 7825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7827
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7828
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 7829
                MOVE_NIGHT_SHADE,
                MOVE_DISABLE,
            },
            },
            {
#line 7832
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7833
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 7834
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 7837
    [TRAINER_AMY_AND_LIV_4] =
    {
#line 7838
        .trainerName = _("Amy & Liv"),
#line 7839
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7840
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7842
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7843
        .doubleBattle = TRUE,
#line 7844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7846
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7847
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 7849
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7850
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7852
    [TRAINER_AMY_AND_LIV_5] =
    {
#line 7853
        .trainerName = _("Amy & Liv"),
#line 7854
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7855
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7857
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7858
        .doubleBattle = TRUE,
#line 7859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7861
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7862
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 7863
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_FAKE_TEARS,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7868
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7869
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 7870
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_CHARM,
                MOVE_HELPING_HAND,
            },
            },
        },
    },
#line 7875
    [TRAINER_AMY_AND_LIV_6] =
    {
#line 7876
        .trainerName = _("Amy & Liv"),
#line 7877
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7878
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7880
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7881
        .doubleBattle = TRUE,
#line 7882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7884
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7885
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 7886
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_FAKE_TEARS,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7891
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7892
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 7893
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_CHARM,
                MOVE_HELPING_HAND,
            },
            },
        },
    },
#line 7898
    [TRAINER_HUEY] =
    {
#line 7899
        .trainerName = _("Huey"),
#line 7900
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7901
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7903
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7904
        .doubleBattle = FALSE,
#line 7905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7907
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
            {
#line 7910
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7911
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7913
    [TRAINER_EDMOND] =
    {
#line 7914
        .trainerName = _("Edmond"),
#line 7915
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7916
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7918
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7919
        .doubleBattle = FALSE,
#line 7920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7922
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7923
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7925
    [TRAINER_ERNEST_1] =
    {
#line 7926
        .trainerName = _("Ernest"),
#line 7927
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7928
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7930
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7931
        .doubleBattle = FALSE,
#line 7932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7934
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7935
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7937
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7938
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7940
    [TRAINER_DWAYNE] =
    {
#line 7941
        .trainerName = _("Dwayne"),
#line 7942
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7943
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7945
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7946
        .doubleBattle = FALSE,
#line 7947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7949
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7950
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 7952
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7953
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 7955
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7956
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7958
    [TRAINER_PHILLIP] =
    {
#line 7959
        .trainerName = _("Phillip"),
#line 7960
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7961
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7963
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7964
        .doubleBattle = FALSE,
#line 7965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7967
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7968
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
            {
#line 7970
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7971
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7973
    [TRAINER_LEONARD] =
    {
#line 7974
        .trainerName = _("Leonard"),
#line 7975
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7976
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7978
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7979
        .doubleBattle = FALSE,
#line 7980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7982
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7983
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 7985
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7986
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 7988
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7989
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7991
    [TRAINER_DUNCAN] =
    {
#line 7992
        .trainerName = _("Duncan"),
#line 7993
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7994
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7996
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7997
        .doubleBattle = FALSE,
#line 7998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8000
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8001
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 8003
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8004
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8006
    [TRAINER_ERNEST_2] =
    {
#line 8007
        .trainerName = _("Ernest"),
#line 8008
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8009
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8011
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8012
        .doubleBattle = FALSE,
#line 8013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8015
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8016
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 8018
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8019
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 8021
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8022
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8024
    [TRAINER_ERNEST_3] =
    {
#line 8025
        .trainerName = _("Ernest"),
#line 8026
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8027
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8029
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8030
        .doubleBattle = FALSE,
#line 8031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8033
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 8036
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8037
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 8039
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8040
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8042
    [TRAINER_ERNEST_4] =
    {
#line 8043
        .trainerName = _("Ernest"),
#line 8044
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8045
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8047
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8048
        .doubleBattle = FALSE,
#line 8049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8051
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8052
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 8054
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8055
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 8057
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8058
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8060
    [TRAINER_ERNEST_5] =
    {
#line 8061
        .trainerName = _("Ernest"),
#line 8062
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8063
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8065
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8066
        .doubleBattle = FALSE,
#line 8067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8069
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8070
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 8072
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8073
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 8075
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8076
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8078
    [TRAINER_ELI] =
    {
#line 8079
        .trainerName = _("Eli"),
#line 8080
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8081
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8083
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8084
        .doubleBattle = FALSE,
#line 8085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8087
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8088
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8090
    [TRAINER_ANNIKA] =
    {
#line 8091
        .trainerName = _("Annika"),
#line 8092
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8093
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 8094
F_TRAINER_FEMALE | 
#line 8095
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8096
        .doubleBattle = FALSE,
#line 8097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8099
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8099
            .heldItem = ITEM_ORAN_BERRY,
#line 8100
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 8101
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 8106
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8106
            .heldItem = ITEM_ORAN_BERRY,
#line 8107
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 8108
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 8113
    [TRAINER_JAZMYN] =
    {
#line 8114
        .trainerName = _("Jazmyn"),
#line 8115
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8116
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8117
F_TRAINER_FEMALE | 
#line 8118
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8119
        .doubleBattle = FALSE,
#line 8120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8122
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8123
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8125
    [TRAINER_JONAS] =
    {
#line 8126
        .trainerName = _("Jonas"),
#line 8127
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8128
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 8130
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8131
        .doubleBattle = FALSE,
#line 8132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8134
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8135
            .lvl = 31,
            .nature = NATURE_HARDY,
            .moves = {
#line 8136
                MOVE_TOXIC,
                MOVE_THUNDER,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 8141
    [TRAINER_KAYLEY] =
    {
#line 8142
        .trainerName = _("Kayley"),
#line 8143
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 8144
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 8145
F_TRAINER_FEMALE | 
#line 8146
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8147
        .doubleBattle = FALSE,
#line 8148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8150
            .species = SPECIES_CASTFORM_NORMAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8151
            .lvl = 31,
            .nature = NATURE_HARDY,
            .moves = {
#line 8152
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 8157
    [TRAINER_AURON] =
    {
#line 8158
        .trainerName = _("Auron"),
#line 8159
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8160
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 8162
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8163
        .doubleBattle = FALSE,
#line 8164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8166
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8167
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 8169
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8170
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8172
    [TRAINER_KELVIN] =
    {
#line 8173
        .trainerName = _("Kelvin"),
#line 8174
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8175
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8177
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8178
        .doubleBattle = FALSE,
#line 8179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8181
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8182
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 8184
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8185
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8187
    [TRAINER_MARLEY] =
    {
#line 8188
        .trainerName = _("Marley"),
#line 8189
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8190
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8191
F_TRAINER_FEMALE | 
#line 8192
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8193
        .doubleBattle = FALSE,
#line 8194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8196
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8197
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 8198
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 8203
    [TRAINER_REYNA] =
    {
#line 8204
        .trainerName = _("Reyna"),
#line 8205
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8206
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 8207
F_TRAINER_FEMALE | 
#line 8208
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8209
        .doubleBattle = FALSE,
#line 8210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8212
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8213
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 8215
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8216
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8218
    [TRAINER_HUDSON] =
    {
#line 8219
        .trainerName = _("Hudson"),
#line 8220
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8221
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8223
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8224
        .doubleBattle = FALSE,
#line 8225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8227
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8228
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8230
    [TRAINER_CONOR] =
    {
#line 8231
        .trainerName = _("Conor"),
#line 8232
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8233
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 8235
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8236
        .doubleBattle = FALSE,
#line 8237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8239
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8240
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 8242
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8243
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8245
    [TRAINER_EDWIN_1] =
    {
#line 8246
        .trainerName = _("Edwin"),
#line 8247
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8248
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8250
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8251
        .doubleBattle = FALSE,
#line 8252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8254
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8255
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 8257
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8258
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8260
    [TRAINER_HECTOR] =
    {
#line 8261
        .trainerName = _("Hector"),
#line 8262
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8263
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8265
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8266
        .doubleBattle = FALSE,
#line 8267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8269
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8270
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8272
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8273
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8275
    [TRAINER_TABITHA_MOSSDEEP] =
    {
#line 8276
        .trainerName = _("Tabitha"),
#line 8277
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8278
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 8280
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8281
        .doubleBattle = FALSE,
#line 8282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8284
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8285
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 8287
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8288
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 8290
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8291
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8293
    [TRAINER_EDWIN_2] =
    {
#line 8294
        .trainerName = _("Edwin"),
#line 8295
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8296
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8298
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8299
        .doubleBattle = FALSE,
#line 8300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8302
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8303
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 8305
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8306
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8308
    [TRAINER_EDWIN_3] =
    {
#line 8309
        .trainerName = _("Edwin"),
#line 8310
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8311
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8313
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8314
        .doubleBattle = FALSE,
#line 8315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8317
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8318
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8320
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8321
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8323
    [TRAINER_EDWIN_4] =
    {
#line 8324
        .trainerName = _("Edwin"),
#line 8325
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8326
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8328
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8329
        .doubleBattle = FALSE,
#line 8330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8332
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8333
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8335
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8336
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8338
    [TRAINER_EDWIN_5] =
    {
#line 8339
        .trainerName = _("Edwin"),
#line 8340
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8341
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8343
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8344
        .doubleBattle = FALSE,
#line 8345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8347
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8348
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 8350
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8351
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8353
    [TRAINER_WALLY_VR_1] =
    {
#line 8354
        .trainerName = _("Wally"),
#line 8355
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8356
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 8358
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8359
        .doubleBattle = FALSE,
#line 8360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8362
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8363
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 8364
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 8369
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8370
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 8371
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 8376
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8377
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 8378
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 8383
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8384
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 8385
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 8390
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8391
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 8392
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 8397
    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 8398
        .trainerName = _("Brendan"),
#line 8399
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8400
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8402
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8403
        .doubleBattle = FALSE,
#line 8404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8406
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8408
            .lvl = 5,
#line 8407
            .nature = NATURE_NAIVE,
            .moves = {
#line 8409
                MOVE_POUND,
                MOVE_LEER,
            },
            },
        },
    },
#line 8412
    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 8413
        .trainerName = _("May"),
#line 8414
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8415
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8416
F_TRAINER_FEMALE | 
#line 8417
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8418
        .doubleBattle = FALSE,
#line 8419
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8421
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8423
            .lvl = 5,
#line 8422
            .nature = NATURE_NAIVE,
            .moves = {
#line 8424
                MOVE_POUND,
                MOVE_LEER,
            },
            },
        },
    },
#line 8427
    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 8428
        .trainerName = _("Brendan"),
#line 8429
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8430
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8432
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8433
        .doubleBattle = FALSE,
#line 8434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8436
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8438
            .lvl = 5,
#line 8437
            .nature = NATURE_LONELY,
            .moves = {
#line 8439
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
        },
    },
#line 8442
    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 8443
        .trainerName = _("May"),
#line 8444
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8445
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8446
F_TRAINER_FEMALE | 
#line 8447
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8448
        .doubleBattle = FALSE,
#line 8449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8451
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8453
            .lvl = 5,
#line 8452
            .nature = NATURE_LONELY,
            .moves = {
#line 8454
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
        },
    },
#line 8457
    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 8458
        .trainerName = _("Brendan"),
#line 8459
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8460
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8462
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8463
        .doubleBattle = FALSE,
#line 8464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8466
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8468
            .lvl = 5,
#line 8467
            .nature = NATURE_FREESPIRITED,
            .moves = {
#line 8469
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 8472
    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 8473
        .trainerName = _("May"),
#line 8474
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8475
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8476
F_TRAINER_FEMALE | 
#line 8477
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8478
        .doubleBattle = FALSE,
#line 8479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8481
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8483
            .lvl = 5,
#line 8482
            .nature = NATURE_FREESPIRITED,
            .moves = {
#line 8484
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 8487
    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 8488
        .trainerName = _("Brendan"),
#line 8489
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8490
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8492
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8493
        .doubleBattle = FALSE,
#line 8494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8496
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8497
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8499
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8500
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8502
    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 8503
        .trainerName = _("Brendan"),
#line 8504
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8505
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8507
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8508
        .doubleBattle = FALSE,
#line 8509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8511
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8512
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8514
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8515
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8517
    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 8518
        .trainerName = _("Brendan"),
#line 8519
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8520
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8522
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8523
        .doubleBattle = FALSE,
#line 8524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8526
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8527
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8529
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8530
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8532
    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 8533
        .trainerName = _("May"),
#line 8534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8535
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8536
F_TRAINER_FEMALE | 
#line 8537
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8538
        .doubleBattle = FALSE,
#line 8539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8541
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8542
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8544
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8545
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8547
    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 8548
        .trainerName = _("May"),
#line 8549
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8550
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8551
F_TRAINER_FEMALE | 
#line 8552
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8553
        .doubleBattle = FALSE,
#line 8554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8556
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8557
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8559
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8560
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8562
    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 8563
        .trainerName = _("May"),
#line 8564
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8565
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8566
F_TRAINER_FEMALE | 
#line 8567
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8568
        .doubleBattle = FALSE,
#line 8569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8571
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8572
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8574
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8575
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8577
    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 8578
        .trainerName = _("Brendan"),
#line 8579
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8580
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8582
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8583
        .doubleBattle = FALSE,
#line 8584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8586
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8587
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8589
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8590
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8592
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8593
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8595
    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 8596
        .trainerName = _("Brendan"),
#line 8597
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8598
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8600
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8601
        .doubleBattle = FALSE,
#line 8602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8604
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8605
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8607
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8608
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8610
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8611
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8613
    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 8614
        .trainerName = _("Brendan"),
#line 8615
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8616
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8618
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8619
        .doubleBattle = FALSE,
#line 8620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8622
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8623
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8625
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8626
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8628
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8629
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8631
    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 8632
        .trainerName = _("Brendan"),
#line 8633
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8634
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8636
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8637
        .doubleBattle = FALSE,
#line 8638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8640
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8641
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8643
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8644
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8646
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8647
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8649
    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 8650
        .trainerName = _("Brendan"),
#line 8651
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8652
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8654
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8655
        .doubleBattle = FALSE,
#line 8656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8658
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8659
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8661
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8662
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8664
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8665
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8667
    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 8668
        .trainerName = _("Brendan"),
#line 8669
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8670
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8672
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8673
        .doubleBattle = FALSE,
#line 8674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8676
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8677
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8679
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8680
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8682
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8685
    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 8686
        .trainerName = _("Brendan"),
#line 8687
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8688
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8690
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8691
        .doubleBattle = FALSE,
#line 8692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8694
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8695
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8697
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8698
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8700
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8701
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8703
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8704
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8706
    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8707
        .trainerName = _("Brendan"),
#line 8708
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8709
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8711
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8712
        .doubleBattle = FALSE,
#line 8713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8715
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8716
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8718
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8719
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8721
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8722
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8724
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8725
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8727
    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8728
        .trainerName = _("Brendan"),
#line 8729
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8730
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8732
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8733
        .doubleBattle = FALSE,
#line 8734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8736
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8737
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8739
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8740
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8742
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8743
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8745
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8746
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8748
    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8749
        .trainerName = _("May"),
#line 8750
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8751
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8752
F_TRAINER_FEMALE | 
#line 8753
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8754
        .doubleBattle = FALSE,
#line 8755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8757
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8758
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8760
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8761
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8763
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8764
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8766
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8767
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8769
    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8770
        .trainerName = _("May"),
#line 8771
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8772
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8773
F_TRAINER_FEMALE | 
#line 8774
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8775
        .doubleBattle = FALSE,
#line 8776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8778
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8779
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8781
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8782
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8784
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8785
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8787
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8788
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8790
    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8791
        .trainerName = _("May"),
#line 8792
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8793
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8794
F_TRAINER_FEMALE | 
#line 8795
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8796
        .doubleBattle = FALSE,
#line 8797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8799
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8800
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8802
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8803
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8805
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8806
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8808
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8809
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8811
    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 8812
        .trainerName = _("May"),
#line 8813
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8814
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8815
F_TRAINER_FEMALE | 
#line 8816
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8817
        .doubleBattle = FALSE,
#line 8818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8820
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8823
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8824
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8826
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8827
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8829
    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 8830
        .trainerName = _("May"),
#line 8831
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8832
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8833
F_TRAINER_FEMALE | 
#line 8834
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8835
        .doubleBattle = FALSE,
#line 8836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8838
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8839
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8841
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8842
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8844
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8845
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8847
    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 8848
        .trainerName = _("May"),
#line 8849
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8850
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8851
F_TRAINER_FEMALE | 
#line 8852
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8853
        .doubleBattle = FALSE,
#line 8854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8856
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8857
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8859
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8860
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8862
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8863
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8865
    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 8866
        .trainerName = _("May"),
#line 8867
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8868
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8869
F_TRAINER_FEMALE | 
#line 8870
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8871
        .doubleBattle = FALSE,
#line 8872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8874
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8875
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8877
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8878
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8880
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8881
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8883
    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 8884
        .trainerName = _("May"),
#line 8885
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8886
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8887
F_TRAINER_FEMALE | 
#line 8888
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8889
        .doubleBattle = FALSE,
#line 8890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8892
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8893
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8895
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8896
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8898
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8899
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8901
    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 8902
        .trainerName = _("May"),
#line 8903
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8904
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8905
F_TRAINER_FEMALE | 
#line 8906
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8907
        .doubleBattle = FALSE,
#line 8908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8910
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8911
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8913
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8914
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8916
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8917
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8919
    [TRAINER_ISAAC_1] =
    {
#line 8920
        .trainerName = _("Isaac"),
#line 8921
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 8922
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 8924
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8925
        .doubleBattle = FALSE,
#line 8926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8928
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8929
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8931
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8932
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8934
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8935
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8937
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8938
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8940
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8941
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8943
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8944
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8946
    [TRAINER_DAVIS] =
    {
#line 8947
        .trainerName = _("Davis"),
#line 8948
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8949
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8951
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8952
        .doubleBattle = FALSE,
#line 8953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8955
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8958
    [TRAINER_MITCHELL] =
    {
#line 8959
        .trainerName = _("Mitchell"),
#line 8960
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8961
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8963
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8964
        .doubleBattle = FALSE,
#line 8965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8967
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8968
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 8969
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8974
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8975
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 8976
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 8981
    [TRAINER_ISAAC_2] =
    {
#line 8982
        .trainerName = _("Isaac"),
#line 8983
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 8984
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 8986
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8987
        .doubleBattle = FALSE,
#line 8988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8990
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8991
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 8993
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8994
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 8996
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8997
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 8999
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9000
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9002
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9003
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9005
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9006
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9008
    [TRAINER_ISAAC_3] =
    {
#line 9009
        .trainerName = _("Isaac"),
#line 9010
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9011
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 9013
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9014
        .doubleBattle = FALSE,
#line 9015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9017
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9018
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9020
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9023
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9024
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9026
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9027
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9029
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9030
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9032
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9033
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9035
    [TRAINER_ISAAC_4] =
    {
#line 9036
        .trainerName = _("Isaac"),
#line 9037
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9038
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 9040
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9041
        .doubleBattle = FALSE,
#line 9042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9044
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9045
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9047
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9048
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9050
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9051
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9053
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9054
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9056
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9059
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9060
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9062
    [TRAINER_ISAAC_5] =
    {
#line 9063
        .trainerName = _("Isaac"),
#line 9064
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9065
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 9067
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9068
        .doubleBattle = FALSE,
#line 9069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9071
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9072
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9074
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9075
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9077
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9078
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9080
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9081
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9083
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9084
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9086
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9087
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9089
    [TRAINER_LYDIA_1] =
    {
#line 9090
        .trainerName = _("Lydia"),
#line 9091
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9092
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9093
F_TRAINER_FEMALE | 
#line 9094
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9095
        .doubleBattle = FALSE,
#line 9096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9098
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9099
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9101
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9102
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9104
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9105
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9107
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9108
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9110
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9111
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9113
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9114
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9116
    [TRAINER_HALLE] =
    {
#line 9117
        .trainerName = _("Halle"),
#line 9118
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9119
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9120
F_TRAINER_FEMALE | 
#line 9121
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9122
        .doubleBattle = FALSE,
#line 9123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9125
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9126
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 9128
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9129
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9131
    [TRAINER_GARRISON] =
    {
#line 9132
        .trainerName = _("Garrison"),
#line 9133
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9134
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 9136
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9137
        .doubleBattle = FALSE,
#line 9138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9140
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9141
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9143
    [TRAINER_LYDIA_2] =
    {
#line 9144
        .trainerName = _("Lydia"),
#line 9145
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9146
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9147
F_TRAINER_FEMALE | 
#line 9148
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9149
        .doubleBattle = FALSE,
#line 9150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9152
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9153
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9155
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9156
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9158
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9159
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9161
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9162
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9164
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9165
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9167
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9168
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9170
    [TRAINER_LYDIA_3] =
    {
#line 9171
        .trainerName = _("Lydia"),
#line 9172
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9173
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9174
F_TRAINER_FEMALE | 
#line 9175
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9176
        .doubleBattle = FALSE,
#line 9177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9179
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9180
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9182
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9183
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9185
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9186
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9188
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9189
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9191
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9192
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9194
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9195
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9197
    [TRAINER_LYDIA_4] =
    {
#line 9198
        .trainerName = _("Lydia"),
#line 9199
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9200
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9201
F_TRAINER_FEMALE | 
#line 9202
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9203
        .doubleBattle = FALSE,
#line 9204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9206
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9207
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9209
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9210
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9212
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9213
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9215
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9216
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9218
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9219
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9221
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9222
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9224
    [TRAINER_LYDIA_5] =
    {
#line 9225
        .trainerName = _("Lydia"),
#line 9226
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9227
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9228
F_TRAINER_FEMALE | 
#line 9229
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9230
        .doubleBattle = FALSE,
#line 9231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9233
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9234
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9236
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9237
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9239
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9240
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9242
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9243
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9245
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9246
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9248
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9249
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9251
    [TRAINER_JACKSON_1] =
    {
#line 9252
        .trainerName = _("Jackson"),
#line 9253
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9254
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9256
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9257
        .doubleBattle = FALSE,
#line 9258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9260
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9261
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9263
    [TRAINER_LORENZO] =
    {
#line 9264
        .trainerName = _("Lorenzo"),
#line 9265
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9266
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9268
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9269
        .doubleBattle = FALSE,
#line 9270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9272
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9273
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9275
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9276
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9278
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9279
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9281
    [TRAINER_SEBASTIAN] =
    {
#line 9282
        .trainerName = _("Sebastian"),
#line 9283
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9284
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9286
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9287
        .doubleBattle = FALSE,
#line 9288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9290
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9291
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9293
    [TRAINER_JACKSON_2] =
    {
#line 9294
        .trainerName = _("Jackson"),
#line 9295
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9296
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9298
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9299
        .doubleBattle = FALSE,
#line 9300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9302
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9303
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9305
    [TRAINER_JACKSON_3] =
    {
#line 9306
        .trainerName = _("Jackson"),
#line 9307
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9308
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9310
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9311
        .doubleBattle = FALSE,
#line 9312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9314
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9315
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9317
    [TRAINER_JACKSON_4] =
    {
#line 9318
        .trainerName = _("Jackson"),
#line 9319
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9320
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9322
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9323
        .doubleBattle = FALSE,
#line 9324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9326
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9327
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9329
    [TRAINER_JACKSON_5] =
    {
#line 9330
        .trainerName = _("Jackson"),
#line 9331
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9332
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9334
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9335
        .doubleBattle = FALSE,
#line 9336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9338
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9339
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 9341
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9342
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9344
    [TRAINER_CATHERINE_1] =
    {
#line 9345
        .trainerName = _("Catherine"),
#line 9346
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9347
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9348
F_TRAINER_FEMALE | 
#line 9349
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9350
        .doubleBattle = FALSE,
#line 9351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9353
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9354
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 9356
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9357
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9359
    [TRAINER_JENNA] =
    {
#line 9360
        .trainerName = _("Jenna"),
#line 9361
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9362
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9363
F_TRAINER_FEMALE | 
#line 9364
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9365
        .doubleBattle = FALSE,
#line 9366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9368
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9369
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9371
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9372
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9374
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9375
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9377
    [TRAINER_SOPHIA] =
    {
#line 9378
        .trainerName = _("Sophia"),
#line 9379
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9380
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9381
F_TRAINER_FEMALE | 
#line 9382
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9383
        .doubleBattle = FALSE,
#line 9384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9386
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9387
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 9389
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9390
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9392
    [TRAINER_CATHERINE_2] =
    {
#line 9393
        .trainerName = _("Catherine"),
#line 9394
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9395
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9396
F_TRAINER_FEMALE | 
#line 9397
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9398
        .doubleBattle = FALSE,
#line 9399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9401
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9402
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 9404
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9405
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9407
    [TRAINER_CATHERINE_3] =
    {
#line 9408
        .trainerName = _("Catherine"),
#line 9409
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9410
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9411
F_TRAINER_FEMALE | 
#line 9412
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9413
        .doubleBattle = FALSE,
#line 9414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9416
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9417
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 9419
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9420
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9422
    [TRAINER_CATHERINE_4] =
    {
#line 9423
        .trainerName = _("Catherine"),
#line 9424
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9425
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9426
F_TRAINER_FEMALE | 
#line 9427
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9428
        .doubleBattle = FALSE,
#line 9429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9431
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9432
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 9434
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9435
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9437
    [TRAINER_CATHERINE_5] =
    {
#line 9438
        .trainerName = _("Catherine"),
#line 9439
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9440
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9441
F_TRAINER_FEMALE | 
#line 9442
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9443
        .doubleBattle = FALSE,
#line 9444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9446
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9447
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 9449
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9450
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9452
    [TRAINER_JULIO] =
    {
#line 9453
        .trainerName = _("Julio"),
#line 9454
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9455
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 9457
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9458
        .doubleBattle = FALSE,
#line 9459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9461
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9462
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9464
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 9465
        .trainerName = _("Grunt"),
#line 9466
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9467
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 9469
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 9470
        .doubleBattle = FALSE,
#line 9471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9473
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9474
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 9476
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9477
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9479
    [TRAINER_GRUNT_UNUSED] =
    {
#line 9480
        .trainerName = _("Grunt"),
#line 9481
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9482
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 9483
F_TRAINER_FEMALE | 
#line 9484
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 9485
        .doubleBattle = FALSE,
#line 9486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9488
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9489
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9491
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9492
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9494
    [TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 9495
        .trainerName = _("Grunt"),
#line 9496
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9497
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 9498
F_TRAINER_FEMALE | 
#line 9499
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 9500
        .doubleBattle = FALSE,
#line 9501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9503
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9504
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 9506
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9507
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9509
    [TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 9510
        .trainerName = _("Grunt"),
#line 9511
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9512
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9514
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9515
        .doubleBattle = FALSE,
#line 9516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9518
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9519
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9521
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9522
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9524
    [TRAINER_MARC] =
    {
#line 9525
        .trainerName = _("Marc"),
#line 9526
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9527
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9529
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9530
        .doubleBattle = FALSE,
#line 9531
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9533
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9534
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 9536
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9537
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9539
    [TRAINER_BRENDEN] =
    {
#line 9540
        .trainerName = _("Brenten"),
#line 9541
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9542
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 9544
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9545
        .doubleBattle = FALSE,
#line 9546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9548
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9549
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9551
    [TRAINER_LILITH] =
    {
#line 9552
        .trainerName = _("Lilith"),
#line 9553
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9554
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9555
F_TRAINER_FEMALE | 
#line 9556
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9557
        .doubleBattle = FALSE,
#line 9558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9560
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9563
    [TRAINER_CRISTIAN] =
    {
#line 9564
        .trainerName = _("Cristian"),
#line 9565
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9566
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 9568
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9569
        .doubleBattle = FALSE,
#line 9570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9572
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9573
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9575
    [TRAINER_SYLVIA] =
    {
#line 9576
        .trainerName = _("Sylvia"),
#line 9577
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 9578
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 9579
F_TRAINER_FEMALE | 
#line 9580
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9581
        .doubleBattle = FALSE,
#line 9582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9584
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9585
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9587
    [TRAINER_LEONARDO] =
    {
#line 9588
        .trainerName = _("Leonardo"),
#line 9589
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9590
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9592
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9593
        .doubleBattle = FALSE,
#line 9594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9596
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9597
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9599
    [TRAINER_ATHENA] =
    {
#line 9600
        .trainerName = _("Athena"),
#line 9601
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9602
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9603
F_TRAINER_FEMALE | 
#line 9604
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9605
        .doubleBattle = FALSE,
#line 9606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9608
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9609
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 9610
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 9614
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9615
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 9616
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 9619
    [TRAINER_HARRISON] =
    {
#line 9620
        .trainerName = _("Harrison"),
#line 9621
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9622
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9624
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9625
        .doubleBattle = FALSE,
#line 9626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9628
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9629
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9631
    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 9632
        .trainerName = _("Grunt"),
#line 9633
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9634
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9636
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9637
        .doubleBattle = FALSE,
#line 9638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9640
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9641
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9643
    [TRAINER_CLARENCE] =
    {
#line 9644
        .trainerName = _("Clarence"),
#line 9645
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9646
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9648
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9649
        .doubleBattle = FALSE,
#line 9650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9652
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9653
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9655
    [TRAINER_TERRY] =
    {
#line 9656
        .trainerName = _("Terry"),
#line 9657
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9658
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9659
F_TRAINER_FEMALE | 
#line 9660
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9661
        .doubleBattle = FALSE,
#line 9662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9664
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9665
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9667
    [TRAINER_NATE] =
    {
#line 9668
        .trainerName = _("Nate"),
#line 9669
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 9670
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 9672
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9673
        .doubleBattle = FALSE,
#line 9674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9676
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9677
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9679
    [TRAINER_KATHLEEN] =
    {
#line 9680
        .trainerName = _("Kathleen"),
#line 9681
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 9682
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 9683
F_TRAINER_FEMALE | 
#line 9684
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9685
        .doubleBattle = FALSE,
#line 9686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9688
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9689
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9691
    [TRAINER_CLIFFORD] =
    {
#line 9692
        .trainerName = _("Clifford"),
#line 9693
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 9694
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 9696
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9697
        .doubleBattle = FALSE,
#line 9698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9700
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9701
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9703
    [TRAINER_NICHOLAS] =
    {
#line 9704
        .trainerName = _("Nicholas"),
#line 9705
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9706
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 9708
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9709
        .doubleBattle = FALSE,
#line 9710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9712
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9713
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9715
    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 9716
        .trainerName = _("Grunt"),
#line 9717
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9718
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 9719
F_TRAINER_FEMALE | 
#line 9720
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9721
        .doubleBattle = FALSE,
#line 9722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9724
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9725
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9727
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9728
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9730
    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 9731
        .trainerName = _("Grunt"),
#line 9732
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9733
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9735
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9736
        .doubleBattle = FALSE,
#line 9737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9739
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9740
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9742
    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 9743
        .trainerName = _("Grunt"),
#line 9744
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9745
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9747
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9748
        .doubleBattle = FALSE,
#line 9749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9751
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9752
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9754
    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 9755
        .trainerName = _("Grunt"),
#line 9756
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9757
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9759
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9760
        .doubleBattle = FALSE,
#line 9761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9763
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9764
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9766
    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 9767
        .trainerName = _("Grunt"),
#line 9768
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9769
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9771
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9772
        .doubleBattle = FALSE,
#line 9773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9775
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9776
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9778
    [TRAINER_MACEY] =
    {
#line 9779
        .trainerName = _("Macey"),
#line 9780
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9781
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9782
F_TRAINER_FEMALE | 
#line 9783
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9784
        .doubleBattle = FALSE,
#line 9785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9787
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9788
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9790
    [TRAINER_PAXTON] =
    {
#line 9791
        .trainerName = _("Paxton"),
#line 9792
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9793
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 9795
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9796
        .doubleBattle = FALSE,
#line 9797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9799
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9800
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 9802
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9803
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9805
    [TRAINER_ISABELLA] =
    {
#line 9806
        .trainerName = _("Isabella"),
#line 9807
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9808
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 9809
F_TRAINER_FEMALE | 
#line 9810
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9811
        .doubleBattle = FALSE,
#line 9812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9814
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9815
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9817
    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 9818
        .trainerName = _("Grunt"),
#line 9819
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9820
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 9821
F_TRAINER_FEMALE | 
#line 9822
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 9823
        .doubleBattle = FALSE,
#line 9824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9826
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9827
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 9829
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9830
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9832
    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 9833
        .trainerName = _("Tabitha"),
#line 9834
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9835
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 9837
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9838
        .doubleBattle = FALSE,
#line 9839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9841
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9842
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 9844
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9845
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
            {
#line 9847
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9848
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9850
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9851
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9853
    [TRAINER_JONATHAN] =
    {
#line 9854
        .trainerName = _("Jonathan"),
#line 9855
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9856
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 9858
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9859
        .doubleBattle = FALSE,
#line 9860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9862
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9863
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 9865
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9866
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9868
    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 9869
        .trainerName = _("Maxie"),
#line 9870
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9871
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 9873
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9874
        .doubleBattle = FALSE,
#line 9875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9877
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9878
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 9880
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9881
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 9883
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9884
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9886
    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 9887
        .trainerName = _("Maxie"),
#line 9888
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9889
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 9891
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9892
        .doubleBattle = FALSE,
#line 9893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9895
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9896
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 9898
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9899
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 9901
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9902
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9904
    [TRAINER_TIANA] =
    {
#line 9905
        .trainerName = _("Tiana"),
#line 9906
        .trainerClass = TRAINER_CLASS_LASS,
#line 9907
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9908
F_TRAINER_FEMALE | 
#line 9909
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9910
        .doubleBattle = FALSE,
#line 9911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9913
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9914
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
            {
#line 9916
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9917
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9919
    [TRAINER_HALEY_1] =
    {
#line 9920
        .trainerName = _("Haley"),
#line 9921
        .trainerClass = TRAINER_CLASS_LASS,
#line 9922
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9923
F_TRAINER_FEMALE | 
#line 9924
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9925
        .doubleBattle = FALSE,
#line 9926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9928
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9929
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 9931
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9932
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9934
    [TRAINER_JANICE] =
    {
#line 9935
        .trainerName = _("Janice"),
#line 9936
        .trainerClass = TRAINER_CLASS_LASS,
#line 9937
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9938
F_TRAINER_FEMALE | 
#line 9939
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9940
        .doubleBattle = FALSE,
#line 9941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9943
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9944
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9946
    [TRAINER_VIVI] =
    {
#line 9947
        .trainerName = _("Vivi"),
#line 9948
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 9949
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9950
F_TRAINER_FEMALE | 
#line 9951
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9952
        .doubleBattle = FALSE,
#line 9953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9955
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9956
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 9958
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 9961
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9962
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9964
    [TRAINER_HALEY_2] =
    {
#line 9965
        .trainerName = _("Haley"),
#line 9966
        .trainerClass = TRAINER_CLASS_LASS,
#line 9967
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9968
F_TRAINER_FEMALE | 
#line 9969
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9970
        .doubleBattle = FALSE,
#line 9971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9973
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9974
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 9976
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9977
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9979
    [TRAINER_HALEY_3] =
    {
#line 9980
        .trainerName = _("Haley"),
#line 9981
        .trainerClass = TRAINER_CLASS_LASS,
#line 9982
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9983
F_TRAINER_FEMALE | 
#line 9984
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9985
        .doubleBattle = FALSE,
#line 9986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9988
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9989
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 9991
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9992
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9994
    [TRAINER_HALEY_4] =
    {
#line 9995
        .trainerName = _("Haley"),
#line 9996
        .trainerClass = TRAINER_CLASS_LASS,
#line 9997
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9998
F_TRAINER_FEMALE | 
#line 9999
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10000
        .doubleBattle = FALSE,
#line 10001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10003
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10004
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 10006
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10007
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10009
    [TRAINER_HALEY_5] =
    {
#line 10010
        .trainerName = _("Haley"),
#line 10011
        .trainerClass = TRAINER_CLASS_LASS,
#line 10012
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10013
F_TRAINER_FEMALE | 
#line 10014
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10015
        .doubleBattle = FALSE,
#line 10016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10018
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10019
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 10021
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10022
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 10024
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10025
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10027
    [TRAINER_SALLY] =
    {
#line 10028
        .trainerName = _("Sally"),
#line 10029
        .trainerClass = TRAINER_CLASS_LASS,
#line 10030
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10031
F_TRAINER_FEMALE | 
#line 10032
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10033
        .doubleBattle = FALSE,
#line 10034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10036
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10037
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10039
    [TRAINER_ROBIN] =
    {
#line 10040
        .trainerName = _("Robin"),
#line 10041
        .trainerClass = TRAINER_CLASS_LASS,
#line 10042
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10043
F_TRAINER_FEMALE | 
#line 10044
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10045
        .doubleBattle = FALSE,
#line 10046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10048
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10049
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 10051
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10052
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 10054
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10055
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10057
    [TRAINER_ANDREA] =
    {
#line 10058
        .trainerName = _("Andrea"),
#line 10059
        .trainerClass = TRAINER_CLASS_LASS,
#line 10060
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10061
F_TRAINER_FEMALE | 
#line 10062
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10063
        .doubleBattle = FALSE,
#line 10064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10066
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10067
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10069
    [TRAINER_CRISSY] =
    {
#line 10070
        .trainerName = _("Crissy"),
#line 10071
        .trainerClass = TRAINER_CLASS_LASS,
#line 10072
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10073
F_TRAINER_FEMALE | 
#line 10074
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10075
        .doubleBattle = FALSE,
#line 10076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10078
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10079
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 10081
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10082
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10084
    [TRAINER_RICK] =
    {
#line 10085
        .trainerName = _("Rick"),
#line 10086
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10087
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10089
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10090
        .doubleBattle = FALSE,
#line 10091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10093
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10094
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 10096
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10097
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10099
    [TRAINER_LYLE] =
    {
#line 10100
        .trainerName = _("Lyle"),
#line 10101
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10102
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10104
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10105
        .doubleBattle = FALSE,
#line 10106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10108
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10109
            .lvl = 3,
            .nature = NATURE_HARDY,
            },
            {
#line 10111
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10112
            .lvl = 3,
            .nature = NATURE_HARDY,
            },
            {
#line 10114
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10115
            .lvl = 3,
            .nature = NATURE_HARDY,
            },
            {
#line 10117
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10118
            .lvl = 3,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10120
    [TRAINER_JOSE] =
    {
#line 10121
        .trainerName = _("Jose"),
#line 10122
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10123
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10125
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10126
        .doubleBattle = FALSE,
#line 10127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10129
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10130
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 10132
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10133
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10135
    [TRAINER_DOUG] =
    {
#line 10136
        .trainerName = _("Doug"),
#line 10137
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10138
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10140
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10141
        .doubleBattle = FALSE,
#line 10142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10144
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10145
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 10147
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10148
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10150
    [TRAINER_GREG] =
    {
#line 10151
        .trainerName = _("Greg"),
#line 10152
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10153
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10155
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10156
        .doubleBattle = FALSE,
#line 10157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10159
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10160
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 10162
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10163
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10165
    [TRAINER_KENT] =
    {
#line 10166
        .trainerName = _("Kent"),
#line 10167
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10168
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10171
        .doubleBattle = FALSE,
#line 10172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10174
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10175
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10177
    [TRAINER_JAMES_1] =
    {
#line 10178
        .trainerName = _("James"),
#line 10179
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10180
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10182
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10183
        .doubleBattle = FALSE,
#line 10184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10186
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10187
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 10189
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10190
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10192
    [TRAINER_JAMES_2] =
    {
#line 10193
        .trainerName = _("James"),
#line 10194
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10195
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10198
        .doubleBattle = FALSE,
#line 10199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10201
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10202
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10204
    [TRAINER_JAMES_3] =
    {
#line 10205
        .trainerName = _("James"),
#line 10206
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10207
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10209
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10210
        .doubleBattle = FALSE,
#line 10211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10213
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10214
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 10216
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10217
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10219
    [TRAINER_JAMES_4] =
    {
#line 10220
        .trainerName = _("James"),
#line 10221
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10222
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10224
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10225
        .doubleBattle = FALSE,
#line 10226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10228
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10229
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10231
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10232
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10234
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10235
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10237
    [TRAINER_JAMES_5] =
    {
#line 10238
        .trainerName = _("James"),
#line 10239
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10240
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10242
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10243
        .doubleBattle = FALSE,
#line 10244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10246
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10247
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10249
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10250
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10252
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10253
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10255
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10256
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10258
    [TRAINER_BRICE] =
    {
#line 10259
        .trainerName = _("Brice"),
#line 10260
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10261
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10263
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10264
        .doubleBattle = FALSE,
#line 10265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10267
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10268
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 10270
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10271
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10273
    [TRAINER_TRENT_1] =
    {
#line 10274
        .trainerName = _("Trent"),
#line 10275
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10276
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10278
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10279
        .doubleBattle = FALSE,
#line 10280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10282
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10283
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 10285
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10286
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 10288
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10289
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10291
    [TRAINER_LENNY] =
    {
#line 10292
        .trainerName = _("Lenny"),
#line 10293
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10294
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10296
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10297
        .doubleBattle = FALSE,
#line 10298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10300
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10301
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 10303
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10304
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10306
    [TRAINER_LUCAS_1] =
    {
#line 10307
        .trainerName = _("Lucas"),
#line 10308
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10309
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10311
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10312
        .doubleBattle = FALSE,
#line 10313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10315
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10316
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 10318
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10319
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10321
    [TRAINER_ALAN] =
    {
#line 10322
        .trainerName = _("Alan"),
#line 10323
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10324
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10326
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10327
        .doubleBattle = FALSE,
#line 10328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10330
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10331
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 10333
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10334
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 10336
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10337
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10339
    [TRAINER_CLARK] =
    {
#line 10340
        .trainerName = _("Clark"),
#line 10341
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10342
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10344
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10345
        .doubleBattle = FALSE,
#line 10346
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10348
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10349
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10351
    [TRAINER_ERIC] =
    {
#line 10352
        .trainerName = _("Eric"),
#line 10353
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10354
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10356
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10357
        .doubleBattle = FALSE,
#line 10358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10360
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10361
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
            {
#line 10363
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10364
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10366
    [TRAINER_LUCAS_2] =
    {
#line 10367
        .trainerName = _("Lucas"),
#line 10368
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10369
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10371
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10372
        .doubleBattle = FALSE,
#line 10373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10375
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10376
            .lvl = 9,
            .nature = NATURE_HARDY,
            .moves = {
#line 10377
                MOVE_SPLASH,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 10380
    [TRAINER_MIKE_1] =
    {
#line 10381
        .trainerName = _("Mike"),
#line 10382
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10383
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10385
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10386
        .doubleBattle = FALSE,
#line 10387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10389
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10390
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 10391
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 10394
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10395
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 10396
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 10399
    [TRAINER_MIKE_2] =
    {
#line 10400
        .trainerName = _("Mike"),
#line 10401
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10402
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10404
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10405
        .doubleBattle = FALSE,
#line 10406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10408
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10409
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 10411
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10412
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 10414
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10415
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10417
    [TRAINER_TRENT_2] =
    {
#line 10418
        .trainerName = _("Trent"),
#line 10419
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10420
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10422
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10423
        .doubleBattle = FALSE,
#line 10424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10426
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10427
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 10429
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10430
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 10432
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10433
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 10435
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10436
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10438
    [TRAINER_TRENT_3] =
    {
#line 10439
        .trainerName = _("Trent"),
#line 10440
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10441
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10443
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10444
        .doubleBattle = FALSE,
#line 10445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10447
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10448
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10450
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10451
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10453
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10454
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10456
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10457
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10459
    [TRAINER_TRENT_4] =
    {
#line 10460
        .trainerName = _("Trent"),
#line 10461
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10462
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10464
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10465
        .doubleBattle = FALSE,
#line 10466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10468
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10469
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10471
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10472
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10474
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10475
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10477
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10478
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10480
    [TRAINER_TRENT_5] =
    {
#line 10481
        .trainerName = _("Trent"),
#line 10482
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10483
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10485
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10486
        .doubleBattle = FALSE,
#line 10487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10489
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10490
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10492
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10493
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10495
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10496
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10498
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10499
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10501
    [TRAINER_DEZ_AND_LUKE] =
    {
#line 10502
        .trainerName = _("Dez & Luke"),
#line 10503
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10504
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10506
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10507
        .doubleBattle = TRUE,
#line 10508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10510
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10511
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10513
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10514
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10516
    [TRAINER_LEA_AND_JED] =
    {
#line 10517
        .trainerName = _("Lea & Jed"),
#line 10518
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10519
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10521
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10522
        .doubleBattle = TRUE,
#line 10523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10525
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10526
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 10528
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10529
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10531
    [TRAINER_KIRA_AND_DAN_1] =
    {
#line 10532
        .trainerName = _("Kira & Dan"),
#line 10533
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10534
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10536
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10537
        .doubleBattle = TRUE,
#line 10538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10540
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10541
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 10543
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10544
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10546
    [TRAINER_KIRA_AND_DAN_2] =
    {
#line 10547
        .trainerName = _("Kira & Dan"),
#line 10548
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10549
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10551
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10552
        .doubleBattle = TRUE,
#line 10553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10555
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10556
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10558
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10559
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10561
    [TRAINER_KIRA_AND_DAN_3] =
    {
#line 10562
        .trainerName = _("Kira & Dan"),
#line 10563
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10564
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10566
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10567
        .doubleBattle = TRUE,
#line 10568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10570
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10571
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10573
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10574
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10576
    [TRAINER_KIRA_AND_DAN_4] =
    {
#line 10577
        .trainerName = _("Kira & Dan"),
#line 10578
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10579
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10581
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10582
        .doubleBattle = TRUE,
#line 10583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10585
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10586
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 10588
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10589
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10591
    [TRAINER_KIRA_AND_DAN_5] =
    {
#line 10592
        .trainerName = _("Kira & Dan"),
#line 10593
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10594
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10596
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10597
        .doubleBattle = TRUE,
#line 10598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10600
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10601
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 10603
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10604
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10606
    [TRAINER_JOHANNA] =
    {
#line 10607
        .trainerName = _("Johanna"),
#line 10608
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 10609
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 10610
F_TRAINER_FEMALE | 
#line 10611
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10612
        .doubleBattle = FALSE,
#line 10613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10615
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10616
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10618
    [TRAINER_GERALD] =
    {
#line 10619
        .trainerName = _("Gerald"),
#line 10620
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10621
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 10623
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10624
        .doubleBattle = FALSE,
#line 10625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10627
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10628
            .lvl = 23,
            .nature = NATURE_HARDY,
            .moves = {
#line 10629
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 10634
    [TRAINER_VIVIAN] =
    {
#line 10635
        .trainerName = _("Vivian"),
#line 10636
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10637
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 10638
F_TRAINER_FEMALE | 
#line 10639
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10640
        .doubleBattle = FALSE,
#line 10641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10643
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10644
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 10645
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10650
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10651
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 10652
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 10657
    [TRAINER_DANIELLE] =
    {
#line 10658
        .trainerName = _("Danielle"),
#line 10659
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10660
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 10661
F_TRAINER_FEMALE | 
#line 10662
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10663
        .doubleBattle = FALSE,
#line 10664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10666
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10667
            .lvl = 23,
            .nature = NATURE_HARDY,
            .moves = {
#line 10668
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 10673
    [TRAINER_HIDEO] =
    {
#line 10674
        .trainerName = _("Hideo"),
#line 10675
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10676
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 10678
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10679
        .doubleBattle = FALSE,
#line 10680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10682
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10683
            .lvl = 25,
            .nature = NATURE_HARDY,
            .moves = {
#line 10684
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 10689
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10690
            .lvl = 25,
            .nature = NATURE_HARDY,
            .moves = {
#line 10691
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 10696
    [TRAINER_KEIGO] =
    {
#line 10697
        .trainerName = _("Keigo"),
#line 10698
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10699
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 10701
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10702
        .doubleBattle = FALSE,
#line 10703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10705
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10706
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 10707
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 10712
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10713
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 10714
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 10719
    [TRAINER_RILEY] =
    {
#line 10720
        .trainerName = _("Riley"),
#line 10721
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10722
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 10724
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10725
        .doubleBattle = FALSE,
#line 10726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10728
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10729
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 10730
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 10735
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10736
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 10737
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 10742
    [TRAINER_FLINT] =
    {
#line 10743
        .trainerName = _("Flint"),
#line 10744
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10745
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10747
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10748
        .doubleBattle = FALSE,
#line 10749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10751
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10752
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 10754
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10755
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10757
    [TRAINER_ASHLEY] =
    {
#line 10758
        .trainerName = _("Ashley"),
#line 10759
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10760
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10761
F_TRAINER_FEMALE | 
#line 10762
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10763
        .doubleBattle = FALSE,
#line 10764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10766
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10767
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10769
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10770
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10772
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10773
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10775
    [TRAINER_WALLY_MAUVILLE] =
    {
#line 10776
        .trainerName = _("Wally"),
#line 10777
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10778
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10780
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10781
        .doubleBattle = FALSE,
#line 10782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10784
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10785
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10787
    [TRAINER_WALLY_VR_2] =
    {
#line 10788
        .trainerName = _("Wally"),
#line 10789
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10790
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10792
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10793
        .doubleBattle = FALSE,
#line 10794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10796
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10797
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 10798
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10803
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10804
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 10805
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 10810
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10811
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 10812
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 10817
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10818
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 10819
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 10824
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10825
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 10826
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10831
    [TRAINER_WALLY_VR_3] =
    {
#line 10832
        .trainerName = _("Wally"),
#line 10833
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10834
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10836
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10837
        .doubleBattle = FALSE,
#line 10838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10840
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10841
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 10842
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10847
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10848
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 10849
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 10854
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10855
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 10856
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 10861
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10862
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 10863
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 10868
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10869
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 10870
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10875
    [TRAINER_WALLY_VR_4] =
    {
#line 10876
        .trainerName = _("Wally"),
#line 10877
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10878
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10880
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10881
        .doubleBattle = FALSE,
#line 10882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10884
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10885
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 10886
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10891
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10892
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 10893
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 10898
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10899
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 10900
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 10905
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10906
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 10907
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 10912
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10913
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 10914
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10919
    [TRAINER_WALLY_VR_5] =
    {
#line 10920
        .trainerName = _("Wally"),
#line 10921
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10922
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10924
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10925
        .doubleBattle = FALSE,
#line 10926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10928
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10929
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 10930
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10935
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10936
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 10937
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 10942
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10943
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 10944
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 10949
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10950
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 10951
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 10956
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10957
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 10958
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10963
    [TRAINER_JONAH] =
    {
#line 10964
        .trainerName = _("Jonah"),
#line 10965
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10966
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10968
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10969
        .doubleBattle = FALSE,
#line 10970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10972
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10973
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10975
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10976
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10978
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10979
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10981
    [TRAINER_HENRY] =
    {
#line 10982
        .trainerName = _("Henry"),
#line 10983
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10984
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10986
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10987
        .doubleBattle = FALSE,
#line 10988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10990
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10991
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10993
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10994
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10996
    [TRAINER_ROGER] =
    {
#line 10997
        .trainerName = _("Roger"),
#line 10998
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10999
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11001
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11002
        .doubleBattle = FALSE,
#line 11003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11005
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11006
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 11008
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11009
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 11011
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11012
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11014
    [TRAINER_ALEXA] =
    {
#line 11015
        .trainerName = _("Alexa"),
#line 11016
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11017
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11018
F_TRAINER_FEMALE | 
#line 11019
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11020
        .doubleBattle = FALSE,
#line 11021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11023
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11024
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 11026
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11027
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11029
    [TRAINER_RUBEN] =
    {
#line 11030
        .trainerName = _("Ruben"),
#line 11031
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11032
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 11034
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11035
        .doubleBattle = FALSE,
#line 11036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11038
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11039
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 11041
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11042
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11044
    [TRAINER_KOJI_1] =
    {
#line 11045
        .trainerName = _("Koji"),
#line 11046
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 11047
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 11049
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11050
        .doubleBattle = FALSE,
#line 11051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11053
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11054
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11056
    [TRAINER_WAYNE] =
    {
#line 11057
        .trainerName = _("Wayne"),
#line 11058
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11059
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11061
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11062
        .doubleBattle = FALSE,
#line 11063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11065
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11066
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 11068
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11069
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 11071
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11072
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11074
    [TRAINER_AIDAN] =
    {
#line 11075
        .trainerName = _("Aidan"),
#line 11076
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11077
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11079
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11080
        .doubleBattle = FALSE,
#line 11081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11083
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11084
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 11086
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11087
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11089
    [TRAINER_REED] =
    {
#line 11090
        .trainerName = _("Reed"),
#line 11091
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 11092
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 11094
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11095
        .doubleBattle = FALSE,
#line 11096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11098
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11099
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 11101
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11102
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11104
    [TRAINER_TISHA] =
    {
#line 11105
        .trainerName = _("Tisha"),
#line 11106
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 11107
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 11108
F_TRAINER_FEMALE | 
#line 11109
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11110
        .doubleBattle = FALSE,
#line 11111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11113
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11114
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11116
    [TRAINER_TORI_AND_TIA] =
    {
#line 11117
        .trainerName = _("Tori & Tia"),
#line 11118
        .trainerClass = TRAINER_CLASS_TWINS,
#line 11119
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 11121
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 11122
        .doubleBattle = TRUE,
#line 11123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11125
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11126
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
            {
#line 11128
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11129
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11131
    [TRAINER_KIM_AND_IRIS] =
    {
#line 11132
        .trainerName = _("Kim & Iris"),
#line 11133
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 11134
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 11136
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 11137
        .doubleBattle = TRUE,
#line 11138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11140
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11141
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 11142
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11147
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11148
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 11149
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11154
    [TRAINER_TYRA_AND_IVY] =
    {
#line 11155
        .trainerName = _("Tyra & Ivy"),
#line 11156
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 11157
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 11159
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 11160
        .doubleBattle = TRUE,
#line 11161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11163
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11164
            .lvl = 18,
            .nature = NATURE_HARDY,
            .moves = {
#line 11165
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 11170
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11171
            .lvl = 20,
            .nature = NATURE_HARDY,
            .moves = {
#line 11172
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 11177
    [TRAINER_MEL_AND_PAUL] =
    {
#line 11178
        .trainerName = _("Mel & Paul"),
#line 11179
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 11180
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 11182
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11183
        .doubleBattle = TRUE,
#line 11184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11186
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11187
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 11188
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 11193
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11194
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 11195
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 11200
    [TRAINER_JOHN_AND_JAY_1] =
    {
#line 11201
        .trainerName = _("John & Jay"),
#line 11202
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11203
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11205
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11206
        .doubleBattle = TRUE,
#line 11207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11209
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11210
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 11211
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11216
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11217
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 11218
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11223
    [TRAINER_JOHN_AND_JAY_2] =
    {
#line 11224
        .trainerName = _("John & Jay"),
#line 11225
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11226
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11228
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11229
        .doubleBattle = TRUE,
#line 11230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11232
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11233
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 11234
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11239
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11240
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 11241
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11246
    [TRAINER_JOHN_AND_JAY_3] =
    {
#line 11247
        .trainerName = _("John & Jay"),
#line 11248
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11249
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11251
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11252
        .doubleBattle = TRUE,
#line 11253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11255
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11256
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 11257
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11262
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11263
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 11264
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11269
    [TRAINER_JOHN_AND_JAY_4] =
    {
#line 11270
        .trainerName = _("John & Jay"),
#line 11271
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11272
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11274
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11275
        .doubleBattle = TRUE,
#line 11276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11278
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11279
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 11280
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11285
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11286
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 11287
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11292
    [TRAINER_JOHN_AND_JAY_5] =
    {
#line 11293
        .trainerName = _("John & Jay"),
#line 11294
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11295
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11297
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11298
        .doubleBattle = TRUE,
#line 11299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11301
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11302
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 11303
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11308
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11309
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 11310
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11315
    [TRAINER_RELI_AND_IAN] =
    {
#line 11316
        .trainerName = _("Reli & Ian"),
#line 11317
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11318
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11320
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11321
        .doubleBattle = TRUE,
#line 11322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11324
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11325
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 11327
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11328
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11330
    [TRAINER_LILA_AND_ROY_1] =
    {
#line 11331
        .trainerName = _("Lila & Roy"),
#line 11332
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11333
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11335
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11336
        .doubleBattle = TRUE,
#line 11337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11339
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11340
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 11342
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11343
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11345
    [TRAINER_LILA_AND_ROY_2] =
    {
#line 11346
        .trainerName = _("Lila & Roy"),
#line 11347
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11348
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11350
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11351
        .doubleBattle = TRUE,
#line 11352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11354
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11355
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 11357
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11358
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11360
    [TRAINER_LILA_AND_ROY_3] =
    {
#line 11361
        .trainerName = _("Lila & Roy"),
#line 11362
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11363
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11365
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11366
        .doubleBattle = TRUE,
#line 11367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11369
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11370
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 11372
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11373
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11375
    [TRAINER_LILA_AND_ROY_4] =
    {
#line 11376
        .trainerName = _("Lila & Roy"),
#line 11377
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11378
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11380
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11381
        .doubleBattle = TRUE,
#line 11382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11384
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11385
            .lvl = 48,
            .nature = NATURE_HARDY,
            },
            {
#line 11387
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11388
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11390
    [TRAINER_LILA_AND_ROY_5] =
    {
#line 11391
        .trainerName = _("Lila & Roy"),
#line 11392
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11393
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11395
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11396
        .doubleBattle = TRUE,
#line 11397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11399
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11400
            .lvl = 51,
            .nature = NATURE_HARDY,
            },
            {
#line 11402
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11403
            .lvl = 49,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11405
    [TRAINER_LISA_AND_RAY] =
    {
#line 11406
        .trainerName = _("Lisa & Ray"),
#line 11407
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11408
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11410
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11411
        .doubleBattle = TRUE,
#line 11412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11414
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11415
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 11417
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11418
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11420
    [TRAINER_CHRIS] =
    {
#line 11421
        .trainerName = _("Chris"),
#line 11422
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11423
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11425
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11426
        .doubleBattle = FALSE,
#line 11427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11429
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11430
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 11432
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11433
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
            {
#line 11435
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11436
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 11438
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11439
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11441
    [TRAINER_DAWSON] =
    {
#line 11442
        .trainerName = _("Dawson"),
#line 11443
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 11444
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 11446
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11447
        .doubleBattle = FALSE,
#line 11448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11450
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11450
            .heldItem = ITEM_NUGGET,
#line 11451
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 11453
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11454
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11456
    [TRAINER_SARAH] =
    {
#line 11457
        .trainerName = _("Sarah"),
#line 11458
        .trainerClass = TRAINER_CLASS_LADY,
#line 11459
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 11460
F_TRAINER_FEMALE | 
#line 11461
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11462
        .doubleBattle = FALSE,
#line 11463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11465
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11466
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 11468
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11468
            .heldItem = ITEM_NUGGET,
#line 11469
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11471
    [TRAINER_DARIAN] =
    {
#line 11472
        .trainerName = _("Darian"),
#line 11473
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11474
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11476
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11477
        .doubleBattle = FALSE,
#line 11478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11480
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11481
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11483
    [TRAINER_HAILEY] =
    {
#line 11484
        .trainerName = _("Hailey"),
#line 11485
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 11486
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 11487
F_TRAINER_FEMALE | 
#line 11488
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11489
        .doubleBattle = FALSE,
#line 11490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11492
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11493
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11495
    [TRAINER_CHANDLER] =
    {
#line 11496
        .trainerName = _("Chandler"),
#line 11497
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 11498
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 11500
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11501
        .doubleBattle = FALSE,
#line 11502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11504
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11505
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
            {
#line 11507
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11508
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11510
    [TRAINER_KALEB] =
    {
#line 11511
        .trainerName = _("Kaleb"),
#line 11512
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 11513
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 11515
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 11516
        .doubleBattle = FALSE,
#line 11517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11519
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11519
            .heldItem = ITEM_ORAN_BERRY,
#line 11520
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 11522
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11522
            .heldItem = ITEM_ORAN_BERRY,
#line 11523
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11525
    [TRAINER_JOSEPH] =
    {
#line 11526
        .trainerName = _("Joseph"),
#line 11527
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 11528
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 11530
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11531
        .doubleBattle = FALSE,
#line 11532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11534
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11535
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 11537
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11538
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11540
    [TRAINER_ALYSSA] =
    {
#line 11541
        .trainerName = _("Alyssa"),
#line 11542
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11543
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 11544
F_TRAINER_FEMALE | 
#line 11545
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11546
        .doubleBattle = FALSE,
#line 11547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11549
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11550
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11552
    [TRAINER_MARCOS] =
    {
#line 11553
        .trainerName = _("Marcos"),
#line 11554
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 11555
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 11557
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11558
        .doubleBattle = FALSE,
#line 11559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11561
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11562
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11564
    [TRAINER_RHETT] =
    {
#line 11565
        .trainerName = _("Rhett"),
#line 11566
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 11567
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 11569
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11570
        .doubleBattle = FALSE,
#line 11571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11573
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11574
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11576
    [TRAINER_TYRON] =
    {
#line 11577
        .trainerName = _("Tyron"),
#line 11578
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 11579
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 11581
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11582
        .doubleBattle = FALSE,
#line 11583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11585
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11586
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11588
    [TRAINER_CELINA] =
    {
#line 11589
        .trainerName = _("Celina"),
#line 11590
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 11591
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 11592
F_TRAINER_FEMALE | 
#line 11593
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11594
        .doubleBattle = FALSE,
#line 11595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11597
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11598
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11600
    [TRAINER_BIANCA] =
    {
#line 11601
        .trainerName = _("Bianca"),
#line 11602
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11603
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11604
F_TRAINER_FEMALE | 
#line 11605
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11606
        .doubleBattle = FALSE,
#line 11607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11609
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11610
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11612
    [TRAINER_HAYDEN] =
    {
#line 11613
        .trainerName = _("Hayden"),
#line 11614
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 11615
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 11617
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11618
        .doubleBattle = FALSE,
#line 11619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11621
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11622
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11624
    [TRAINER_SOPHIE] =
    {
#line 11625
        .trainerName = _("Sophie"),
#line 11626
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11627
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11628
F_TRAINER_FEMALE | 
#line 11629
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11630
        .doubleBattle = FALSE,
#line 11631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11633
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11634
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 11636
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11637
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11639
    [TRAINER_COBY] =
    {
#line 11640
        .trainerName = _("Coby"),
#line 11641
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11642
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11644
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11645
        .doubleBattle = FALSE,
#line 11646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11648
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11649
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 11651
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11652
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11654
    [TRAINER_LAWRENCE] =
    {
#line 11655
        .trainerName = _("Lawrence"),
#line 11656
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 11657
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 11659
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11660
        .doubleBattle = FALSE,
#line 11661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11663
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11664
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 11666
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11667
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11669
    [TRAINER_WYATT] =
    {
#line 11670
        .trainerName = _("Wyatt"),
#line 11671
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 11672
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 11674
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11675
        .doubleBattle = FALSE,
#line 11676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11678
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11679
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 11681
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11682
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11684
    [TRAINER_ANGELINA] =
    {
#line 11685
        .trainerName = _("Angelina"),
#line 11686
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11687
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11688
F_TRAINER_FEMALE | 
#line 11689
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11690
        .doubleBattle = FALSE,
#line 11691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11693
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11694
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 11696
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11697
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11699
    [TRAINER_KAI] =
    {
#line 11700
        .trainerName = _("Kai"),
#line 11701
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11702
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11704
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11705
        .doubleBattle = FALSE,
#line 11706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11708
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11709
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11711
    [TRAINER_CHARLOTTE] =
    {
#line 11712
        .trainerName = _("Charlotte"),
#line 11713
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11714
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11715
F_TRAINER_FEMALE | 
#line 11716
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11717
        .doubleBattle = FALSE,
#line 11718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11720
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11721
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11723
    [TRAINER_DEANDRE] =
    {
#line 11724
        .trainerName = _("Deandre"),
#line 11725
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 11726
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 11728
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11729
        .doubleBattle = FALSE,
#line 11730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11732
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11733
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 11735
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11736
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 11738
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11739
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11741
    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 11742
        .trainerName = _("Grunt"),
#line 11743
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11744
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11746
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11747
        .doubleBattle = FALSE,
#line 11748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11750
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11751
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11753
    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 11754
        .trainerName = _("Grunt"),
#line 11755
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11756
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11758
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11759
        .doubleBattle = FALSE,
#line 11760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11762
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11763
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11765
    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 11766
        .trainerName = _("Grunt"),
#line 11767
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11768
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11770
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11771
        .doubleBattle = FALSE,
#line 11772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11774
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11775
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11777
    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 11778
        .trainerName = _("Grunt"),
#line 11779
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11780
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11782
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11783
        .doubleBattle = FALSE,
#line 11784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11786
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11787
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 11789
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11790
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11792
    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 11793
        .trainerName = _("Grunt"),
#line 11794
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11795
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11797
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11798
        .doubleBattle = FALSE,
#line 11799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11801
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11802
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 11804
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11805
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11807
    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 11808
        .trainerName = _("Grunt"),
#line 11809
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11810
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11812
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11813
        .doubleBattle = FALSE,
#line 11814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11816
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11817
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11819
    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 11820
        .trainerName = _("Grunt"),
#line 11821
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11822
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11824
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11825
        .doubleBattle = FALSE,
#line 11826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11828
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11829
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11831
    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 11832
        .trainerName = _("Grunt"),
#line 11833
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11834
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11836
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11837
        .doubleBattle = FALSE,
#line 11838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11840
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11841
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11843
    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 11844
        .trainerName = _("Grunt"),
#line 11845
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11846
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11848
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11849
        .doubleBattle = FALSE,
#line 11850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11852
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11853
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11855
    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 11856
        .trainerName = _("Grunt"),
#line 11857
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11858
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11860
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11861
        .doubleBattle = FALSE,
#line 11862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11864
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11865
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11867
    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 11868
        .trainerName = _("Grunt"),
#line 11869
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11870
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11872
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11873
        .doubleBattle = FALSE,
#line 11874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11876
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11877
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11879
    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 11880
        .trainerName = _("Grunt"),
#line 11881
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11882
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11884
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11885
        .doubleBattle = FALSE,
#line 11886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11888
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11889
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11891
    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 11892
        .trainerName = _("Grunt"),
#line 11893
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11894
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11896
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11897
        .doubleBattle = FALSE,
#line 11898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11900
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11901
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11903
    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 11904
        .trainerName = _("Grunt"),
#line 11905
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11906
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11907
F_TRAINER_FEMALE | 
#line 11908
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11909
        .doubleBattle = FALSE,
#line 11910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11912
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11913
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11915
    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 11916
        .trainerName = _("Grunt"),
#line 11917
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11918
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11919
F_TRAINER_FEMALE | 
#line 11920
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11921
        .doubleBattle = FALSE,
#line 11922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11924
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11925
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11927
    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 11928
        .trainerName = _("Grunt"),
#line 11929
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11930
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11931
F_TRAINER_FEMALE | 
#line 11932
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11933
        .doubleBattle = FALSE,
#line 11934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11936
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11937
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11939
    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 11940
        .trainerName = _("Tabitha"),
#line 11941
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 11942
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 11944
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11945
        .doubleBattle = FALSE,
#line 11946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11948
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11949
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 11951
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11952
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 11954
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11955
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 11957
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11958
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11960
    [TRAINER_DARCY] =
    {
#line 11961
        .trainerName = _("Darcy"),
#line 11962
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11963
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11964
F_TRAINER_FEMALE | 
#line 11965
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11966
        .doubleBattle = FALSE,
#line 11967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11969
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11970
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 11972
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11973
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11975
    [TRAINER_MAXIE_MOSSDEEP] =
    {
#line 11976
        .trainerName = _("Maxie"),
#line 11977
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 11978
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 11980
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11981
        .doubleBattle = FALSE,
#line 11982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11984
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11985
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 11987
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11988
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 11990
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11991
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11993
    [TRAINER_PETE] =
    {
#line 11994
        .trainerName = _("Pete"),
#line 11995
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 11996
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 11998
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11999
        .doubleBattle = FALSE,
#line 12000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12002
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12003
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12005
    [TRAINER_ISABELLE] =
    {
#line 12006
        .trainerName = _("Isabelle"),
#line 12007
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 12008
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 12009
F_TRAINER_FEMALE | 
#line 12010
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 12011
        .doubleBattle = FALSE,
#line 12012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12014
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12015
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12017
    [TRAINER_ANDRES_1] =
    {
#line 12018
        .trainerName = _("Andres"),
#line 12019
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 12020
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 12022
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12023
        .doubleBattle = FALSE,
#line 12024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12026
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12027
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12029
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12030
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12032
    [TRAINER_JOSUE] =
    {
#line 12033
        .trainerName = _("Josue"),
#line 12034
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 12035
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 12037
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12038
        .doubleBattle = FALSE,
#line 12039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12041
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12042
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12044
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12045
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12047
    [TRAINER_CAMRON] =
    {
#line 12048
        .trainerName = _("Camron"),
#line 12049
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 12050
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 12052
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 12053
        .doubleBattle = FALSE,
#line 12054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12056
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12057
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12059
    [TRAINER_CORY_1] =
    {
#line 12060
        .trainerName = _("Cory"),
#line 12061
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 12062
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 12064
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12065
        .doubleBattle = FALSE,
#line 12066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12068
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12069
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 12071
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12072
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 12074
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12075
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12077
    [TRAINER_CAROLINA] =
    {
#line 12078
        .trainerName = _("Carolina"),
#line 12079
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12080
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 12081
F_TRAINER_FEMALE | 
#line 12082
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12083
        .doubleBattle = FALSE,
#line 12084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12086
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12087
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 12089
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12090
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 12092
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12093
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12095
    [TRAINER_ELIJAH] =
    {
#line 12096
        .trainerName = _("Elijah"),
#line 12097
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 12098
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 12100
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12101
        .doubleBattle = FALSE,
#line 12102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12104
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12105
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12107
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12108
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12110
    [TRAINER_CELIA] =
    {
#line 12111
        .trainerName = _("Celia"),
#line 12112
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 12113
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 12114
F_TRAINER_FEMALE | 
#line 12115
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 12116
        .doubleBattle = FALSE,
#line 12117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12119
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12120
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 12122
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12123
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12125
    [TRAINER_BRYAN] =
    {
#line 12126
        .trainerName = _("Bryan"),
#line 12127
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 12128
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 12130
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12131
        .doubleBattle = FALSE,
#line 12132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12134
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12135
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 12137
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12138
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12140
    [TRAINER_BRANDEN] =
    {
#line 12141
        .trainerName = _("Branden"),
#line 12142
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 12143
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 12145
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12146
        .doubleBattle = FALSE,
#line 12147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12149
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12150
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 12152
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12153
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12155
    [TRAINER_BRYANT] =
    {
#line 12156
        .trainerName = _("Bryant"),
#line 12157
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 12158
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 12160
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12161
        .doubleBattle = FALSE,
#line 12162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12164
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12165
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 12167
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12168
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12170
    [TRAINER_SHAYLA] =
    {
#line 12171
        .trainerName = _("Shayla"),
#line 12172
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 12173
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 12174
F_TRAINER_FEMALE | 
#line 12175
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12176
        .doubleBattle = FALSE,
#line 12177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12179
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12180
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 12182
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12183
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12185
    [TRAINER_KYRA] =
    {
#line 12186
        .trainerName = _("Kyra"),
#line 12187
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 12188
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 12189
F_TRAINER_FEMALE | 
#line 12190
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12191
        .doubleBattle = FALSE,
#line 12192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12194
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12195
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 12197
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12198
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12200
    [TRAINER_JAIDEN] =
    {
#line 12201
        .trainerName = _("Jaiden"),
#line 12202
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 12203
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 12205
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 12206
        .doubleBattle = FALSE,
#line 12207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12209
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12210
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 12212
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12213
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12215
    [TRAINER_ALIX] =
    {
#line 12216
        .trainerName = _("Alix"),
#line 12217
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12218
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 12219
F_TRAINER_FEMALE | 
#line 12220
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12221
        .doubleBattle = FALSE,
#line 12222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12224
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12225
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 12227
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12228
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12230
    [TRAINER_HELENE] =
    {
#line 12231
        .trainerName = _("Helene"),
#line 12232
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 12233
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 12234
F_TRAINER_FEMALE | 
#line 12235
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12236
        .doubleBattle = FALSE,
#line 12237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12239
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12240
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 12242
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12243
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12245
    [TRAINER_MARLENE] =
    {
#line 12246
        .trainerName = _("Marlene"),
#line 12247
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12248
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 12249
F_TRAINER_FEMALE | 
#line 12250
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12251
        .doubleBattle = FALSE,
#line 12252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12254
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12255
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 12257
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12258
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12260
    [TRAINER_DEVAN] =
    {
#line 12261
        .trainerName = _("Devan"),
#line 12262
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12263
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 12265
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12266
        .doubleBattle = FALSE,
#line 12267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12269
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12270
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 12272
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12273
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12275
    [TRAINER_JOHNSON] =
    {
#line 12276
        .trainerName = _("Johnson"),
#line 12277
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 12278
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 12280
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12281
        .doubleBattle = FALSE,
#line 12282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12284
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12285
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 12287
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12288
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12290
    [TRAINER_MELINA] =
    {
#line 12291
        .trainerName = _("Melina"),
#line 12292
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 12293
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 12294
F_TRAINER_FEMALE | 
#line 12295
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12296
        .doubleBattle = FALSE,
#line 12297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12299
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12300
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12302
    [TRAINER_BRANDI] =
    {
#line 12303
        .trainerName = _("Brandi"),
#line 12304
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12305
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 12306
F_TRAINER_FEMALE | 
#line 12307
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12308
        .doubleBattle = FALSE,
#line 12309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12311
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12312
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12314
    [TRAINER_AISHA] =
    {
#line 12315
        .trainerName = _("Aisha"),
#line 12316
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 12317
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 12318
F_TRAINER_FEMALE | 
#line 12319
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12320
        .doubleBattle = FALSE,
#line 12321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12323
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12324
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12326
    [TRAINER_MAKAYLA] =
    {
#line 12327
        .trainerName = _("Makayla"),
#line 12328
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12329
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12330
F_TRAINER_FEMALE | 
#line 12331
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12332
        .doubleBattle = FALSE,
#line 12333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12335
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12336
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 12338
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12339
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12341
    [TRAINER_FABIAN] =
    {
#line 12342
        .trainerName = _("Fabian"),
#line 12343
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 12344
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 12346
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12347
        .doubleBattle = FALSE,
#line 12348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12350
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12351
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12353
    [TRAINER_DAYTON] =
    {
#line 12354
        .trainerName = _("Dayton"),
#line 12355
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 12356
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 12358
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12359
        .doubleBattle = FALSE,
#line 12360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12362
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12363
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12365
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12366
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12368
    [TRAINER_RACHEL] =
    {
#line 12369
        .trainerName = _("Rachel"),
#line 12370
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 12371
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 12372
F_TRAINER_FEMALE | 
#line 12373
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12374
        .doubleBattle = FALSE,
#line 12375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12377
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12378
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12380
    [TRAINER_LEONEL] =
    {
#line 12381
        .trainerName = _("Leonel"),
#line 12382
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12383
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12385
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12386
        .doubleBattle = FALSE,
#line 12387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12389
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12390
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 12391
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 12395
    [TRAINER_CALLIE] =
    {
#line 12396
        .trainerName = _("Callie"),
#line 12397
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 12398
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 12399
F_TRAINER_FEMALE | 
#line 12400
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12401
        .doubleBattle = FALSE,
#line 12402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12404
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12405
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 12407
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12408
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12410
    [TRAINER_CALE] =
    {
#line 12411
        .trainerName = _("Cale"),
#line 12412
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 12413
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 12415
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 12416
        .doubleBattle = FALSE,
#line 12417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12419
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12420
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 12422
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12423
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12425
    [TRAINER_MYLES] =
    {
#line 12426
        .trainerName = _("Myles"),
#line 12427
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 12428
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 12430
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12431
        .doubleBattle = FALSE,
#line 12432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12434
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12435
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12437
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12438
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12440
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12441
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12443
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12444
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12446
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12447
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12449
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12450
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12452
    [TRAINER_PAT] =
    {
#line 12453
        .trainerName = _("Pat"),
#line 12454
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 12455
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 12456
F_TRAINER_FEMALE | 
#line 12457
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12458
        .doubleBattle = FALSE,
#line 12459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12461
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12462
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12464
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12465
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12467
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12468
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12470
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12471
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12473
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12474
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12476
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12477
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12479
    [TRAINER_CRISTIN_1] =
    {
#line 12480
        .trainerName = _("Cristin"),
#line 12481
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12482
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 12483
F_TRAINER_FEMALE | 
#line 12484
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12485
        .doubleBattle = FALSE,
#line 12486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12488
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12489
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 12491
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12492
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12494
    [TRAINER_ROXANNE_2] =
    {
#line 12495
        .trainerName = _("Roxanne"),
#line 12496
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12497
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 12498
F_TRAINER_FEMALE | 
#line 12499
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12500
        .doubleBattle = TRUE,
#line 12501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12503
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12504
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 12505
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 12510
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12510
            .heldItem = ITEM_SITRUS_BERRY,
#line 12511
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 12512
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12517
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12518
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 12519
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12524
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12524
            .heldItem = ITEM_SITRUS_BERRY,
#line 12525
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 12526
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12531
    [TRAINER_ROXANNE_3] =
    {
#line 12532
        .trainerName = _("Roxanne"),
#line 12533
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12534
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 12535
F_TRAINER_FEMALE | 
#line 12536
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12537
        .doubleBattle = TRUE,
#line 12538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12540
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12541
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 12542
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 12547
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12548
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 12549
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 12554
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12554
            .heldItem = ITEM_SITRUS_BERRY,
#line 12555
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12556
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12561
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12562
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12563
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12568
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12568
            .heldItem = ITEM_SITRUS_BERRY,
#line 12569
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 12570
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12575
    [TRAINER_ROXANNE_4] =
    {
#line 12576
        .trainerName = _("Roxanne"),
#line 12577
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12578
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 12579
F_TRAINER_FEMALE | 
#line 12580
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12581
        .doubleBattle = TRUE,
#line 12582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12584
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12585
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 12586
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 12591
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12592
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 12593
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 12598
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12598
            .heldItem = ITEM_SITRUS_BERRY,
#line 12599
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 12600
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12605
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12606
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 12607
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12612
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12612
            .heldItem = ITEM_SITRUS_BERRY,
#line 12613
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12614
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12619
    [TRAINER_ROXANNE_5] =
    {
#line 12620
        .trainerName = _("Roxanne"),
#line 12621
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12622
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 12623
F_TRAINER_FEMALE | 
#line 12624
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12625
        .doubleBattle = TRUE,
#line 12626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12628
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12629
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12630
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
            },
            },
            {
#line 12635
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12636
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12637
                MOVE_FOCUS_PUNCH,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 12642
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12643
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12644
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 12649
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12649
            .heldItem = ITEM_SITRUS_BERRY,
#line 12650
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12651
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12656
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12657
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12658
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12663
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12663
            .heldItem = ITEM_SITRUS_BERRY,
#line 12664
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 12665
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12670
    [TRAINER_BRAWLY_2] =
    {
#line 12671
        .trainerName = _("Brawly"),
#line 12672
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12673
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 12675
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12676
        .doubleBattle = TRUE,
#line 12677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12679
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12679
            .heldItem = ITEM_SITRUS_BERRY,
#line 12680
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 12681
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 12686
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12687
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 12688
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 12693
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12694
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 12695
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 12700
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12700
            .heldItem = ITEM_SITRUS_BERRY,
#line 12701
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 12702
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 12707
    [TRAINER_BRAWLY_3] =
    {
#line 12708
        .trainerName = _("Brawly"),
#line 12709
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12710
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 12712
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12713
        .doubleBattle = TRUE,
#line 12714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12716
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12716
            .heldItem = ITEM_SITRUS_BERRY,
#line 12717
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 12718
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 12723
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12724
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 12725
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 12730
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12731
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12732
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 12737
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12737
            .heldItem = ITEM_SITRUS_BERRY,
#line 12738
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 12739
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 12744
    [TRAINER_BRAWLY_4] =
    {
#line 12745
        .trainerName = _("Brawly"),
#line 12746
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12747
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 12749
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12750
        .doubleBattle = TRUE,
#line 12751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12753
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12754
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12755
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 12760
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12760
            .heldItem = ITEM_SITRUS_BERRY,
#line 12761
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 12762
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 12767
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12768
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 12769
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 12774
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12775
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 12776
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 12781
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12781
            .heldItem = ITEM_SITRUS_BERRY,
#line 12782
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12783
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 12788
    [TRAINER_BRAWLY_5] =
    {
#line 12789
        .trainerName = _("Brawly"),
#line 12790
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12791
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 12793
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12794
        .doubleBattle = TRUE,
#line 12795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12797
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12798
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 12799
                MOVE_MEGA_KICK,
                MOVE_FOCUS_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 12804
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12805
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 12806
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 12811
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12811
            .heldItem = ITEM_SITRUS_BERRY,
#line 12812
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 12813
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 12818
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12819
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 12820
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 12825
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12826
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12827
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 12832
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12832
            .heldItem = ITEM_SITRUS_BERRY,
#line 12833
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 12834
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 12839
    [TRAINER_WATTSON_2] =
    {
#line 12840
        .trainerName = _("Wattson"),
#line 12841
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12842
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 12844
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12845
        .doubleBattle = TRUE,
#line 12846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12848
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12849
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 12850
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12855
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12856
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 12857
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12862
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12862
            .heldItem = ITEM_SITRUS_BERRY,
#line 12863
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 12864
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12869
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12869
            .heldItem = ITEM_SITRUS_BERRY,
#line 12870
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12871
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 12876
    [TRAINER_WATTSON_3] =
    {
#line 12877
        .trainerName = _("Wattson"),
#line 12878
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12879
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 12881
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12882
        .doubleBattle = TRUE,
#line 12883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12885
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12886
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 12887
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 12892
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12893
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 12894
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12899
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12900
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 12901
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12906
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12906
            .heldItem = ITEM_SITRUS_BERRY,
#line 12907
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 12908
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12913
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12913
            .heldItem = ITEM_SITRUS_BERRY,
#line 12914
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 12915
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 12920
    [TRAINER_WATTSON_4] =
    {
#line 12921
        .trainerName = _("Wattson"),
#line 12922
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12923
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 12925
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12926
        .doubleBattle = TRUE,
#line 12927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12929
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12930
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 12931
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 12936
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12937
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 12938
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12943
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12944
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 12945
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12950
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12950
            .heldItem = ITEM_SITRUS_BERRY,
#line 12951
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 12952
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12957
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12957
            .heldItem = ITEM_SITRUS_BERRY,
#line 12958
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12959
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 12964
    [TRAINER_WATTSON_5] =
    {
#line 12965
        .trainerName = _("Wattson"),
#line 12966
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12967
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 12969
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12970
        .doubleBattle = TRUE,
#line 12971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12973
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12974
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12975
                MOVE_SWIFT,
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12980
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12981
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 12982
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 12987
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12988
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 12989
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12994
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12995
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 12996
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 13001
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13001
            .heldItem = ITEM_SITRUS_BERRY,
#line 13002
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13003
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 13008
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13008
            .heldItem = ITEM_SITRUS_BERRY,
#line 13009
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13010
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 13015
    [TRAINER_FLANNERY_2] =
    {
#line 13016
        .trainerName = _("Flannery"),
#line 13017
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13018
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 13019
F_TRAINER_FEMALE | 
#line 13020
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13021
        .doubleBattle = TRUE,
#line 13022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 13024
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13024
            .heldItem = ITEM_WHITE_HERB,
#line 13025
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 13026
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13031
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13032
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 13033
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 13038
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13038
            .heldItem = ITEM_WHITE_HERB,
#line 13039
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 13040
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 13045
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13045
            .heldItem = ITEM_WHITE_HERB,
#line 13046
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 13047
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 13052
    [TRAINER_FLANNERY_3] =
    {
#line 13053
        .trainerName = _("Flannery"),
#line 13054
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13055
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 13056
F_TRAINER_FEMALE | 
#line 13057
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13058
        .doubleBattle = TRUE,
#line 13059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13061
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13062
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 13063
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_ROAR,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 13068
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13068
            .heldItem = ITEM_WHITE_HERB,
#line 13069
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13070
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13075
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13076
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 13077
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 13082
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13082
            .heldItem = ITEM_WHITE_HERB,
#line 13083
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13084
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 13089
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13089
            .heldItem = ITEM_WHITE_HERB,
#line 13090
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13091
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 13096
    [TRAINER_FLANNERY_4] =
    {
#line 13097
        .trainerName = _("Flannery"),
#line 13098
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13099
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 13100
F_TRAINER_FEMALE | 
#line 13101
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13102
        .doubleBattle = TRUE,
#line 13103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13105
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13106
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13107
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 13112
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13113
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13114
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 13119
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13119
            .heldItem = ITEM_WHITE_HERB,
#line 13120
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13121
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13126
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13127
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13128
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 13133
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13133
            .heldItem = ITEM_WHITE_HERB,
#line 13134
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13135
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 13140
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13140
            .heldItem = ITEM_WHITE_HERB,
#line 13141
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13142
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 13147
    [TRAINER_FLANNERY_5] =
    {
#line 13148
        .trainerName = _("Flannery"),
#line 13149
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13150
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 13151
F_TRAINER_FEMALE | 
#line 13152
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13153
        .doubleBattle = TRUE,
#line 13154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13156
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13157
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13158
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 13163
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13163
            .heldItem = ITEM_WHITE_HERB,
#line 13164
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13165
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13170
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13171
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13172
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 13177
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13178
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13179
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 13184
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13184
            .heldItem = ITEM_WHITE_HERB,
#line 13185
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13186
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 13191
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13191
            .heldItem = ITEM_WHITE_HERB,
#line 13192
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13193
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 13198
    [TRAINER_NORMAN_2] =
    {
#line 13199
        .trainerName = _("Norman"),
#line 13200
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13201
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 13203
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13204
        .doubleBattle = FALSE,
#line 13205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 13207
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13208
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 13209
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 13214
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13214
            .heldItem = ITEM_SITRUS_BERRY,
#line 13215
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 13216
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 13221
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13222
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13223
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13228
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13228
            .heldItem = ITEM_SITRUS_BERRY,
#line 13229
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13230
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 13235
    [TRAINER_NORMAN_3] =
    {
#line 13236
        .trainerName = _("Norman"),
#line 13237
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13238
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 13240
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13241
        .doubleBattle = FALSE,
#line 13242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13244
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13244
            .heldItem = ITEM_SITRUS_BERRY,
#line 13245
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 13246
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 13251
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13252
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 13253
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 13258
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13259
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13260
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 13265
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13266
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13267
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13272
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13272
            .heldItem = ITEM_SITRUS_BERRY,
#line 13273
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13274
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 13279
    [TRAINER_NORMAN_4] =
    {
#line 13280
        .trainerName = _("Norman"),
#line 13281
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13282
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 13284
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13285
        .doubleBattle = FALSE,
#line 13286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13288
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13288
            .heldItem = ITEM_SITRUS_BERRY,
#line 13289
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 13290
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 13295
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13296
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 13297
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 13302
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13303
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13304
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 13309
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13310
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13311
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13316
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13316
            .heldItem = ITEM_SITRUS_BERRY,
#line 13317
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13318
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 13323
    [TRAINER_NORMAN_5] =
    {
#line 13324
        .trainerName = _("Norman"),
#line 13325
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13326
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 13328
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13329
        .doubleBattle = FALSE,
#line 13330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13332
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13332
            .heldItem = ITEM_SITRUS_BERRY,
#line 13333
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 13334
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 13339
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13340
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 13341
                MOVE_PROTECT,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 13346
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13347
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13348
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 13353
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13354
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 13355
                MOVE_TAKE_DOWN,
                MOVE_PROTECT,
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13360
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13361
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13362
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13367
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13367
            .heldItem = ITEM_SITRUS_BERRY,
#line 13368
            .lvl = 60,
            .nature = NATURE_HARDY,
            .moves = {
#line 13369
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 13374
    [TRAINER_WINONA_2] =
    {
#line 13375
        .trainerName = _("Winona"),
#line 13376
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13377
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 13378
F_TRAINER_FEMALE | 
#line 13379
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13380
        .doubleBattle = TRUE,
#line 13381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13383
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13383
            .heldItem = ITEM_SITRUS_BERRY,
#line 13384
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 13385
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13390
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13391
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 13392
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13397
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13398
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 13399
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13404
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13405
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13406
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13411
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13411
            .heldItem = ITEM_CHESTO_BERRY,
#line 13412
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13413
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 13418
    [TRAINER_WINONA_3] =
    {
#line 13419
        .trainerName = _("Winona"),
#line 13420
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13421
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 13422
F_TRAINER_FEMALE | 
#line 13423
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13424
        .doubleBattle = TRUE,
#line 13425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13427
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13428
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13429
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 13434
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13435
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13436
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13441
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13441
            .heldItem = ITEM_SITRUS_BERRY,
#line 13442
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13443
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13448
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13449
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13450
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13455
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13456
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13457
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13462
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13462
            .heldItem = ITEM_CHESTO_BERRY,
#line 13463
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13464
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 13469
    [TRAINER_WINONA_4] =
    {
#line 13470
        .trainerName = _("Winona"),
#line 13471
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13472
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 13473
F_TRAINER_FEMALE | 
#line 13474
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13475
        .doubleBattle = TRUE,
#line 13476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13478
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13479
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13480
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 13485
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13486
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 13487
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13492
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13492
            .heldItem = ITEM_SITRUS_BERRY,
#line 13493
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13494
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13499
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13500
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13501
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13506
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13507
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13508
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13513
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13513
            .heldItem = ITEM_CHESTO_BERRY,
#line 13514
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13515
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 13520
    [TRAINER_WINONA_5] =
    {
#line 13521
        .trainerName = _("Winona"),
#line 13522
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13523
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 13524
F_TRAINER_FEMALE | 
#line 13525
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13526
        .doubleBattle = TRUE,
#line 13527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13529
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13530
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13531
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 13536
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13537
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 13538
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13543
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13544
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13545
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13550
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13550
            .heldItem = ITEM_SITRUS_BERRY,
#line 13551
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13552
                MOVE_HYPER_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13557
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13558
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13559
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13564
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13564
            .heldItem = ITEM_CHESTO_BERRY,
#line 13565
            .lvl = 60,
            .nature = NATURE_HARDY,
            .moves = {
#line 13566
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 13571
    [TRAINER_TATE_AND_LIZA_2] =
    {
#line 13572
        .trainerName = _("Tate&Liza"),
#line 13573
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13574
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 13576
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13577
        .doubleBattle = TRUE,
#line 13578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13580
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13581
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13582
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 13587
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13588
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 13589
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13594
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13594
            .heldItem = ITEM_CHESTO_BERRY,
#line 13595
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 13596
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13601
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13601
            .heldItem = ITEM_CHESTO_BERRY,
#line 13602
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13603
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13608
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13608
            .heldItem = ITEM_SITRUS_BERRY,
#line 13609
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13610
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 13615
    [TRAINER_TATE_AND_LIZA_3] =
    {
#line 13616
        .trainerName = _("Tate&Liza"),
#line 13617
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13618
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 13620
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13621
        .doubleBattle = TRUE,
#line 13622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13624
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13625
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13626
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 13631
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13632
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13633
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 13638
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13639
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 13640
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13645
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13645
            .heldItem = ITEM_CHESTO_BERRY,
#line 13646
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 13647
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13652
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13652
            .heldItem = ITEM_CHESTO_BERRY,
#line 13653
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13654
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13659
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13659
            .heldItem = ITEM_SITRUS_BERRY,
#line 13660
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13661
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 13666
    [TRAINER_TATE_AND_LIZA_4] =
    {
#line 13667
        .trainerName = _("Tate&Liza"),
#line 13668
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13669
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 13671
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13672
        .doubleBattle = TRUE,
#line 13673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13675
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13676
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13677
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 13682
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13683
            .lvl = 59,
            .nature = NATURE_HARDY,
            .moves = {
#line 13684
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13689
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13690
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13691
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 13696
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13696
            .heldItem = ITEM_CHESTO_BERRY,
#line 13697
            .lvl = 59,
            .nature = NATURE_HARDY,
            .moves = {
#line 13698
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13703
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13703
            .heldItem = ITEM_CHESTO_BERRY,
#line 13704
            .lvl = 60,
            .nature = NATURE_HARDY,
            .moves = {
#line 13705
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13710
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13710
            .heldItem = ITEM_SITRUS_BERRY,
#line 13711
            .lvl = 60,
            .nature = NATURE_HARDY,
            .moves = {
#line 13712
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 13717
    [TRAINER_TATE_AND_LIZA_5] =
    {
#line 13718
        .trainerName = _("Tate&Liza"),
#line 13719
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13720
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 13722
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13723
        .doubleBattle = TRUE,
#line 13724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13726
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13727
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13728
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 13733
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13734
            .lvl = 64,
            .nature = NATURE_HARDY,
            .moves = {
#line 13735
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13740
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13741
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13742
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 13747
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13747
            .heldItem = ITEM_CHESTO_BERRY,
#line 13748
            .lvl = 64,
            .nature = NATURE_HARDY,
            .moves = {
#line 13749
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13754
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13754
            .heldItem = ITEM_CHESTO_BERRY,
#line 13755
            .lvl = 65,
            .nature = NATURE_HARDY,
            .moves = {
#line 13756
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13761
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13761
            .heldItem = ITEM_SITRUS_BERRY,
#line 13762
            .lvl = 65,
            .nature = NATURE_HARDY,
            .moves = {
#line 13763
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 13768
    [TRAINER_JUAN_2] =
    {
#line 13769
        .trainerName = _("Juan"),
#line 13770
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13771
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 13773
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13774
        .doubleBattle = TRUE,
#line 13775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13777
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13778
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13779
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 13784
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13785
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13786
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 13791
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13792
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13793
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13798
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13798
            .heldItem = ITEM_CHESTO_BERRY,
#line 13799
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13800
                MOVE_REST,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13805
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13805
            .heldItem = ITEM_CHESTO_BERRY,
#line 13806
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13807
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 13812
    [TRAINER_JUAN_3] =
    {
#line 13813
        .trainerName = _("Juan"),
#line 13814
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13815
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 13817
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13818
        .doubleBattle = TRUE,
#line 13819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13821
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13822
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13823
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 13828
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13829
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13830
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 13835
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13836
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13837
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13842
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13842
            .heldItem = ITEM_CHESTO_BERRY,
#line 13843
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13844
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13849
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13849
            .heldItem = ITEM_CHESTO_BERRY,
#line 13850
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 13851
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 13856
    [TRAINER_JUAN_4] =
    {
#line 13857
        .trainerName = _("Juan"),
#line 13858
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13859
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 13861
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13862
        .doubleBattle = TRUE,
#line 13863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13865
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13866
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 13867
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 13872
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13873
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13874
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 13879
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13880
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 13881
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 13886
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13887
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13888
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13893
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13893
            .heldItem = ITEM_CHESTO_BERRY,
#line 13894
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13895
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13900
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13900
            .heldItem = ITEM_CHESTO_BERRY,
#line 13901
            .lvl = 61,
            .nature = NATURE_HARDY,
            .moves = {
#line 13902
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 13907
    [TRAINER_JUAN_5] =
    {
#line 13908
        .trainerName = _("Juan"),
#line 13909
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13910
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 13912
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13913
        .doubleBattle = TRUE,
#line 13914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13916
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13917
            .lvl = 61,
            .nature = NATURE_HARDY,
            .moves = {
#line 13918
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 13923
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13924
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13925
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 13930
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13931
            .lvl = 61,
            .nature = NATURE_HARDY,
            .moves = {
#line 13932
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 13937
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13938
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13939
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 13944
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13944
            .heldItem = ITEM_CHESTO_BERRY,
#line 13945
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13946
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13951
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13951
            .heldItem = ITEM_CHESTO_BERRY,
#line 13952
            .lvl = 66,
            .nature = NATURE_HARDY,
            .moves = {
#line 13953
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 13958
    [TRAINER_ANGELO] =
    {
#line 13959
        .trainerName = _("Angelo"),
#line 13960
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 13961
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 13963
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 13964
        .doubleBattle = FALSE,
#line 13965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13967
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13968
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 13969
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 13973
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13974
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 13975
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 13979
    [TRAINER_DARIUS] =
    {
#line 13980
        .trainerName = _("Darius"),
#line 13981
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 13982
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 13984
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 13985
        .doubleBattle = FALSE,
#line 13986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13988
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13989
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 13991
    [TRAINER_STEVEN] =
    {
#line 13992
        .trainerName = _("Steven"),
#line 13993
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 13994
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 13996
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13997
        .doubleBattle = FALSE,
#line 13998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14000
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14001
            .lvl = 77,
            .nature = NATURE_HARDY,
            .moves = {
#line 14002
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 14007
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14008
            .lvl = 75,
            .nature = NATURE_HARDY,
            .moves = {
#line 14009
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 14014
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14015
            .lvl = 76,
            .nature = NATURE_HARDY,
            .moves = {
#line 14016
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 14021
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14022
            .lvl = 76,
            .nature = NATURE_HARDY,
            .moves = {
#line 14023
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 14028
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14029
            .lvl = 76,
            .nature = NATURE_HARDY,
            .moves = {
#line 14030
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 14035
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14035
            .heldItem = ITEM_SITRUS_BERRY,
#line 14036
            .lvl = 78,
            .nature = NATURE_HARDY,
            .moves = {
#line 14037
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 14042
    [TRAINER_ANABEL] =
    {
#line 14043
        .trainerName = _("Anabel"),
#line 14044
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 14045
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender = 
#line 14046
F_TRAINER_FEMALE | 
#line 14047
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14048
        .doubleBattle = FALSE,
#line 14049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14051
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14052
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14054
    [TRAINER_TUCKER] =
    {
#line 14055
        .trainerName = _("Tucker"),
#line 14056
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 14057
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender = 
#line 14059
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14060
        .doubleBattle = FALSE,
#line 14061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14063
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14064
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14066
    [TRAINER_SPENSER] =
    {
#line 14067
        .trainerName = _("Spenser"),
#line 14068
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 14069
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender = 
#line 14071
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14072
        .doubleBattle = FALSE,
#line 14073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14075
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14076
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14078
    [TRAINER_GRETA] =
    {
#line 14079
        .trainerName = _("Greta"),
#line 14080
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 14081
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender = 
#line 14082
F_TRAINER_FEMALE | 
#line 14083
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14084
        .doubleBattle = FALSE,
#line 14085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14087
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14088
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14090
    [TRAINER_NOLAND] =
    {
#line 14091
        .trainerName = _("Noland"),
#line 14092
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 14093
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender = 
#line 14095
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14096
        .doubleBattle = FALSE,
#line 14097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14099
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14100
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14102
    [TRAINER_LUCY] =
    {
#line 14103
        .trainerName = _("Lucy"),
#line 14104
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 14105
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender = 
#line 14106
F_TRAINER_FEMALE | 
#line 14107
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14108
        .doubleBattle = FALSE,
#line 14109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14111
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14112
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14114
    [TRAINER_BRANDON] =
    {
#line 14115
        .trainerName = _("Brandon"),
#line 14116
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 14117
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender = 
#line 14119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14120
        .doubleBattle = FALSE,
#line 14121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14123
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14124
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14126
    [TRAINER_ANDRES_2] =
    {
#line 14127
        .trainerName = _("Andres"),
#line 14128
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 14129
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 14131
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14132
        .doubleBattle = FALSE,
#line 14133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14135
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14136
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14138
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14139
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14141
    [TRAINER_ANDRES_3] =
    {
#line 14142
        .trainerName = _("Andres"),
#line 14143
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 14144
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 14146
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14147
        .doubleBattle = FALSE,
#line 14148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14150
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14151
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14153
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14154
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14156
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14157
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14159
    [TRAINER_ANDRES_4] =
    {
#line 14160
        .trainerName = _("Andres"),
#line 14161
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 14162
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 14164
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14165
        .doubleBattle = FALSE,
#line 14166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14168
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14169
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14171
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14172
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14174
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14175
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14177
    [TRAINER_ANDRES_5] =
    {
#line 14178
        .trainerName = _("Andres"),
#line 14179
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 14180
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 14182
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14183
        .doubleBattle = FALSE,
#line 14184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14186
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14187
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14189
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14190
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14192
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14193
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14195
    [TRAINER_CORY_2] =
    {
#line 14196
        .trainerName = _("Cory"),
#line 14197
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 14198
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 14200
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14201
        .doubleBattle = FALSE,
#line 14202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14204
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14205
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 14207
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14208
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 14210
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14211
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14213
    [TRAINER_CORY_3] =
    {
#line 14214
        .trainerName = _("Cory"),
#line 14215
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 14216
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 14218
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14219
        .doubleBattle = FALSE,
#line 14220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14222
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14223
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 14225
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14226
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 14228
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14229
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14231
    [TRAINER_CORY_4] =
    {
#line 14232
        .trainerName = _("Cory"),
#line 14233
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 14234
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 14236
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14237
        .doubleBattle = FALSE,
#line 14238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14240
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14241
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 14243
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14244
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 14246
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14247
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14249
    [TRAINER_CORY_5] =
    {
#line 14250
        .trainerName = _("Cory"),
#line 14251
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 14252
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 14254
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14255
        .doubleBattle = FALSE,
#line 14256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14258
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14259
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 14261
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14262
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 14264
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14265
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14267
    [TRAINER_PABLO_2] =
    {
#line 14268
        .trainerName = _("Pablo"),
#line 14269
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 14270
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 14272
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 14273
        .doubleBattle = FALSE,
#line 14274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14276
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14277
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14279
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14280
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14282
    [TRAINER_PABLO_3] =
    {
#line 14283
        .trainerName = _("Pablo"),
#line 14284
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 14285
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 14287
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 14288
        .doubleBattle = FALSE,
#line 14289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14291
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14292
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14294
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14295
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14297
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14298
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14300
    [TRAINER_PABLO_4] =
    {
#line 14301
        .trainerName = _("Pablo"),
#line 14302
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 14303
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 14305
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 14306
        .doubleBattle = FALSE,
#line 14307
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14309
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14310
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14312
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14313
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14315
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14316
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14318
    [TRAINER_PABLO_5] =
    {
#line 14319
        .trainerName = _("Pablo"),
#line 14320
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 14321
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 14323
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 14324
        .doubleBattle = FALSE,
#line 14325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14327
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14328
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 14330
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14331
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 14333
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14334
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14336
    [TRAINER_KOJI_2] =
    {
#line 14337
        .trainerName = _("Koji"),
#line 14338
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 14339
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 14341
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14342
        .doubleBattle = FALSE,
#line 14343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14345
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14346
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14348
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14349
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14351
    [TRAINER_KOJI_3] =
    {
#line 14352
        .trainerName = _("Koji"),
#line 14353
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 14354
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 14356
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14357
        .doubleBattle = FALSE,
#line 14358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14360
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14361
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14363
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14364
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14366
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14367
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14369
    [TRAINER_KOJI_4] =
    {
#line 14370
        .trainerName = _("Koji"),
#line 14371
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 14372
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 14374
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14375
        .doubleBattle = FALSE,
#line 14376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14378
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14379
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14381
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14382
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14384
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14385
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14387
    [TRAINER_KOJI_5] =
    {
#line 14388
        .trainerName = _("Koji"),
#line 14389
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 14390
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 14392
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14393
        .doubleBattle = FALSE,
#line 14394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14396
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14397
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 14399
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14400
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 14402
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14403
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14405
    [TRAINER_CRISTIN_2] =
    {
#line 14406
        .trainerName = _("Cristin"),
#line 14407
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 14408
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 14409
F_TRAINER_FEMALE | 
#line 14410
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 14411
        .doubleBattle = FALSE,
#line 14412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14414
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14415
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14417
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14418
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14420
    [TRAINER_CRISTIN_3] =
    {
#line 14421
        .trainerName = _("Cristin"),
#line 14422
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 14423
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 14424
F_TRAINER_FEMALE | 
#line 14425
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 14426
        .doubleBattle = FALSE,
#line 14427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14429
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14430
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14432
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14433
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14435
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14436
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14438
    [TRAINER_CRISTIN_4] =
    {
#line 14439
        .trainerName = _("Cristin"),
#line 14440
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 14441
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 14442
F_TRAINER_FEMALE | 
#line 14443
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 14444
        .doubleBattle = FALSE,
#line 14445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14447
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14448
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14450
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14451
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14453
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14454
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14456
    [TRAINER_CRISTIN_5] =
    {
#line 14457
        .trainerName = _("Cristin"),
#line 14458
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 14459
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 14460
F_TRAINER_FEMALE | 
#line 14461
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 14462
        .doubleBattle = FALSE,
#line 14463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14465
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14466
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14468
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14469
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14471
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14472
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14474
    [TRAINER_FERNANDO_2] =
    {
#line 14475
        .trainerName = _("Fernando"),
#line 14476
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 14477
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 14479
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14480
        .doubleBattle = FALSE,
#line 14481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14483
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14484
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14486
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14487
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14489
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14490
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14492
    [TRAINER_FERNANDO_3] =
    {
#line 14493
        .trainerName = _("Fernando"),
#line 14494
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 14495
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 14497
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14498
        .doubleBattle = FALSE,
#line 14499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14501
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14502
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14504
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14505
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14507
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14508
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14510
    [TRAINER_FERNANDO_4] =
    {
#line 14511
        .trainerName = _("Fernando"),
#line 14512
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 14513
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 14515
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14516
        .doubleBattle = FALSE,
#line 14517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14519
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14520
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14522
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14523
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14525
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14526
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14528
    [TRAINER_FERNANDO_5] =
    {
#line 14529
        .trainerName = _("Fernando"),
#line 14530
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 14531
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 14533
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14534
        .doubleBattle = FALSE,
#line 14535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14537
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14538
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14540
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14541
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14543
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14544
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14546
    [TRAINER_SAWYER_2] =
    {
#line 14547
        .trainerName = _("Sawyer"),
#line 14548
        .trainerClass = TRAINER_CLASS_HIKER,
#line 14549
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14551
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14552
        .doubleBattle = FALSE,
#line 14553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14555
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14556
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 14558
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14559
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14561
    [TRAINER_SAWYER_3] =
    {
#line 14562
        .trainerName = _("Sawyer"),
#line 14563
        .trainerClass = TRAINER_CLASS_HIKER,
#line 14564
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14566
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14567
        .doubleBattle = FALSE,
#line 14568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14570
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14571
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 14573
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14574
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 14576
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14577
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14579
    [TRAINER_SAWYER_4] =
    {
#line 14580
        .trainerName = _("Sawyer"),
#line 14581
        .trainerClass = TRAINER_CLASS_HIKER,
#line 14582
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14584
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14585
        .doubleBattle = FALSE,
#line 14586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14588
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14589
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 14591
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14592
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 14594
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14595
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14597
    [TRAINER_SAWYER_5] =
    {
#line 14598
        .trainerName = _("Sawyer"),
#line 14599
        .trainerClass = TRAINER_CLASS_HIKER,
#line 14600
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14602
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14603
        .doubleBattle = FALSE,
#line 14604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14606
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14607
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14609
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14610
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14612
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14613
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14615
    [TRAINER_GABRIELLE_2] =
    {
#line 14616
        .trainerName = _("Gabrielle"),
#line 14617
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 14618
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 14619
F_TRAINER_FEMALE | 
#line 14620
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14621
        .doubleBattle = FALSE,
#line 14622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14624
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14625
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14627
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14628
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14630
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14631
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14633
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14634
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14636
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14637
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14639
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14640
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14642
    [TRAINER_GABRIELLE_3] =
    {
#line 14643
        .trainerName = _("Gabrielle"),
#line 14644
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 14645
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 14646
F_TRAINER_FEMALE | 
#line 14647
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14648
        .doubleBattle = FALSE,
#line 14649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14651
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14652
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14654
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14655
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14657
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14658
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14660
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14661
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14663
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14664
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14666
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14667
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14669
    [TRAINER_GABRIELLE_4] =
    {
#line 14670
        .trainerName = _("Gabrielle"),
#line 14671
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 14672
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 14673
F_TRAINER_FEMALE | 
#line 14674
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14675
        .doubleBattle = FALSE,
#line 14676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14678
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14679
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14681
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14682
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14684
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14685
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14687
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14688
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14690
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14691
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14693
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14694
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14696
    [TRAINER_GABRIELLE_5] =
    {
#line 14697
        .trainerName = _("Gabrielle"),
#line 14698
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 14699
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 14700
F_TRAINER_FEMALE | 
#line 14701
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14702
        .doubleBattle = FALSE,
#line 14703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14705
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14706
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14708
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14709
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14711
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14712
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14714
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14715
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14717
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14718
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14720
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14721
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14723
    [TRAINER_THALIA_2] =
    {
#line 14724
        .trainerName = _("Thalia"),
#line 14725
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 14726
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 14727
F_TRAINER_FEMALE | 
#line 14728
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14729
        .doubleBattle = FALSE,
#line 14730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14732
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14733
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 14735
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14736
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14738
    [TRAINER_THALIA_3] =
    {
#line 14739
        .trainerName = _("Thalia"),
#line 14740
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 14741
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 14742
F_TRAINER_FEMALE | 
#line 14743
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14744
        .doubleBattle = FALSE,
#line 14745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14747
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14748
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 14750
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14751
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 14753
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14754
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14756
    [TRAINER_THALIA_4] =
    {
#line 14757
        .trainerName = _("Thalia"),
#line 14758
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 14759
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 14760
F_TRAINER_FEMALE | 
#line 14761
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14762
        .doubleBattle = FALSE,
#line 14763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14765
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14766
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 14768
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14769
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 14771
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14772
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14774
    [TRAINER_THALIA_5] =
    {
#line 14775
        .trainerName = _("Thalia"),
#line 14776
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 14777
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 14778
F_TRAINER_FEMALE | 
#line 14779
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14780
        .doubleBattle = FALSE,
#line 14781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14783
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14784
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 14786
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14787
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 14789
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14790
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14792
    [TRAINER_MARIELA] =
    {
#line 14793
        .trainerName = _("Mariela"),
#line 14794
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 14795
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 14796
F_TRAINER_FEMALE | 
#line 14797
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14798
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14800
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14801
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14803
    [TRAINER_ALVARO] =
    {
#line 14804
        .trainerName = _("Alvaro"),
#line 14805
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 14806
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 14808
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14809
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14811
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14812
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14814
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14815
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14817
    [TRAINER_EVERETT] =
    {
#line 14818
        .trainerName = _("Everett"),
#line 14819
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 14820
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 14822
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 14823
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14825
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14826
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14828
    [TRAINER_RED] =
    {
#line 14829
        .trainerName = _("Red"),
#line 14830
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 14831
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 14833
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14834
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14836
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14837
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14839
    [TRAINER_LEAF] =
    {
#line 14840
        .trainerName = _("Leaf"),
#line 14841
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 14842
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender = 
#line 14843
F_TRAINER_FEMALE | 
#line 14844
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14845
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14847
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14848
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14850
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 14851
        .trainerName = _("Brendan"),
#line 14852
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 14853
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender = 
#line 14855
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14856
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14858
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14859
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14861
    [TRAINER_MAY_PLACEHOLDER] =
    {
#line 14862
        .trainerName = _("May"),
#line 14863
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 14864
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender = 
#line 14865
F_TRAINER_FEMALE | 
#line 14866
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14867
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14869
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14870
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
