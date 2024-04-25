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
#line 5468
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 5470
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5471
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5473
    [TRAINER_TIMMY] =
    {
#line 5474
        .trainerName = _("Timmy"),
#line 5475
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5476
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 5478
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5479
        .doubleBattle = FALSE,
#line 5480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5482
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5483
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 5485
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5486
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5488
    [TRAINER_WALLACE] =
    {
#line 5489
        .trainerName = _("Wallace"),
#line 5490
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 5491
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender = 
#line 5493
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5494
        .doubleBattle = FALSE,
#line 5495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
#line 5496
        .mugshotEnabled = TRUE,
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5498
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5499
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 5500
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 5505
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5506
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 5507
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 5512
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5513
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 5514
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 5519
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5520
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 5521
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 5526
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5527
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 5528
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 5533
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5533
            .heldItem = ITEM_SITRUS_BERRY,
#line 5534
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 5535
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 5540
    [TRAINER_ANDREW] =
    {
#line 5541
        .trainerName = _("Andrew"),
#line 5542
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5543
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5545
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5546
        .doubleBattle = FALSE,
#line 5547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5549
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5550
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
            {
#line 5552
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5553
            .lvl = 10,
            .nature = NATURE_HARDY,
            },
            {
#line 5555
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5556
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5558
    [TRAINER_IVAN] =
    {
#line 5559
        .trainerName = _("Ivan"),
#line 5560
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5561
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5563
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5564
        .doubleBattle = FALSE,
#line 5565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5567
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
            {
#line 5570
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5571
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 5573
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5574
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5576
    [TRAINER_CLAUDE] =
    {
#line 5577
        .trainerName = _("Claude"),
#line 5578
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5579
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5581
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5582
        .doubleBattle = FALSE,
#line 5583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5585
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5586
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 5588
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5589
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 5591
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5592
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5594
    [TRAINER_ELLIOT_1] =
    {
#line 5595
        .trainerName = _("Elliot"),
#line 5596
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5597
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5599
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5600
        .doubleBattle = FALSE,
#line 5601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5603
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5604
            .lvl = 10,
            .nature = NATURE_HARDY,
            },
            {
#line 5606
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5607
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
            {
#line 5609
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5610
            .lvl = 10,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5612
    [TRAINER_NED] =
    {
#line 5613
        .trainerName = _("Ned"),
#line 5614
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5615
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5617
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5618
        .doubleBattle = FALSE,
#line 5619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5621
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5622
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5624
    [TRAINER_DALE] =
    {
#line 5625
        .trainerName = _("Dale"),
#line 5626
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5627
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5629
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5630
        .doubleBattle = FALSE,
#line 5631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5633
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5634
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 5636
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5637
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5639
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5640
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 5642
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5643
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5645
    [TRAINER_NOLAN] =
    {
#line 5646
        .trainerName = _("Nolan"),
#line 5647
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5648
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5650
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5651
        .doubleBattle = FALSE,
#line 5652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5654
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5655
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5657
    [TRAINER_BARNY] =
    {
#line 5658
        .trainerName = _("Barny"),
#line 5659
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5660
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5662
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5663
        .doubleBattle = FALSE,
#line 5664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5666
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5667
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 5669
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5670
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5672
    [TRAINER_WADE] =
    {
#line 5673
        .trainerName = _("Wade"),
#line 5674
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5675
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5677
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5678
        .doubleBattle = FALSE,
#line 5679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5681
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5682
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5684
    [TRAINER_CARTER] =
    {
#line 5685
        .trainerName = _("Carter"),
#line 5686
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5687
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5689
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5690
        .doubleBattle = FALSE,
#line 5691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5693
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5694
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 5696
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5697
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5699
    [TRAINER_ELLIOT_2] =
    {
#line 5700
        .trainerName = _("Elliot"),
#line 5701
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5702
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5704
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5705
        .doubleBattle = FALSE,
#line 5706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5708
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5709
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 5711
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5712
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 5714
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5715
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5717
    [TRAINER_ELLIOT_3] =
    {
#line 5718
        .trainerName = _("Elliot"),
#line 5719
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5720
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5722
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5723
        .doubleBattle = FALSE,
#line 5724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5726
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5727
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 5729
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5730
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 5732
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5733
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 5735
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5736
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5738
    [TRAINER_ELLIOT_4] =
    {
#line 5739
        .trainerName = _("Elliot"),
#line 5740
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5741
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5743
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5744
        .doubleBattle = FALSE,
#line 5745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5747
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5748
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 5750
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5751
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 5753
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5754
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 5756
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5757
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5759
    [TRAINER_ELLIOT_5] =
    {
#line 5760
        .trainerName = _("Elliot"),
#line 5761
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5762
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5764
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5765
        .doubleBattle = FALSE,
#line 5766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5768
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5769
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 5771
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5772
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 5774
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5775
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 5777
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5778
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5780
    [TRAINER_RONALD] =
    {
#line 5781
        .trainerName = _("Ronald"),
#line 5782
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5783
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 5785
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5786
        .doubleBattle = FALSE,
#line 5787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5789
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5790
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
            {
#line 5792
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5793
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
            {
#line 5795
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5796
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
            {
#line 5798
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5799
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 5801
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5802
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 5804
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5805
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5807
    [TRAINER_JACOB] =
    {
#line 5808
        .trainerName = _("Jacob"),
#line 5809
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5810
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5812
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5813
        .doubleBattle = FALSE,
#line 5814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5816
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5817
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 5819
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5820
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 5822
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5823
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5825
    [TRAINER_ANTHONY] =
    {
#line 5826
        .trainerName = _("Anthony"),
#line 5827
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5828
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5830
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5831
        .doubleBattle = FALSE,
#line 5832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5834
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5835
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5837
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5838
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5840
    [TRAINER_BENJAMIN_1] =
    {
#line 5841
        .trainerName = _("Benjamin"),
#line 5842
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5843
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5845
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5846
        .doubleBattle = FALSE,
#line 5847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5849
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5850
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5852
    [TRAINER_BENJAMIN_2] =
    {
#line 5853
        .trainerName = _("Benjamin"),
#line 5854
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5855
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5857
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5858
        .doubleBattle = FALSE,
#line 5859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5861
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5862
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5864
    [TRAINER_BENJAMIN_3] =
    {
#line 5865
        .trainerName = _("Benjamin"),
#line 5866
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5867
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5869
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5870
        .doubleBattle = FALSE,
#line 5871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5873
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5874
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5876
    [TRAINER_BENJAMIN_4] =
    {
#line 5877
        .trainerName = _("Benjamin"),
#line 5878
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5879
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5881
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5882
        .doubleBattle = FALSE,
#line 5883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5885
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5886
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5888
    [TRAINER_BENJAMIN_5] =
    {
#line 5889
        .trainerName = _("Benjamin"),
#line 5890
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5891
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5893
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5894
        .doubleBattle = FALSE,
#line 5895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5897
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5898
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5900
    [TRAINER_ABIGAIL_1] =
    {
#line 5901
        .trainerName = _("Abigail"),
#line 5902
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5903
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5904
F_TRAINER_FEMALE | 
#line 5905
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5906
        .doubleBattle = FALSE,
#line 5907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5909
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5910
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5912
    [TRAINER_JASMINE] =
    {
#line 5913
        .trainerName = _("Jasmine"),
#line 5914
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5915
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5916
F_TRAINER_FEMALE | 
#line 5917
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5918
        .doubleBattle = FALSE,
#line 5919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5921
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5922
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5924
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5925
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 5927
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5928
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5930
    [TRAINER_ABIGAIL_2] =
    {
#line 5931
        .trainerName = _("Abigail"),
#line 5932
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5933
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5934
F_TRAINER_FEMALE | 
#line 5935
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5936
        .doubleBattle = FALSE,
#line 5937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5939
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5940
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5942
    [TRAINER_ABIGAIL_3] =
    {
#line 5943
        .trainerName = _("Abigail"),
#line 5944
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5945
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5946
F_TRAINER_FEMALE | 
#line 5947
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5948
        .doubleBattle = FALSE,
#line 5949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5951
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5952
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5954
    [TRAINER_ABIGAIL_4] =
    {
#line 5955
        .trainerName = _("Abigail"),
#line 5956
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5957
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5958
F_TRAINER_FEMALE | 
#line 5959
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5960
        .doubleBattle = FALSE,
#line 5961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5963
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5964
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5966
    [TRAINER_ABIGAIL_5] =
    {
#line 5967
        .trainerName = _("Abigail"),
#line 5968
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5969
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 5970
F_TRAINER_FEMALE | 
#line 5971
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5972
        .doubleBattle = FALSE,
#line 5973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5975
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5976
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5978
    [TRAINER_DYLAN_1] =
    {
#line 5979
        .trainerName = _("Dylan"),
#line 5980
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5981
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5983
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5984
        .doubleBattle = FALSE,
#line 5985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5987
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5988
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 5990
    [TRAINER_DYLAN_2] =
    {
#line 5991
        .trainerName = _("Dylan"),
#line 5992
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5993
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 5995
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5996
        .doubleBattle = FALSE,
#line 5997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5999
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6000
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6002
    [TRAINER_DYLAN_3] =
    {
#line 6003
        .trainerName = _("Dylan"),
#line 6004
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6005
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6007
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6008
        .doubleBattle = FALSE,
#line 6009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6011
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6012
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6014
    [TRAINER_DYLAN_4] =
    {
#line 6015
        .trainerName = _("Dylan"),
#line 6016
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6017
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6019
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6020
        .doubleBattle = FALSE,
#line 6021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6023
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6024
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6026
    [TRAINER_DYLAN_5] =
    {
#line 6027
        .trainerName = _("Dylan"),
#line 6028
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6029
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6031
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6032
        .doubleBattle = FALSE,
#line 6033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6035
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6036
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6038
    [TRAINER_MARIA_1] =
    {
#line 6039
        .trainerName = _("Maria"),
#line 6040
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6041
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6042
F_TRAINER_FEMALE | 
#line 6043
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6044
        .doubleBattle = FALSE,
#line 6045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6047
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6048
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6050
    [TRAINER_MARIA_2] =
    {
#line 6051
        .trainerName = _("Maria"),
#line 6052
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6053
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6054
F_TRAINER_FEMALE | 
#line 6055
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6056
        .doubleBattle = FALSE,
#line 6057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6059
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6060
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6062
    [TRAINER_MARIA_3] =
    {
#line 6063
        .trainerName = _("Maria"),
#line 6064
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6065
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6066
F_TRAINER_FEMALE | 
#line 6067
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6068
        .doubleBattle = FALSE,
#line 6069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6071
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6072
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6074
    [TRAINER_MARIA_4] =
    {
#line 6075
        .trainerName = _("Maria"),
#line 6076
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6077
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6078
F_TRAINER_FEMALE | 
#line 6079
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6080
        .doubleBattle = FALSE,
#line 6081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6083
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6084
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6086
    [TRAINER_MARIA_5] =
    {
#line 6087
        .trainerName = _("Maria"),
#line 6088
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6089
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6090
F_TRAINER_FEMALE | 
#line 6091
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6092
        .doubleBattle = FALSE,
#line 6093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6095
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6096
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6098
    [TRAINER_CAMDEN] =
    {
#line 6099
        .trainerName = _("Camden"),
#line 6100
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6101
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6103
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6104
        .doubleBattle = FALSE,
#line 6105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6107
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6108
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 6110
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6111
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6113
    [TRAINER_DEMETRIUS] =
    {
#line 6114
        .trainerName = _("Demetrius"),
#line 6115
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 6116
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 6118
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6119
        .doubleBattle = FALSE,
#line 6120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6122
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6123
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 6125
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6126
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6128
    [TRAINER_ISAIAH_1] =
    {
#line 6129
        .trainerName = _("Isaiah"),
#line 6130
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6131
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6133
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6134
        .doubleBattle = FALSE,
#line 6135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6137
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6138
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6140
    [TRAINER_PABLO_1] =
    {
#line 6141
        .trainerName = _("Pablo"),
#line 6142
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6143
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6145
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6146
        .doubleBattle = FALSE,
#line 6147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6149
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6150
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 6152
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6153
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6155
    [TRAINER_CHASE] =
    {
#line 6156
        .trainerName = _("Chase"),
#line 6157
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6158
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6160
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6161
        .doubleBattle = FALSE,
#line 6162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6164
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6165
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 6167
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6168
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6170
    [TRAINER_ISAIAH_2] =
    {
#line 6171
        .trainerName = _("Isaiah"),
#line 6172
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6173
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6175
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6176
        .doubleBattle = FALSE,
#line 6177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6179
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6180
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6182
    [TRAINER_ISAIAH_3] =
    {
#line 6183
        .trainerName = _("Isaiah"),
#line 6184
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6185
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6187
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6188
        .doubleBattle = FALSE,
#line 6189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6191
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6192
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6194
    [TRAINER_ISAIAH_4] =
    {
#line 6195
        .trainerName = _("Isaiah"),
#line 6196
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6197
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6199
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6200
        .doubleBattle = FALSE,
#line 6201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6203
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6204
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6206
    [TRAINER_ISAIAH_5] =
    {
#line 6207
        .trainerName = _("Isaiah"),
#line 6208
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6209
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 6211
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6212
        .doubleBattle = FALSE,
#line 6213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6215
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6216
            .lvl = 48,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6218
    [TRAINER_ISOBEL] =
    {
#line 6219
        .trainerName = _("Isobel"),
#line 6220
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6221
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6222
F_TRAINER_FEMALE | 
#line 6223
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6224
        .doubleBattle = FALSE,
#line 6225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6227
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6228
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6230
    [TRAINER_DONNY] =
    {
#line 6231
        .trainerName = _("Donny"),
#line 6232
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6233
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6234
F_TRAINER_FEMALE | 
#line 6235
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6236
        .doubleBattle = FALSE,
#line 6237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6239
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6240
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 6242
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6243
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6245
    [TRAINER_TALIA] =
    {
#line 6246
        .trainerName = _("Talia"),
#line 6247
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6248
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6249
F_TRAINER_FEMALE | 
#line 6250
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6251
        .doubleBattle = FALSE,
#line 6252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6254
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6255
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6257
    [TRAINER_KATELYN_1] =
    {
#line 6258
        .trainerName = _("Katelyn"),
#line 6259
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6260
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6261
F_TRAINER_FEMALE | 
#line 6262
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6263
        .doubleBattle = FALSE,
#line 6264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6266
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6267
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6269
    [TRAINER_ALLISON] =
    {
#line 6270
        .trainerName = _("Allison"),
#line 6271
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6272
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6273
F_TRAINER_FEMALE | 
#line 6274
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6275
        .doubleBattle = FALSE,
#line 6276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6278
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6279
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 6281
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6282
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6284
    [TRAINER_KATELYN_2] =
    {
#line 6285
        .trainerName = _("Katelyn"),
#line 6286
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6287
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6288
F_TRAINER_FEMALE | 
#line 6289
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6290
        .doubleBattle = FALSE,
#line 6291
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6293
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6294
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6296
    [TRAINER_KATELYN_3] =
    {
#line 6297
        .trainerName = _("Katelyn"),
#line 6298
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6299
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6300
F_TRAINER_FEMALE | 
#line 6301
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6302
        .doubleBattle = FALSE,
#line 6303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6305
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6306
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6308
    [TRAINER_KATELYN_4] =
    {
#line 6309
        .trainerName = _("Katelyn"),
#line 6310
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6311
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6312
F_TRAINER_FEMALE | 
#line 6313
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6314
        .doubleBattle = FALSE,
#line 6315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6317
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6318
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6320
    [TRAINER_KATELYN_5] =
    {
#line 6321
        .trainerName = _("Katelyn"),
#line 6322
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6323
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 6324
F_TRAINER_FEMALE | 
#line 6325
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6326
        .doubleBattle = FALSE,
#line 6327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6329
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .lvl = 48,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6332
    [TRAINER_NICOLAS_1] =
    {
#line 6333
        .trainerName = _("Nicolas"),
#line 6334
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6335
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6337
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6338
        .doubleBattle = FALSE,
#line 6339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6341
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6342
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 6344
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6345
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6347
    [TRAINER_NICOLAS_2] =
    {
#line 6348
        .trainerName = _("Nicolas"),
#line 6349
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6350
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6352
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6353
        .doubleBattle = FALSE,
#line 6354
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6356
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6357
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 6359
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6360
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6362
    [TRAINER_NICOLAS_3] =
    {
#line 6363
        .trainerName = _("Nicolas"),
#line 6364
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6365
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6367
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6368
        .doubleBattle = FALSE,
#line 6369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6371
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6372
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
            {
#line 6374
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6375
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6377
    [TRAINER_NICOLAS_4] =
    {
#line 6378
        .trainerName = _("Nicolas"),
#line 6379
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6380
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6382
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6383
        .doubleBattle = FALSE,
#line 6384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6386
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6387
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
            {
#line 6389
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6390
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
            {
#line 6392
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6393
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6395
    [TRAINER_NICOLAS_5] =
    {
#line 6396
        .trainerName = _("Nicolas"),
#line 6397
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6398
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6400
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6401
        .doubleBattle = FALSE,
#line 6402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6404
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6405
            .lvl = 49,
            .nature = NATURE_HARDY,
            },
            {
#line 6407
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6408
            .lvl = 49,
            .nature = NATURE_HARDY,
            },
            {
#line 6410
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6410
            .heldItem = ITEM_DRAGON_FANG,
#line 6411
            .lvl = 49,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6413
    [TRAINER_AARON] =
    {
#line 6414
        .trainerName = _("Aaron"),
#line 6415
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 6416
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender = 
#line 6418
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6419
        .doubleBattle = FALSE,
#line 6420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6422
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6423
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 6424
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 6429
    [TRAINER_PERRY] =
    {
#line 6430
        .trainerName = _("Perry"),
#line 6431
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6432
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6434
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6435
        .doubleBattle = FALSE,
#line 6436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6438
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6439
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6441
    [TRAINER_HUGH] =
    {
#line 6442
        .trainerName = _("Hugh"),
#line 6443
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6444
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6446
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6447
        .doubleBattle = FALSE,
#line 6448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6450
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6451
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 6453
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6454
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6456
    [TRAINER_PHIL] =
    {
#line 6457
        .trainerName = _("Phil"),
#line 6458
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6459
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6461
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6462
        .doubleBattle = FALSE,
#line 6463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6465
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6466
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6468
    [TRAINER_JARED] =
    {
#line 6469
        .trainerName = _("Jared"),
#line 6470
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6471
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6473
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6474
        .doubleBattle = FALSE,
#line 6475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6477
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6478
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 6480
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6481
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 6483
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6484
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6486
    [TRAINER_HUMBERTO] =
    {
#line 6487
        .trainerName = _("Humberto"),
#line 6488
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6489
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6491
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6492
        .doubleBattle = FALSE,
#line 6493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6495
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6496
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6498
    [TRAINER_PRESLEY] =
    {
#line 6499
        .trainerName = _("Presley"),
#line 6500
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6501
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6503
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6504
        .doubleBattle = FALSE,
#line 6505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6507
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6508
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 6510
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6511
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6513
    [TRAINER_EDWARDO] =
    {
#line 6514
        .trainerName = _("Edwardo"),
#line 6515
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6516
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6518
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6519
        .doubleBattle = FALSE,
#line 6520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6522
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6523
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 6525
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6526
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6528
    [TRAINER_COLIN] =
    {
#line 6529
        .trainerName = _("Colin"),
#line 6530
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6531
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6533
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6534
        .doubleBattle = FALSE,
#line 6535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6537
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6538
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 6540
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6541
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6543
    [TRAINER_ROBERT_1] =
    {
#line 6544
        .trainerName = _("Robert"),
#line 6545
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6546
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6548
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6549
        .doubleBattle = FALSE,
#line 6550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6552
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6553
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6555
    [TRAINER_BENNY] =
    {
#line 6556
        .trainerName = _("Benny"),
#line 6557
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6558
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6560
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6561
        .doubleBattle = FALSE,
#line 6562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6564
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6565
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 6567
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6568
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 6570
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6571
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6573
    [TRAINER_CHESTER] =
    {
#line 6574
        .trainerName = _("Chester"),
#line 6575
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6576
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6578
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6579
        .doubleBattle = FALSE,
#line 6580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6582
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6583
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 6585
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6586
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6588
    [TRAINER_ROBERT_2] =
    {
#line 6589
        .trainerName = _("Robert"),
#line 6590
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6591
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6593
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6594
        .doubleBattle = FALSE,
#line 6595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6597
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6598
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 6600
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6601
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6603
    [TRAINER_ROBERT_3] =
    {
#line 6604
        .trainerName = _("Robert"),
#line 6605
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6606
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6608
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6609
        .doubleBattle = FALSE,
#line 6610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6612
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6613
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 6615
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6616
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6618
    [TRAINER_ROBERT_4] =
    {
#line 6619
        .trainerName = _("Robert"),
#line 6620
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6621
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6623
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6624
        .doubleBattle = FALSE,
#line 6625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6627
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6628
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 6630
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6631
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6633
    [TRAINER_ROBERT_5] =
    {
#line 6634
        .trainerName = _("Robert"),
#line 6635
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6636
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6638
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6639
        .doubleBattle = FALSE,
#line 6640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6642
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6643
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 6645
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6646
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6648
    [TRAINER_ALEX] =
    {
#line 6649
        .trainerName = _("Alex"),
#line 6650
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6651
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6653
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6654
        .doubleBattle = FALSE,
#line 6655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6657
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6658
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 6660
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6663
    [TRAINER_BECK] =
    {
#line 6664
        .trainerName = _("Beck"),
#line 6665
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 6666
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 6668
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6669
        .doubleBattle = FALSE,
#line 6670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6672
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6673
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6675
    [TRAINER_YASU] =
    {
#line 6676
        .trainerName = _("Yasu"),
#line 6677
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6678
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6680
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6681
        .doubleBattle = FALSE,
#line 6682
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6684
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6685
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6687
    [TRAINER_TAKASHI] =
    {
#line 6688
        .trainerName = _("Takashi"),
#line 6689
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6690
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6692
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6693
        .doubleBattle = FALSE,
#line 6694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6696
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6697
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 6699
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6700
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6702
    [TRAINER_DIANNE] =
    {
#line 6703
        .trainerName = _("Dianne"),
#line 6704
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6705
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 6706
F_TRAINER_FEMALE | 
#line 6707
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6708
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6710
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6711
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 6712
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 6715
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 6717
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 6720
    [TRAINER_JANI] =
    {
#line 6721
        .trainerName = _("Jani"),
#line 6722
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 6723
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 6724
F_TRAINER_FEMALE | 
#line 6725
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6726
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6728
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6729
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6731
    [TRAINER_LAO_1] =
    {
#line 6732
        .trainerName = _("Lao"),
#line 6733
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6734
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6736
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6737
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6739
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6740
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 6741
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6746
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6747
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 6748
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6753
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6754
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 6755
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 6760
    [TRAINER_LUNG] =
    {
#line 6761
        .trainerName = _("Lung"),
#line 6762
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6763
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6765
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6766
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6768
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6769
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 6771
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6772
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6774
    [TRAINER_LAO_2] =
    {
#line 6775
        .trainerName = _("Lao"),
#line 6776
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6777
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6779
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6780
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6782
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6783
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 6784
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6789
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6790
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 6791
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6795
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6796
            .lvl = 24,
            .nature = NATURE_HARDY,
            .moves = {
#line 6797
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6802
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6803
            .lvl = 26,
            .nature = NATURE_HARDY,
            .moves = {
#line 6804
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6807
    [TRAINER_LAO_3] =
    {
#line 6808
        .trainerName = _("Lao"),
#line 6809
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6810
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6812
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6813
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6815
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6816
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 6817
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6822
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6823
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 6824
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6829
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6830
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 6831
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6835
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6836
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 6837
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6840
    [TRAINER_LAO_4] =
    {
#line 6841
        .trainerName = _("Lao"),
#line 6842
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6843
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6845
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6846
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6848
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6849
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 6850
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6854
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6855
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 6856
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6860
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6861
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 6862
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6866
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6867
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 6868
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6871
    [TRAINER_LAO_5] =
    {
#line 6872
        .trainerName = _("Lao"),
#line 6873
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6874
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 6876
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6877
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6879
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6880
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 6881
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 6885
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6886
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 6887
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6892
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6893
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 6894
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 6899
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6899
            .heldItem = ITEM_SMOKE_BALL,
#line 6900
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 6901
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 6904
    [TRAINER_JOCELYN] =
    {
#line 6905
        .trainerName = _("Jocelyn"),
#line 6906
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6907
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6908
F_TRAINER_FEMALE | 
#line 6909
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6910
        .doubleBattle = FALSE,
#line 6911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6913
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6914
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6916
    [TRAINER_LAURA] =
    {
#line 6917
        .trainerName = _("Laura"),
#line 6918
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6919
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6920
F_TRAINER_FEMALE | 
#line 6921
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6922
        .doubleBattle = FALSE,
#line 6923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6925
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6926
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6928
    [TRAINER_CYNDY_1] =
    {
#line 6929
        .trainerName = _("Cyndy"),
#line 6930
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6931
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6932
F_TRAINER_FEMALE | 
#line 6933
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6934
        .doubleBattle = FALSE,
#line 6935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6937
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6938
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 6940
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6941
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6943
    [TRAINER_CORA] =
    {
#line 6944
        .trainerName = _("Cora"),
#line 6945
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6946
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6947
F_TRAINER_FEMALE | 
#line 6948
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6949
        .doubleBattle = FALSE,
#line 6950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6952
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6953
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6955
    [TRAINER_PAULA] =
    {
#line 6956
        .trainerName = _("Paula"),
#line 6957
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6958
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6959
F_TRAINER_FEMALE | 
#line 6960
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6961
        .doubleBattle = FALSE,
#line 6962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6964
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6965
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6967
    [TRAINER_CYNDY_2] =
    {
#line 6968
        .trainerName = _("Cyndy"),
#line 6969
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6970
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6971
F_TRAINER_FEMALE | 
#line 6972
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6973
        .doubleBattle = FALSE,
#line 6974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6976
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6977
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 6979
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6980
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6982
    [TRAINER_CYNDY_3] =
    {
#line 6983
        .trainerName = _("Cyndy"),
#line 6984
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6985
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 6986
F_TRAINER_FEMALE | 
#line 6987
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6988
        .doubleBattle = FALSE,
#line 6989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6991
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6992
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 6994
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6995
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 6997
    [TRAINER_CYNDY_4] =
    {
#line 6998
        .trainerName = _("Cyndy"),
#line 6999
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7000
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7001
F_TRAINER_FEMALE | 
#line 7002
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7003
        .doubleBattle = FALSE,
#line 7004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7006
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7007
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 7009
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7010
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7012
    [TRAINER_CYNDY_5] =
    {
#line 7013
        .trainerName = _("Cyndy"),
#line 7014
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7015
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 7016
F_TRAINER_FEMALE | 
#line 7017
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7018
        .doubleBattle = FALSE,
#line 7019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7021
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7022
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 7024
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7025
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7027
    [TRAINER_MADELINE_1] =
    {
#line 7028
        .trainerName = _("Madeline"),
#line 7029
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7030
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7031
F_TRAINER_FEMALE | 
#line 7032
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7033
        .doubleBattle = FALSE,
#line 7034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7036
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7037
            .lvl = 19,
            .nature = NATURE_HARDY,
            .moves = {
#line 7038
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7043
    [TRAINER_CLARISSA] =
    {
#line 7044
        .trainerName = _("Clarissa"),
#line 7045
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7046
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7047
F_TRAINER_FEMALE | 
#line 7048
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7049
        .doubleBattle = FALSE,
#line 7050
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7052
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7053
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 7055
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7056
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7058
    [TRAINER_ANGELICA] =
    {
#line 7059
        .trainerName = _("Angelica"),
#line 7060
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7061
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7062
F_TRAINER_FEMALE | 
#line 7063
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7064
        .doubleBattle = FALSE,
#line 7065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7067
            .species = SPECIES_CASTFORM_NORMAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7068
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 7069
                MOVE_RAIN_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_THUNDER,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 7074
    [TRAINER_MADELINE_2] =
    {
#line 7075
        .trainerName = _("Madeline"),
#line 7076
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7077
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7078
F_TRAINER_FEMALE | 
#line 7079
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7080
        .doubleBattle = FALSE,
#line 7081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7083
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7084
            .lvl = 29,
            .nature = NATURE_HARDY,
            .moves = {
#line 7085
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7090
    [TRAINER_MADELINE_3] =
    {
#line 7091
        .trainerName = _("Madeline"),
#line 7092
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7093
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7094
F_TRAINER_FEMALE | 
#line 7095
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7096
        .doubleBattle = FALSE,
#line 7097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7099
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7100
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 7101
                MOVE_EMBER,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7106
    [TRAINER_MADELINE_4] =
    {
#line 7107
        .trainerName = _("Madeline"),
#line 7108
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7109
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7110
F_TRAINER_FEMALE | 
#line 7111
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7112
        .doubleBattle = FALSE,
#line 7113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7115
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7116
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 7117
                MOVE_LEECH_SEED,
                MOVE_MEGA_DRAIN,
                MOVE_GRASS_WHISTLE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 7122
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7123
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 7124
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7129
    [TRAINER_MADELINE_5] =
    {
#line 7130
        .trainerName = _("Madeline"),
#line 7131
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 7132
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 7133
F_TRAINER_FEMALE | 
#line 7134
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7135
        .doubleBattle = FALSE,
#line 7136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7138
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7139
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 7140
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 7145
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7146
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 7147
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 7152
    [TRAINER_BEVERLY] =
    {
#line 7153
        .trainerName = _("Beverly"),
#line 7154
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7155
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7156
F_TRAINER_FEMALE | 
#line 7157
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7158
        .doubleBattle = FALSE,
#line 7159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7161
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7162
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7164
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7165
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7167
    [TRAINER_IMANI] =
    {
#line 7168
        .trainerName = _("Imani"),
#line 7169
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7170
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7171
F_TRAINER_FEMALE | 
#line 7172
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7173
        .doubleBattle = FALSE,
#line 7174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7176
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7177
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7179
    [TRAINER_KYLA] =
    {
#line 7180
        .trainerName = _("Kyla"),
#line 7181
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7182
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7183
F_TRAINER_FEMALE | 
#line 7184
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7185
        .doubleBattle = FALSE,
#line 7186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7188
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7189
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7191
    [TRAINER_DENISE] =
    {
#line 7192
        .trainerName = _("Denise"),
#line 7193
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7194
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7195
F_TRAINER_FEMALE | 
#line 7196
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7197
        .doubleBattle = FALSE,
#line 7198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7200
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7201
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7203
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7204
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7206
    [TRAINER_BETH] =
    {
#line 7207
        .trainerName = _("Beth"),
#line 7208
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7209
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7210
F_TRAINER_FEMALE | 
#line 7211
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7212
        .doubleBattle = FALSE,
#line 7213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7215
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7216
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7218
    [TRAINER_TARA] =
    {
#line 7219
        .trainerName = _("Tara"),
#line 7220
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7221
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7222
F_TRAINER_FEMALE | 
#line 7223
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7224
        .doubleBattle = FALSE,
#line 7225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7227
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7228
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7230
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7231
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7233
    [TRAINER_MISSY] =
    {
#line 7234
        .trainerName = _("Missy"),
#line 7235
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7236
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7237
F_TRAINER_FEMALE | 
#line 7238
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7239
        .doubleBattle = FALSE,
#line 7240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7242
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7243
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7245
    [TRAINER_ALICE] =
    {
#line 7246
        .trainerName = _("Alice"),
#line 7247
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7248
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7249
F_TRAINER_FEMALE | 
#line 7250
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7251
        .doubleBattle = FALSE,
#line 7252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7254
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7255
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 7257
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7258
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 7260
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7261
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7263
    [TRAINER_JENNY_1] =
    {
#line 7264
        .trainerName = _("Jenny"),
#line 7265
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7266
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7267
F_TRAINER_FEMALE | 
#line 7268
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7269
        .doubleBattle = FALSE,
#line 7270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7272
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7273
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7275
    [TRAINER_GRACE] =
    {
#line 7276
        .trainerName = _("Grace"),
#line 7277
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7278
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7279
F_TRAINER_FEMALE | 
#line 7280
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7281
        .doubleBattle = FALSE,
#line 7282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7284
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7285
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7287
    [TRAINER_TANYA] =
    {
#line 7288
        .trainerName = _("Tanya"),
#line 7289
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7290
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7291
F_TRAINER_FEMALE | 
#line 7292
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7293
        .doubleBattle = FALSE,
#line 7294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7296
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7297
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7299
    [TRAINER_SHARON] =
    {
#line 7300
        .trainerName = _("Sharon"),
#line 7301
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7302
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7303
F_TRAINER_FEMALE | 
#line 7304
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7305
        .doubleBattle = FALSE,
#line 7306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7308
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7309
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7311
    [TRAINER_NIKKI] =
    {
#line 7312
        .trainerName = _("Nikki"),
#line 7313
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7314
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7315
F_TRAINER_FEMALE | 
#line 7316
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7317
        .doubleBattle = FALSE,
#line 7318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7320
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7321
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7323
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7324
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7326
    [TRAINER_BRENDA] =
    {
#line 7327
        .trainerName = _("Brenda"),
#line 7328
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7329
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7330
F_TRAINER_FEMALE | 
#line 7331
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7332
        .doubleBattle = FALSE,
#line 7333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7335
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7336
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7338
    [TRAINER_KATIE] =
    {
#line 7339
        .trainerName = _("Katie"),
#line 7340
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7341
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7342
F_TRAINER_FEMALE | 
#line 7343
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7344
        .doubleBattle = FALSE,
#line 7345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7347
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7348
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7350
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7351
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7353
    [TRAINER_SUSIE] =
    {
#line 7354
        .trainerName = _("Susie"),
#line 7355
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7356
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7357
F_TRAINER_FEMALE | 
#line 7358
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7359
        .doubleBattle = FALSE,
#line 7360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7362
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7363
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7365
    [TRAINER_KARA] =
    {
#line 7366
        .trainerName = _("Kara"),
#line 7367
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7368
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7369
F_TRAINER_FEMALE | 
#line 7370
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7371
        .doubleBattle = FALSE,
#line 7372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7374
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7375
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7377
    [TRAINER_DANA] =
    {
#line 7378
        .trainerName = _("Dana"),
#line 7379
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7380
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7381
F_TRAINER_FEMALE | 
#line 7382
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7383
        .doubleBattle = FALSE,
#line 7384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7386
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7387
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7389
    [TRAINER_SIENNA] =
    {
#line 7390
        .trainerName = _("Sienna"),
#line 7391
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7392
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7393
F_TRAINER_FEMALE | 
#line 7394
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7395
        .doubleBattle = FALSE,
#line 7396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7398
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7399
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7401
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7402
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7404
    [TRAINER_DEBRA] =
    {
#line 7405
        .trainerName = _("Debra"),
#line 7406
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7407
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7408
F_TRAINER_FEMALE | 
#line 7409
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7410
        .doubleBattle = FALSE,
#line 7411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7413
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7414
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7416
    [TRAINER_LINDA] =
    {
#line 7417
        .trainerName = _("Linda"),
#line 7418
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7419
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7420
F_TRAINER_FEMALE | 
#line 7421
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7422
        .doubleBattle = FALSE,
#line 7423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7425
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7426
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7428
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7429
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7431
    [TRAINER_KAYLEE] =
    {
#line 7432
        .trainerName = _("Kaylee"),
#line 7433
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7434
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7435
F_TRAINER_FEMALE | 
#line 7436
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7437
        .doubleBattle = FALSE,
#line 7438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7440
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7441
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 7443
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7444
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7446
    [TRAINER_LAUREL] =
    {
#line 7447
        .trainerName = _("Laurel"),
#line 7448
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7449
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7450
F_TRAINER_FEMALE | 
#line 7451
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7452
        .doubleBattle = FALSE,
#line 7453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7455
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7456
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7458
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7459
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7461
    [TRAINER_CARLEE] =
    {
#line 7462
        .trainerName = _("Carlee"),
#line 7463
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7464
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7465
F_TRAINER_FEMALE | 
#line 7466
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7467
        .doubleBattle = FALSE,
#line 7468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7470
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7471
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7473
    [TRAINER_JENNY_2] =
    {
#line 7474
        .trainerName = _("Jenny"),
#line 7475
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7476
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7477
F_TRAINER_FEMALE | 
#line 7478
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7479
        .doubleBattle = FALSE,
#line 7480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7482
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7483
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7485
    [TRAINER_JENNY_3] =
    {
#line 7486
        .trainerName = _("Jenny"),
#line 7487
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7488
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7489
F_TRAINER_FEMALE | 
#line 7490
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7491
        .doubleBattle = FALSE,
#line 7492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7494
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7495
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7497
    [TRAINER_JENNY_4] =
    {
#line 7498
        .trainerName = _("Jenny"),
#line 7499
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7500
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7501
F_TRAINER_FEMALE | 
#line 7502
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7503
        .doubleBattle = FALSE,
#line 7504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7506
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7507
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 7509
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7510
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7512
    [TRAINER_JENNY_5] =
    {
#line 7513
        .trainerName = _("Jenny"),
#line 7514
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 7515
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 7516
F_TRAINER_FEMALE | 
#line 7517
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7518
        .doubleBattle = FALSE,
#line 7519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7521
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7522
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 7524
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7525
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 7527
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7528
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7530
    [TRAINER_HEIDI] =
    {
#line 7531
        .trainerName = _("Heidi"),
#line 7532
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7533
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7534
F_TRAINER_FEMALE | 
#line 7535
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7536
        .doubleBattle = FALSE,
#line 7537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7539
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7540
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 7541
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 7546
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7547
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 7548
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 7553
    [TRAINER_BECKY] =
    {
#line 7554
        .trainerName = _("Becky"),
#line 7555
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7556
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7557
F_TRAINER_FEMALE | 
#line 7558
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7559
        .doubleBattle = FALSE,
#line 7560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7562
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7563
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 7564
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 7569
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7570
            .lvl = 22,
            .nature = NATURE_HARDY,
            .moves = {
#line 7571
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 7576
    [TRAINER_CAROL] =
    {
#line 7577
        .trainerName = _("Carol"),
#line 7578
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7579
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7580
F_TRAINER_FEMALE | 
#line 7581
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7582
        .doubleBattle = FALSE,
#line 7583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7585
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7586
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 7588
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7589
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7591
    [TRAINER_NANCY] =
    {
#line 7592
        .trainerName = _("Nancy"),
#line 7593
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7594
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7595
F_TRAINER_FEMALE | 
#line 7596
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7597
        .doubleBattle = FALSE,
#line 7598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7600
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7601
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 7603
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7604
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7606
    [TRAINER_MARTHA] =
    {
#line 7607
        .trainerName = _("Martha"),
#line 7608
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7609
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7610
F_TRAINER_FEMALE | 
#line 7611
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7612
        .doubleBattle = FALSE,
#line 7613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7615
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7616
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
            {
#line 7618
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7619
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7621
    [TRAINER_DIANA_1] =
    {
#line 7622
        .trainerName = _("Diana"),
#line 7623
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7624
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7625
F_TRAINER_FEMALE | 
#line 7626
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7627
        .doubleBattle = FALSE,
#line 7628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7630
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7631
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
            {
#line 7633
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7634
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
            {
#line 7636
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7637
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7639
    [TRAINER_CEDRIC] =
    {
#line 7640
        .trainerName = _("Cedric"),
#line 7641
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7642
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 7644
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7645
        .doubleBattle = FALSE,
#line 7646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7648
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7649
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 7650
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 7655
    [TRAINER_IRENE] =
    {
#line 7656
        .trainerName = _("Irene"),
#line 7657
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7658
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7659
F_TRAINER_FEMALE | 
#line 7660
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7661
        .doubleBattle = FALSE,
#line 7662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7664
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7665
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 7667
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7668
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7670
    [TRAINER_DIANA_2] =
    {
#line 7671
        .trainerName = _("Diana"),
#line 7672
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7673
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7674
F_TRAINER_FEMALE | 
#line 7675
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7676
        .doubleBattle = FALSE,
#line 7677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7679
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7680
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7682
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7683
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 7685
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7686
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7688
    [TRAINER_DIANA_3] =
    {
#line 7689
        .trainerName = _("Diana"),
#line 7690
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7691
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7692
F_TRAINER_FEMALE | 
#line 7693
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7694
        .doubleBattle = FALSE,
#line 7695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7697
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7698
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 7700
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7701
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 7703
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7704
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7706
    [TRAINER_DIANA_4] =
    {
#line 7707
        .trainerName = _("Diana"),
#line 7708
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7709
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7710
F_TRAINER_FEMALE | 
#line 7711
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7712
        .doubleBattle = FALSE,
#line 7713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7715
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7716
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 7718
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7719
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 7721
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7722
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7724
    [TRAINER_DIANA_5] =
    {
#line 7725
        .trainerName = _("Diana"),
#line 7726
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7727
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 7728
F_TRAINER_FEMALE | 
#line 7729
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7730
        .doubleBattle = FALSE,
#line 7731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7733
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7734
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 7736
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7737
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 7739
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7740
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7742
    [TRAINER_AMY_AND_LIV_1] =
    {
#line 7743
        .trainerName = _("Amy & Liv"),
#line 7744
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7745
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7747
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7748
        .doubleBattle = TRUE,
#line 7749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7751
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7752
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 7754
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7755
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7757
    [TRAINER_AMY_AND_LIV_2] =
    {
#line 7758
        .trainerName = _("Amy & Liv"),
#line 7759
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7760
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7762
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7763
        .doubleBattle = TRUE,
#line 7764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7766
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7767
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 7769
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7770
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7772
    [TRAINER_GINA_AND_MIA_1] =
    {
#line 7773
        .trainerName = _("Gina & Mia"),
#line 7774
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7775
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7777
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7778
        .doubleBattle = TRUE,
#line 7779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7781
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7782
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 7784
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7785
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7787
    [TRAINER_MIU_AND_YUKI] =
    {
#line 7788
        .trainerName = _("Miu & Yuki"),
#line 7789
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7790
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7792
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7793
        .doubleBattle = TRUE,
#line 7794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7796
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7797
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 7799
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7800
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7802
    [TRAINER_AMY_AND_LIV_3] =
    {
#line 7803
        .trainerName = _("Amy & Liv"),
#line 7804
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7805
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7807
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7808
        .doubleBattle = TRUE,
#line 7809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7811
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7812
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
            {
#line 7814
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7815
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7817
    [TRAINER_GINA_AND_MIA_2] =
    {
#line 7818
        .trainerName = _("Gina & Mia"),
#line 7819
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7820
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7822
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7823
        .doubleBattle = TRUE,
#line 7824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7826
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7827
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 7828
                MOVE_NIGHT_SHADE,
                MOVE_DISABLE,
            },
            },
            {
#line 7831
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7832
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 7833
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 7836
    [TRAINER_AMY_AND_LIV_4] =
    {
#line 7837
        .trainerName = _("Amy & Liv"),
#line 7838
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7839
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7841
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7842
        .doubleBattle = TRUE,
#line 7843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7845
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7846
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 7848
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7849
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7851
    [TRAINER_AMY_AND_LIV_5] =
    {
#line 7852
        .trainerName = _("Amy & Liv"),
#line 7853
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7854
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7856
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7857
        .doubleBattle = TRUE,
#line 7858
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7860
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7861
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 7862
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_FAKE_TEARS,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7867
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7868
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 7869
                MOVE_SPARK,
                MOVE_CHARGE,
                MOVE_CHARM,
                MOVE_HELPING_HAND,
            },
            },
        },
    },
#line 7874
    [TRAINER_AMY_AND_LIV_6] =
    {
#line 7875
        .trainerName = _("Amy & Liv"),
#line 7876
        .trainerClass = TRAINER_CLASS_TWINS,
#line 7877
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 7879
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 7880
        .doubleBattle = TRUE,
#line 7881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7883
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7884
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 7885
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_FAKE_TEARS,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 7890
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7891
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 7892
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_CHARM,
                MOVE_HELPING_HAND,
            },
            },
        },
    },
#line 7897
    [TRAINER_HUEY] =
    {
#line 7898
        .trainerName = _("Huey"),
#line 7899
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7900
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7902
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7903
        .doubleBattle = FALSE,
#line 7904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7906
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7907
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
            {
#line 7909
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7910
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7912
    [TRAINER_EDMOND] =
    {
#line 7913
        .trainerName = _("Edmond"),
#line 7914
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7915
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7917
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7918
        .doubleBattle = FALSE,
#line 7919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7921
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7922
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7924
    [TRAINER_ERNEST_1] =
    {
#line 7925
        .trainerName = _("Ernest"),
#line 7926
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7927
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7929
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7930
        .doubleBattle = FALSE,
#line 7931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7933
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7934
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 7936
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7937
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7939
    [TRAINER_DWAYNE] =
    {
#line 7940
        .trainerName = _("Dwayne"),
#line 7941
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7942
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7944
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7945
        .doubleBattle = FALSE,
#line 7946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7948
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7949
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 7951
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7952
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 7954
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7955
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7957
    [TRAINER_PHILLIP] =
    {
#line 7958
        .trainerName = _("Phillip"),
#line 7959
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7960
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7962
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7963
        .doubleBattle = FALSE,
#line 7964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7966
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7967
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
            {
#line 7969
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7970
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7972
    [TRAINER_LEONARD] =
    {
#line 7973
        .trainerName = _("Leonard"),
#line 7974
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7975
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7977
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7978
        .doubleBattle = FALSE,
#line 7979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7981
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7982
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 7984
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7985
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 7987
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7988
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 7990
    [TRAINER_DUNCAN] =
    {
#line 7991
        .trainerName = _("Duncan"),
#line 7992
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7993
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 7995
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7996
        .doubleBattle = FALSE,
#line 7997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7999
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 8002
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8003
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8005
    [TRAINER_ERNEST_2] =
    {
#line 8006
        .trainerName = _("Ernest"),
#line 8007
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8008
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8010
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8011
        .doubleBattle = FALSE,
#line 8012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8014
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8015
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 8017
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8018
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 8020
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8021
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8023
    [TRAINER_ERNEST_3] =
    {
#line 8024
        .trainerName = _("Ernest"),
#line 8025
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8026
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8028
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8029
        .doubleBattle = FALSE,
#line 8030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8032
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8033
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 8035
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8036
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 8038
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8039
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8041
    [TRAINER_ERNEST_4] =
    {
#line 8042
        .trainerName = _("Ernest"),
#line 8043
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8044
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8046
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8047
        .doubleBattle = FALSE,
#line 8048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8050
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8051
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 8053
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8054
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 8056
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8057
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8059
    [TRAINER_ERNEST_5] =
    {
#line 8060
        .trainerName = _("Ernest"),
#line 8061
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8062
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8064
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8065
        .doubleBattle = FALSE,
#line 8066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8068
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8069
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 8071
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8072
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 8074
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8075
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8077
    [TRAINER_ELI] =
    {
#line 8078
        .trainerName = _("Eli"),
#line 8079
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8080
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 8082
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8083
        .doubleBattle = FALSE,
#line 8084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8086
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8087
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8089
    [TRAINER_ANNIKA] =
    {
#line 8090
        .trainerName = _("Annika"),
#line 8091
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8092
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender = 
#line 8093
F_TRAINER_FEMALE | 
#line 8094
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8095
        .doubleBattle = FALSE,
#line 8096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8098
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .heldItem = ITEM_ORAN_BERRY,
#line 8099
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 8100
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 8105
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8105
            .heldItem = ITEM_ORAN_BERRY,
#line 8106
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 8107
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 8112
    [TRAINER_JAZMYN] =
    {
#line 8113
        .trainerName = _("Jazmyn"),
#line 8114
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8115
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8116
F_TRAINER_FEMALE | 
#line 8117
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8118
        .doubleBattle = FALSE,
#line 8119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8121
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8122
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8124
    [TRAINER_JONAS] =
    {
#line 8125
        .trainerName = _("Jonas"),
#line 8126
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8127
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 8129
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8130
        .doubleBattle = FALSE,
#line 8131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8133
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8134
            .lvl = 31,
            .nature = NATURE_HARDY,
            .moves = {
#line 8135
                MOVE_TOXIC,
                MOVE_THUNDER,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 8140
    [TRAINER_KAYLEY] =
    {
#line 8141
        .trainerName = _("Kayley"),
#line 8142
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 8143
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 8144
F_TRAINER_FEMALE | 
#line 8145
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8146
        .doubleBattle = FALSE,
#line 8147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8149
            .species = SPECIES_CASTFORM_NORMAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8150
            .lvl = 31,
            .nature = NATURE_HARDY,
            .moves = {
#line 8151
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 8156
    [TRAINER_AURON] =
    {
#line 8157
        .trainerName = _("Auron"),
#line 8158
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8159
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 8161
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8162
        .doubleBattle = FALSE,
#line 8163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8165
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8166
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 8168
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8169
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8171
    [TRAINER_KELVIN] =
    {
#line 8172
        .trainerName = _("Kelvin"),
#line 8173
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8174
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8176
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8177
        .doubleBattle = FALSE,
#line 8178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8180
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8181
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 8183
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8184
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8186
    [TRAINER_MARLEY] =
    {
#line 8187
        .trainerName = _("Marley"),
#line 8188
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8189
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 8190
F_TRAINER_FEMALE | 
#line 8191
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8192
        .doubleBattle = FALSE,
#line 8193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8195
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8196
            .lvl = 34,
            .nature = NATURE_HARDY,
            .moves = {
#line 8197
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 8202
    [TRAINER_REYNA] =
    {
#line 8203
        .trainerName = _("Reyna"),
#line 8204
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8205
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 8206
F_TRAINER_FEMALE | 
#line 8207
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8208
        .doubleBattle = FALSE,
#line 8209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8211
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8212
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 8214
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8215
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8217
    [TRAINER_HUDSON] =
    {
#line 8218
        .trainerName = _("Hudson"),
#line 8219
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8220
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 8222
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8223
        .doubleBattle = FALSE,
#line 8224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8226
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8227
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8229
    [TRAINER_CONOR] =
    {
#line 8230
        .trainerName = _("Conor"),
#line 8231
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8232
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 8234
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8235
        .doubleBattle = FALSE,
#line 8236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8238
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8239
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 8241
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8242
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8244
    [TRAINER_EDWIN_1] =
    {
#line 8245
        .trainerName = _("Edwin"),
#line 8246
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8247
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8249
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8250
        .doubleBattle = FALSE,
#line 8251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8253
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8254
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 8256
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8257
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8259
    [TRAINER_HECTOR] =
    {
#line 8260
        .trainerName = _("Hector"),
#line 8261
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8262
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8264
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8265
        .doubleBattle = FALSE,
#line 8266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8268
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8269
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8271
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8272
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8274
    [TRAINER_TABITHA_MOSSDEEP] =
    {
#line 8275
        .trainerName = _("Tabitha"),
#line 8276
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8277
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 8279
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8280
        .doubleBattle = FALSE,
#line 8281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8283
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8284
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 8286
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8287
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 8289
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8290
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8292
    [TRAINER_EDWIN_2] =
    {
#line 8293
        .trainerName = _("Edwin"),
#line 8294
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8295
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8297
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8298
        .doubleBattle = FALSE,
#line 8299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8301
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8302
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 8304
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8305
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8307
    [TRAINER_EDWIN_3] =
    {
#line 8308
        .trainerName = _("Edwin"),
#line 8309
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8310
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8312
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8313
        .doubleBattle = FALSE,
#line 8314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8316
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8317
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8319
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8320
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8322
    [TRAINER_EDWIN_4] =
    {
#line 8323
        .trainerName = _("Edwin"),
#line 8324
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8325
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8327
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8328
        .doubleBattle = FALSE,
#line 8329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8331
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8332
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8334
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8335
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8337
    [TRAINER_EDWIN_5] =
    {
#line 8338
        .trainerName = _("Edwin"),
#line 8339
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 8340
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender = 
#line 8342
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8343
        .doubleBattle = FALSE,
#line 8344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8346
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8347
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 8349
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8350
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8352
    [TRAINER_WALLY_VR_1] =
    {
#line 8353
        .trainerName = _("Wally"),
#line 8354
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8355
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 8357
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8358
        .doubleBattle = FALSE,
#line 8359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8361
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8362
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 8363
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 8368
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8369
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 8370
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 8375
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8376
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 8377
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 8382
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8383
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 8384
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 8389
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8390
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 8391
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 8396
    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 8397
        .trainerName = _("Brendan"),
#line 8398
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8399
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8401
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8402
        .doubleBattle = FALSE,
#line 8403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8405
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8407
            .lvl = 5,
#line 8406
            .nature = NATURE_NAIVE,
            .moves = {
#line 8408
                MOVE_POUND,
                MOVE_LEER,
            },
            },
        },
    },
#line 8411
    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 8412
        .trainerName = _("May"),
#line 8413
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8414
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8415
F_TRAINER_FEMALE | 
#line 8416
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8417
        .doubleBattle = FALSE,
#line 8418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8420
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8422
            .lvl = 5,
#line 8421
            .nature = NATURE_NAIVE,
            .moves = {
#line 8423
                MOVE_POUND,
                MOVE_LEER,
            },
            },
        },
    },
#line 8426
    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 8427
        .trainerName = _("Brendan"),
#line 8428
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8429
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8431
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8432
        .doubleBattle = FALSE,
#line 8433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8435
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8437
            .lvl = 5,
#line 8436
            .nature = NATURE_LONELY,
            .moves = {
#line 8438
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
        },
    },
#line 8441
    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 8442
        .trainerName = _("May"),
#line 8443
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8444
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8445
F_TRAINER_FEMALE | 
#line 8446
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8447
        .doubleBattle = FALSE,
#line 8448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8450
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8452
            .lvl = 5,
#line 8451
            .nature = NATURE_LONELY,
            .moves = {
#line 8453
                MOVE_SCRATCH,
                MOVE_GROWL,
            },
            },
        },
    },
#line 8456
    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 8457
        .trainerName = _("Brendan"),
#line 8458
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8459
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8461
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8462
        .doubleBattle = FALSE,
#line 8463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8465
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8467
            .lvl = 5,
#line 8466
            .nature = NATURE_FREESPIRITED,
            .moves = {
#line 8468
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 8471
    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 8472
        .trainerName = _("May"),
#line 8473
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8474
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8475
F_TRAINER_FEMALE | 
#line 8476
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8477
        .doubleBattle = FALSE,
#line 8478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8480
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8482
            .lvl = 5,
#line 8481
            .nature = NATURE_FREESPIRITED,
            .moves = {
#line 8483
                MOVE_TACKLE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 8486
    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 8487
        .trainerName = _("Brendan"),
#line 8488
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8489
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8491
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8492
        .doubleBattle = FALSE,
#line 8493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8495
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8496
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8498
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8499
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8501
    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 8502
        .trainerName = _("Brendan"),
#line 8503
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8504
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8506
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8507
        .doubleBattle = FALSE,
#line 8508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8510
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8511
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8513
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8514
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8516
    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 8517
        .trainerName = _("Brendan"),
#line 8518
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8519
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8521
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8522
        .doubleBattle = FALSE,
#line 8523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8525
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8526
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8528
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8529
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8531
    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 8532
        .trainerName = _("May"),
#line 8533
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8534
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8535
F_TRAINER_FEMALE | 
#line 8536
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8537
        .doubleBattle = FALSE,
#line 8538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8540
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8541
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8543
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8544
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8546
    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 8547
        .trainerName = _("May"),
#line 8548
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8549
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8550
F_TRAINER_FEMALE | 
#line 8551
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8552
        .doubleBattle = FALSE,
#line 8553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8555
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8556
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8558
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8559
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8561
    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 8562
        .trainerName = _("May"),
#line 8563
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8564
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8565
F_TRAINER_FEMALE | 
#line 8566
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8567
        .doubleBattle = FALSE,
#line 8568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8570
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8571
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
            {
#line 8573
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8574
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8576
    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 8577
        .trainerName = _("Brendan"),
#line 8578
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8579
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8581
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8582
        .doubleBattle = FALSE,
#line 8583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8585
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8586
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8588
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8589
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8591
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8592
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8594
    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 8595
        .trainerName = _("Brendan"),
#line 8596
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8597
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8599
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8600
        .doubleBattle = FALSE,
#line 8601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8603
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8604
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8606
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8607
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8609
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8610
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8612
    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 8613
        .trainerName = _("Brendan"),
#line 8614
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8615
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8617
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8618
        .doubleBattle = FALSE,
#line 8619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8621
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8622
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8624
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8625
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8627
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8628
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8630
    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 8631
        .trainerName = _("Brendan"),
#line 8632
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8633
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8635
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8636
        .doubleBattle = FALSE,
#line 8637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8639
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8640
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8642
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8643
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8645
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8646
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8648
    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 8649
        .trainerName = _("Brendan"),
#line 8650
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8651
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8653
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8654
        .doubleBattle = FALSE,
#line 8655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8657
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8658
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8660
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8661
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8663
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8664
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8666
    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 8667
        .trainerName = _("Brendan"),
#line 8668
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8669
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8671
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8672
        .doubleBattle = FALSE,
#line 8673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8675
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8676
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8678
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8679
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8681
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8682
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8684
    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 8685
        .trainerName = _("Brendan"),
#line 8686
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8687
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8689
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8690
        .doubleBattle = FALSE,
#line 8691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8693
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8694
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8696
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8697
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8699
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8700
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8702
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8703
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8705
    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8706
        .trainerName = _("Brendan"),
#line 8707
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8708
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8710
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8711
        .doubleBattle = FALSE,
#line 8712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8714
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8715
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8717
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8718
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8720
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8721
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8723
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8724
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8726
    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8727
        .trainerName = _("Brendan"),
#line 8728
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8729
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 8731
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8732
        .doubleBattle = FALSE,
#line 8733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8735
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8736
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8738
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8739
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8741
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8742
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8744
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8745
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8747
    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8748
        .trainerName = _("May"),
#line 8749
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8750
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8751
F_TRAINER_FEMALE | 
#line 8752
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8753
        .doubleBattle = FALSE,
#line 8754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8756
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8757
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8759
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8760
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8762
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8763
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8765
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8766
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8768
    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8769
        .trainerName = _("May"),
#line 8770
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8771
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8772
F_TRAINER_FEMALE | 
#line 8773
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8774
        .doubleBattle = FALSE,
#line 8775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8777
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8778
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8780
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8781
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8783
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8784
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8786
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8787
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8789
    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8790
        .trainerName = _("May"),
#line 8791
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8792
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8793
F_TRAINER_FEMALE | 
#line 8794
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8795
        .doubleBattle = FALSE,
#line 8796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8798
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8799
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 8801
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8802
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8804
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8805
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 8807
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8808
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8810
    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 8811
        .trainerName = _("May"),
#line 8812
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8813
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8814
F_TRAINER_FEMALE | 
#line 8815
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8816
        .doubleBattle = FALSE,
#line 8817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8819
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8820
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8822
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8823
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8825
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8826
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8828
    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 8829
        .trainerName = _("May"),
#line 8830
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8831
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8832
F_TRAINER_FEMALE | 
#line 8833
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8834
        .doubleBattle = FALSE,
#line 8835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8837
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8838
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8840
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8841
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8843
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8844
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8846
    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 8847
        .trainerName = _("May"),
#line 8848
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8849
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8850
F_TRAINER_FEMALE | 
#line 8851
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8852
        .doubleBattle = FALSE,
#line 8853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8855
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8856
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8858
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8859
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8861
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8862
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8864
    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 8865
        .trainerName = _("May"),
#line 8866
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8867
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8868
F_TRAINER_FEMALE | 
#line 8869
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8870
        .doubleBattle = FALSE,
#line 8871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8873
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8874
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8876
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8877
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8879
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8880
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8882
    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 8883
        .trainerName = _("May"),
#line 8884
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8885
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8886
F_TRAINER_FEMALE | 
#line 8887
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8888
        .doubleBattle = FALSE,
#line 8889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8891
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8892
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8894
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8895
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 8897
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8898
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8900
    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 8901
        .trainerName = _("May"),
#line 8902
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8903
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender = 
#line 8904
F_TRAINER_FEMALE | 
#line 8905
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8906
        .doubleBattle = FALSE,
#line 8907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8909
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8910
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8912
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 8915
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8916
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8918
    [TRAINER_ISAAC_1] =
    {
#line 8919
        .trainerName = _("Isaac"),
#line 8920
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 8921
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 8923
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8924
        .doubleBattle = FALSE,
#line 8925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8927
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8928
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8930
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8931
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8933
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8934
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8936
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8937
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8939
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8940
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 8942
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8943
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8945
    [TRAINER_DAVIS] =
    {
#line 8946
        .trainerName = _("Davis"),
#line 8947
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8948
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 8950
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8951
        .doubleBattle = FALSE,
#line 8952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8954
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8955
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 8957
    [TRAINER_MITCHELL] =
    {
#line 8958
        .trainerName = _("Mitchell"),
#line 8959
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8960
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 8962
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8963
        .doubleBattle = FALSE,
#line 8964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8966
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8967
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 8968
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 8973
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8974
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 8975
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 8980
    [TRAINER_ISAAC_2] =
    {
#line 8981
        .trainerName = _("Isaac"),
#line 8982
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 8983
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 8985
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8986
        .doubleBattle = FALSE,
#line 8987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8989
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8990
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 8992
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8993
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 8995
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8996
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 8998
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8999
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9001
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9002
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9004
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9005
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9007
    [TRAINER_ISAAC_3] =
    {
#line 9008
        .trainerName = _("Isaac"),
#line 9009
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9010
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 9012
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9013
        .doubleBattle = FALSE,
#line 9014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9016
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9017
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9019
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9020
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9022
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9023
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9025
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9026
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9028
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9029
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9031
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9032
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9034
    [TRAINER_ISAAC_4] =
    {
#line 9035
        .trainerName = _("Isaac"),
#line 9036
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9037
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 9039
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9040
        .doubleBattle = FALSE,
#line 9041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9043
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9044
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9046
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9047
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9049
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9050
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9052
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9053
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9055
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9056
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9058
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9059
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9061
    [TRAINER_ISAAC_5] =
    {
#line 9062
        .trainerName = _("Isaac"),
#line 9063
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9064
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 9066
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9067
        .doubleBattle = FALSE,
#line 9068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9070
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9071
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9073
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9074
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9076
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9077
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9079
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9080
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9082
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9083
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9085
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9086
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9088
    [TRAINER_LYDIA_1] =
    {
#line 9089
        .trainerName = _("Lydia"),
#line 9090
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9091
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9092
F_TRAINER_FEMALE | 
#line 9093
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9094
        .doubleBattle = FALSE,
#line 9095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9097
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9098
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9100
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9101
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9103
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9104
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9106
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9107
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9109
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9110
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
            {
#line 9112
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9113
            .lvl = 11,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9115
    [TRAINER_HALLE] =
    {
#line 9116
        .trainerName = _("Halle"),
#line 9117
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9118
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9119
F_TRAINER_FEMALE | 
#line 9120
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9121
        .doubleBattle = FALSE,
#line 9122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9124
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9125
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 9127
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9128
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9130
    [TRAINER_GARRISON] =
    {
#line 9131
        .trainerName = _("Garrison"),
#line 9132
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9133
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 9135
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9136
        .doubleBattle = FALSE,
#line 9137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9139
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9140
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9142
    [TRAINER_LYDIA_2] =
    {
#line 9143
        .trainerName = _("Lydia"),
#line 9144
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9145
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9146
F_TRAINER_FEMALE | 
#line 9147
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9148
        .doubleBattle = FALSE,
#line 9149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9151
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9152
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9154
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9155
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9157
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9158
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9160
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9161
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9163
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9164
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9166
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9167
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9169
    [TRAINER_LYDIA_3] =
    {
#line 9170
        .trainerName = _("Lydia"),
#line 9171
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9172
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9173
F_TRAINER_FEMALE | 
#line 9174
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9175
        .doubleBattle = FALSE,
#line 9176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9178
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9179
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9181
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9182
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9184
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9185
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9187
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9188
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9190
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9191
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 9193
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9194
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9196
    [TRAINER_LYDIA_4] =
    {
#line 9197
        .trainerName = _("Lydia"),
#line 9198
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9199
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9200
F_TRAINER_FEMALE | 
#line 9201
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9202
        .doubleBattle = FALSE,
#line 9203
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9205
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9206
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9208
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9209
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9211
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9212
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9214
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9215
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9217
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9218
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9220
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9221
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9223
    [TRAINER_LYDIA_5] =
    {
#line 9224
        .trainerName = _("Lydia"),
#line 9225
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9226
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 9227
F_TRAINER_FEMALE | 
#line 9228
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9229
        .doubleBattle = FALSE,
#line 9230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9232
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9233
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9235
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9236
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9238
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9239
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9241
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9242
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9244
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9245
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9247
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9248
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9250
    [TRAINER_JACKSON_1] =
    {
#line 9251
        .trainerName = _("Jackson"),
#line 9252
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9253
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9255
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9256
        .doubleBattle = FALSE,
#line 9257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9259
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9260
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9262
    [TRAINER_LORENZO] =
    {
#line 9263
        .trainerName = _("Lorenzo"),
#line 9264
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9265
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9267
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9268
        .doubleBattle = FALSE,
#line 9269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9271
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9272
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9274
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9275
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9277
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9278
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9280
    [TRAINER_SEBASTIAN] =
    {
#line 9281
        .trainerName = _("Sebastian"),
#line 9282
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9283
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9285
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9286
        .doubleBattle = FALSE,
#line 9287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9289
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9290
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9292
    [TRAINER_JACKSON_2] =
    {
#line 9293
        .trainerName = _("Jackson"),
#line 9294
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9295
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9297
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9298
        .doubleBattle = FALSE,
#line 9299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9301
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9302
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9304
    [TRAINER_JACKSON_3] =
    {
#line 9305
        .trainerName = _("Jackson"),
#line 9306
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9307
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9309
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9310
        .doubleBattle = FALSE,
#line 9311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9313
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9314
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9316
    [TRAINER_JACKSON_4] =
    {
#line 9317
        .trainerName = _("Jackson"),
#line 9318
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9319
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9321
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9322
        .doubleBattle = FALSE,
#line 9323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9325
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9326
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9328
    [TRAINER_JACKSON_5] =
    {
#line 9329
        .trainerName = _("Jackson"),
#line 9330
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9331
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender = 
#line 9333
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9334
        .doubleBattle = FALSE,
#line 9335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9337
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9338
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 9340
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9341
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9343
    [TRAINER_CATHERINE_1] =
    {
#line 9344
        .trainerName = _("Catherine"),
#line 9345
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9346
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9347
F_TRAINER_FEMALE | 
#line 9348
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9349
        .doubleBattle = FALSE,
#line 9350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9352
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9353
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 9355
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9356
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9358
    [TRAINER_JENNA] =
    {
#line 9359
        .trainerName = _("Jenna"),
#line 9360
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9361
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9362
F_TRAINER_FEMALE | 
#line 9363
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9364
        .doubleBattle = FALSE,
#line 9365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9367
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9370
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9371
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 9373
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9374
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9376
    [TRAINER_SOPHIA] =
    {
#line 9377
        .trainerName = _("Sophia"),
#line 9378
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9379
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9380
F_TRAINER_FEMALE | 
#line 9381
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9382
        .doubleBattle = FALSE,
#line 9383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9385
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9386
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 9388
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9389
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9391
    [TRAINER_CATHERINE_2] =
    {
#line 9392
        .trainerName = _("Catherine"),
#line 9393
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9394
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9395
F_TRAINER_FEMALE | 
#line 9396
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9397
        .doubleBattle = FALSE,
#line 9398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9400
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9401
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 9403
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9404
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9406
    [TRAINER_CATHERINE_3] =
    {
#line 9407
        .trainerName = _("Catherine"),
#line 9408
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9409
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9410
F_TRAINER_FEMALE | 
#line 9411
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9412
        .doubleBattle = FALSE,
#line 9413
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9415
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9416
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 9418
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9419
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9421
    [TRAINER_CATHERINE_4] =
    {
#line 9422
        .trainerName = _("Catherine"),
#line 9423
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9424
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9425
F_TRAINER_FEMALE | 
#line 9426
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9427
        .doubleBattle = FALSE,
#line 9428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9430
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9431
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 9433
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9434
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9436
    [TRAINER_CATHERINE_5] =
    {
#line 9437
        .trainerName = _("Catherine"),
#line 9438
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 9439
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender = 
#line 9440
F_TRAINER_FEMALE | 
#line 9441
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9442
        .doubleBattle = FALSE,
#line 9443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9445
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9446
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 9448
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9449
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9451
    [TRAINER_JULIO] =
    {
#line 9452
        .trainerName = _("Julio"),
#line 9453
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9454
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 9456
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9457
        .doubleBattle = FALSE,
#line 9458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9460
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9461
            .lvl = 21,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9463
    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 9464
        .trainerName = _("Grunt"),
#line 9465
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9466
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender = 
#line 9468
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 9469
        .doubleBattle = FALSE,
#line 9470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9472
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9473
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 9475
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9478
    [TRAINER_GRUNT_UNUSED] =
    {
#line 9479
        .trainerName = _("Grunt"),
#line 9480
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9481
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 9482
F_TRAINER_FEMALE | 
#line 9483
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 9484
        .doubleBattle = FALSE,
#line 9485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9487
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9488
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9490
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9491
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9493
    [TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 9494
        .trainerName = _("Grunt"),
#line 9495
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9496
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 9497
F_TRAINER_FEMALE | 
#line 9498
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 9499
        .doubleBattle = FALSE,
#line 9500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9502
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9503
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 9505
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9506
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9508
    [TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 9509
        .trainerName = _("Grunt"),
#line 9510
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9511
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9513
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9514
        .doubleBattle = FALSE,
#line 9515
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9517
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9518
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9520
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9521
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9523
    [TRAINER_MARC] =
    {
#line 9524
        .trainerName = _("Marc"),
#line 9525
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9526
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 9528
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9529
        .doubleBattle = FALSE,
#line 9530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9532
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9533
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 9535
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9536
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9538
    [TRAINER_BRENDEN] =
    {
#line 9539
        .trainerName = _("Brenten"),
#line 9540
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9541
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 9543
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9544
        .doubleBattle = FALSE,
#line 9545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9547
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9550
    [TRAINER_LILITH] =
    {
#line 9551
        .trainerName = _("Lilith"),
#line 9552
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9553
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 9554
F_TRAINER_FEMALE | 
#line 9555
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9556
        .doubleBattle = FALSE,
#line 9557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9559
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9560
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9562
    [TRAINER_CRISTIAN] =
    {
#line 9563
        .trainerName = _("Cristian"),
#line 9564
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9565
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 9567
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9568
        .doubleBattle = FALSE,
#line 9569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9571
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9572
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9574
    [TRAINER_SYLVIA] =
    {
#line 9575
        .trainerName = _("Sylvia"),
#line 9576
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 9577
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 9578
F_TRAINER_FEMALE | 
#line 9579
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9580
        .doubleBattle = FALSE,
#line 9581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9583
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9584
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9586
    [TRAINER_LEONARDO] =
    {
#line 9587
        .trainerName = _("Leonardo"),
#line 9588
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9589
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9591
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9592
        .doubleBattle = FALSE,
#line 9593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9595
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9596
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9598
    [TRAINER_ATHENA] =
    {
#line 9599
        .trainerName = _("Athena"),
#line 9600
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9601
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 9602
F_TRAINER_FEMALE | 
#line 9603
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9604
        .doubleBattle = FALSE,
#line 9605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9607
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9608
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 9609
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 9613
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9614
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 9615
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 9618
    [TRAINER_HARRISON] =
    {
#line 9619
        .trainerName = _("Harrison"),
#line 9620
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9621
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9623
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9624
        .doubleBattle = FALSE,
#line 9625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9627
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9628
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9630
    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 9631
        .trainerName = _("Grunt"),
#line 9632
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9633
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9635
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9636
        .doubleBattle = FALSE,
#line 9637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9639
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9640
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9642
    [TRAINER_CLARENCE] =
    {
#line 9643
        .trainerName = _("Clarence"),
#line 9644
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9645
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 9647
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9648
        .doubleBattle = FALSE,
#line 9649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9651
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9652
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9654
    [TRAINER_TERRY] =
    {
#line 9655
        .trainerName = _("Terry"),
#line 9656
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9657
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9658
F_TRAINER_FEMALE | 
#line 9659
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9660
        .doubleBattle = FALSE,
#line 9661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9663
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9664
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9666
    [TRAINER_NATE] =
    {
#line 9667
        .trainerName = _("Nate"),
#line 9668
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 9669
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 9671
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9672
        .doubleBattle = FALSE,
#line 9673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9675
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9676
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9678
    [TRAINER_KATHLEEN] =
    {
#line 9679
        .trainerName = _("Kathleen"),
#line 9680
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 9681
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender = 
#line 9682
F_TRAINER_FEMALE | 
#line 9683
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9684
        .doubleBattle = FALSE,
#line 9685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9687
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9688
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9690
    [TRAINER_CLIFFORD] =
    {
#line 9691
        .trainerName = _("Clifford"),
#line 9692
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 9693
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 9695
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9696
        .doubleBattle = FALSE,
#line 9697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9699
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9700
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9702
    [TRAINER_NICHOLAS] =
    {
#line 9703
        .trainerName = _("Nicholas"),
#line 9704
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9705
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 9707
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9708
        .doubleBattle = FALSE,
#line 9709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9711
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9712
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9714
    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 9715
        .trainerName = _("Grunt"),
#line 9716
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9717
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 9718
F_TRAINER_FEMALE | 
#line 9719
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9720
        .doubleBattle = FALSE,
#line 9721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9723
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9724
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 9726
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9727
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9729
    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 9730
        .trainerName = _("Grunt"),
#line 9731
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9732
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9734
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9735
        .doubleBattle = FALSE,
#line 9736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9738
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9739
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9741
    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 9742
        .trainerName = _("Grunt"),
#line 9743
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9744
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9746
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9747
        .doubleBattle = FALSE,
#line 9748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9750
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9751
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9753
    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 9754
        .trainerName = _("Grunt"),
#line 9755
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9756
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9758
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9759
        .doubleBattle = FALSE,
#line 9760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9762
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9763
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9765
    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 9766
        .trainerName = _("Grunt"),
#line 9767
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9768
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 9770
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9771
        .doubleBattle = FALSE,
#line 9772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9774
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9775
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9777
    [TRAINER_MACEY] =
    {
#line 9778
        .trainerName = _("Macey"),
#line 9779
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9780
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 9781
F_TRAINER_FEMALE | 
#line 9782
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9783
        .doubleBattle = FALSE,
#line 9784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9786
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9787
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9789
    [TRAINER_PAXTON] =
    {
#line 9790
        .trainerName = _("Paxton"),
#line 9791
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9792
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender = 
#line 9794
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9795
        .doubleBattle = FALSE,
#line 9796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9798
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9799
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 9801
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9802
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9804
    [TRAINER_ISABELLA] =
    {
#line 9805
        .trainerName = _("Isabella"),
#line 9806
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9807
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 9808
F_TRAINER_FEMALE | 
#line 9809
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9810
        .doubleBattle = FALSE,
#line 9811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9813
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9814
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9816
    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 9817
        .trainerName = _("Grunt"),
#line 9818
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 9819
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender = 
#line 9820
F_TRAINER_FEMALE | 
#line 9821
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 9822
        .doubleBattle = FALSE,
#line 9823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9825
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9826
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 9828
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9829
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9831
    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 9832
        .trainerName = _("Tabitha"),
#line 9833
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9834
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 9836
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9837
        .doubleBattle = FALSE,
#line 9838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9840
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9841
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 9843
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9844
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
            {
#line 9846
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9847
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 9849
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9850
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9852
    [TRAINER_JONATHAN] =
    {
#line 9853
        .trainerName = _("Jonathan"),
#line 9854
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9855
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 9857
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9858
        .doubleBattle = FALSE,
#line 9859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9861
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9862
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 9864
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9865
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9867
    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 9868
        .trainerName = _("Maxie"),
#line 9869
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9870
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 9872
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9873
        .doubleBattle = FALSE,
#line 9874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9876
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9877
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 9879
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9880
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 9882
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9883
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9885
    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 9886
        .trainerName = _("Maxie"),
#line 9887
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9888
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 9890
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9891
        .doubleBattle = FALSE,
#line 9892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9894
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9895
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 9897
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9898
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 9900
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9901
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9903
    [TRAINER_TIANA] =
    {
#line 9904
        .trainerName = _("Tiana"),
#line 9905
        .trainerClass = TRAINER_CLASS_LASS,
#line 9906
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9907
F_TRAINER_FEMALE | 
#line 9908
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9909
        .doubleBattle = FALSE,
#line 9910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9912
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9913
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
            {
#line 9915
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9916
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9918
    [TRAINER_HALEY_1] =
    {
#line 9919
        .trainerName = _("Haley"),
#line 9920
        .trainerClass = TRAINER_CLASS_LASS,
#line 9921
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9922
F_TRAINER_FEMALE | 
#line 9923
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9924
        .doubleBattle = FALSE,
#line 9925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9927
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9928
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 9930
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9931
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9933
    [TRAINER_JANICE] =
    {
#line 9934
        .trainerName = _("Janice"),
#line 9935
        .trainerClass = TRAINER_CLASS_LASS,
#line 9936
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9937
F_TRAINER_FEMALE | 
#line 9938
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9939
        .doubleBattle = FALSE,
#line 9940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9942
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9943
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9945
    [TRAINER_VIVI] =
    {
#line 9946
        .trainerName = _("Vivi"),
#line 9947
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 9948
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9949
F_TRAINER_FEMALE | 
#line 9950
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9951
        .doubleBattle = FALSE,
#line 9952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9954
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9955
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 9957
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9958
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 9960
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9961
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9963
    [TRAINER_HALEY_2] =
    {
#line 9964
        .trainerName = _("Haley"),
#line 9965
        .trainerClass = TRAINER_CLASS_LASS,
#line 9966
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9967
F_TRAINER_FEMALE | 
#line 9968
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9969
        .doubleBattle = FALSE,
#line 9970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9972
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9973
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 9975
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9976
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9978
    [TRAINER_HALEY_3] =
    {
#line 9979
        .trainerName = _("Haley"),
#line 9980
        .trainerClass = TRAINER_CLASS_LASS,
#line 9981
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9982
F_TRAINER_FEMALE | 
#line 9983
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9984
        .doubleBattle = FALSE,
#line 9985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9987
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9988
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 9990
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9991
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 9993
    [TRAINER_HALEY_4] =
    {
#line 9994
        .trainerName = _("Haley"),
#line 9995
        .trainerClass = TRAINER_CLASS_LASS,
#line 9996
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 9997
F_TRAINER_FEMALE | 
#line 9998
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9999
        .doubleBattle = FALSE,
#line 10000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10002
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10003
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 10005
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10006
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10008
    [TRAINER_HALEY_5] =
    {
#line 10009
        .trainerName = _("Haley"),
#line 10010
        .trainerClass = TRAINER_CLASS_LASS,
#line 10011
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10012
F_TRAINER_FEMALE | 
#line 10013
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10014
        .doubleBattle = FALSE,
#line 10015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10017
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10018
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 10020
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10021
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 10023
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10024
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10026
    [TRAINER_SALLY] =
    {
#line 10027
        .trainerName = _("Sally"),
#line 10028
        .trainerClass = TRAINER_CLASS_LASS,
#line 10029
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10030
F_TRAINER_FEMALE | 
#line 10031
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10032
        .doubleBattle = FALSE,
#line 10033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10035
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10036
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10038
    [TRAINER_ROBIN] =
    {
#line 10039
        .trainerName = _("Robin"),
#line 10040
        .trainerClass = TRAINER_CLASS_LASS,
#line 10041
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10042
F_TRAINER_FEMALE | 
#line 10043
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10044
        .doubleBattle = FALSE,
#line 10045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10047
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10048
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 10050
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10051
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 10053
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10054
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10056
    [TRAINER_ANDREA] =
    {
#line 10057
        .trainerName = _("Andrea"),
#line 10058
        .trainerClass = TRAINER_CLASS_LASS,
#line 10059
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10060
F_TRAINER_FEMALE | 
#line 10061
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10062
        .doubleBattle = FALSE,
#line 10063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10065
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10066
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10068
    [TRAINER_CRISSY] =
    {
#line 10069
        .trainerName = _("Crissy"),
#line 10070
        .trainerClass = TRAINER_CLASS_LASS,
#line 10071
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender = 
#line 10072
F_TRAINER_FEMALE | 
#line 10073
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10074
        .doubleBattle = FALSE,
#line 10075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10077
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10078
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 10080
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10081
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10083
    [TRAINER_RICK] =
    {
#line 10084
        .trainerName = _("Rick"),
#line 10085
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10086
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10088
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10089
        .doubleBattle = FALSE,
#line 10090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10092
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10093
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 10095
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10096
            .lvl = 7,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10098
    [TRAINER_LYLE] =
    {
#line 10099
        .trainerName = _("Lyle"),
#line 10100
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10101
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10103
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10104
        .doubleBattle = FALSE,
#line 10105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10107
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10108
            .lvl = 3,
            .nature = NATURE_HARDY,
            },
            {
#line 10110
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10111
            .lvl = 3,
            .nature = NATURE_HARDY,
            },
            {
#line 10113
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10114
            .lvl = 3,
            .nature = NATURE_HARDY,
            },
            {
#line 10116
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10117
            .lvl = 3,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10119
    [TRAINER_JOSE] =
    {
#line 10120
        .trainerName = _("Jose"),
#line 10121
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10122
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10124
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10125
        .doubleBattle = FALSE,
#line 10126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10128
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10129
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 10131
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10132
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10134
    [TRAINER_DOUG] =
    {
#line 10135
        .trainerName = _("Doug"),
#line 10136
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10137
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10139
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10140
        .doubleBattle = FALSE,
#line 10141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10143
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 10146
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10147
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10149
    [TRAINER_GREG] =
    {
#line 10150
        .trainerName = _("Greg"),
#line 10151
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10152
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10154
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10155
        .doubleBattle = FALSE,
#line 10156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10158
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10159
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 10161
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10162
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10164
    [TRAINER_KENT] =
    {
#line 10165
        .trainerName = _("Kent"),
#line 10166
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10167
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10169
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10170
        .doubleBattle = FALSE,
#line 10171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10173
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10174
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10176
    [TRAINER_JAMES_1] =
    {
#line 10177
        .trainerName = _("James"),
#line 10178
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10179
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10181
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10182
        .doubleBattle = FALSE,
#line 10183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10185
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10186
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
            {
#line 10188
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10189
            .lvl = 6,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10191
    [TRAINER_JAMES_2] =
    {
#line 10192
        .trainerName = _("James"),
#line 10193
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10194
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10196
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10197
        .doubleBattle = FALSE,
#line 10198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10200
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10201
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10203
    [TRAINER_JAMES_3] =
    {
#line 10204
        .trainerName = _("James"),
#line 10205
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10206
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10208
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10209
        .doubleBattle = FALSE,
#line 10210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10212
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10213
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 10215
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10216
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10218
    [TRAINER_JAMES_4] =
    {
#line 10219
        .trainerName = _("James"),
#line 10220
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10221
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10223
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10224
        .doubleBattle = FALSE,
#line 10225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10227
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10228
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10230
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10231
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10233
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10234
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10236
    [TRAINER_JAMES_5] =
    {
#line 10237
        .trainerName = _("James"),
#line 10238
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 10239
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender = 
#line 10241
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10242
        .doubleBattle = FALSE,
#line 10243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10245
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10246
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10248
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10249
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10251
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10252
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10254
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10255
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10257
    [TRAINER_BRICE] =
    {
#line 10258
        .trainerName = _("Brice"),
#line 10259
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10260
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10262
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10263
        .doubleBattle = FALSE,
#line 10264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10266
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10267
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 10269
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10270
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10272
    [TRAINER_TRENT_1] =
    {
#line 10273
        .trainerName = _("Trent"),
#line 10274
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10275
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10277
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10278
        .doubleBattle = FALSE,
#line 10279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10281
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10282
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 10284
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10285
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 10287
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10288
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10290
    [TRAINER_LENNY] =
    {
#line 10291
        .trainerName = _("Lenny"),
#line 10292
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10293
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10295
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10296
        .doubleBattle = FALSE,
#line 10297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10299
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10300
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 10302
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10303
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10305
    [TRAINER_LUCAS_1] =
    {
#line 10306
        .trainerName = _("Lucas"),
#line 10307
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10308
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10310
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10311
        .doubleBattle = FALSE,
#line 10312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10314
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10315
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 10317
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10318
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10320
    [TRAINER_ALAN] =
    {
#line 10321
        .trainerName = _("Alan"),
#line 10322
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10323
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10325
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10326
        .doubleBattle = FALSE,
#line 10327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10329
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10330
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 10332
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10333
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 10335
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10336
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10338
    [TRAINER_CLARK] =
    {
#line 10339
        .trainerName = _("Clark"),
#line 10340
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10341
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10343
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10344
        .doubleBattle = FALSE,
#line 10345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10347
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10348
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10350
    [TRAINER_ERIC] =
    {
#line 10351
        .trainerName = _("Eric"),
#line 10352
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10353
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10355
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10356
        .doubleBattle = FALSE,
#line 10357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10359
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10360
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
            {
#line 10362
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10363
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10365
    [TRAINER_LUCAS_2] =
    {
#line 10366
        .trainerName = _("Lucas"),
#line 10367
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10368
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10370
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10371
        .doubleBattle = FALSE,
#line 10372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10374
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10375
            .lvl = 9,
            .nature = NATURE_HARDY,
            .moves = {
#line 10376
                MOVE_SPLASH,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 10379
    [TRAINER_MIKE_1] =
    {
#line 10380
        .trainerName = _("Mike"),
#line 10381
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10382
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10384
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10385
        .doubleBattle = FALSE,
#line 10386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10388
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10389
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 10390
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 10393
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10394
            .lvl = 10,
            .nature = NATURE_HARDY,
            .moves = {
#line 10395
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 10398
    [TRAINER_MIKE_2] =
    {
#line 10399
        .trainerName = _("Mike"),
#line 10400
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10401
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10403
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10404
        .doubleBattle = FALSE,
#line 10405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10407
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10408
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 10410
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10411
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
            {
#line 10413
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10414
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10416
    [TRAINER_TRENT_2] =
    {
#line 10417
        .trainerName = _("Trent"),
#line 10418
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10419
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10421
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10422
        .doubleBattle = FALSE,
#line 10423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10425
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10426
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 10428
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10429
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 10431
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10432
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 10434
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10435
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10437
    [TRAINER_TRENT_3] =
    {
#line 10438
        .trainerName = _("Trent"),
#line 10439
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10440
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10442
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10443
        .doubleBattle = FALSE,
#line 10444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10446
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10447
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10449
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10450
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10452
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10453
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10455
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10456
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10458
    [TRAINER_TRENT_4] =
    {
#line 10459
        .trainerName = _("Trent"),
#line 10460
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10461
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10463
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10464
        .doubleBattle = FALSE,
#line 10465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10467
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10468
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10470
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10471
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10473
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10474
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10476
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10477
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10479
    [TRAINER_TRENT_5] =
    {
#line 10480
        .trainerName = _("Trent"),
#line 10481
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10482
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 10484
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10485
        .doubleBattle = FALSE,
#line 10486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10488
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10489
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10491
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10492
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10494
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10495
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10497
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10498
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10500
    [TRAINER_DEZ_AND_LUKE] =
    {
#line 10501
        .trainerName = _("Dez & Luke"),
#line 10502
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10503
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10505
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10506
        .doubleBattle = TRUE,
#line 10507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10509
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10510
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10512
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10513
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10515
    [TRAINER_LEA_AND_JED] =
    {
#line 10516
        .trainerName = _("Lea & Jed"),
#line 10517
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10518
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10520
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10521
        .doubleBattle = TRUE,
#line 10522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10524
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10525
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 10527
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10528
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10530
    [TRAINER_KIRA_AND_DAN_1] =
    {
#line 10531
        .trainerName = _("Kira & Dan"),
#line 10532
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10533
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10535
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10536
        .doubleBattle = TRUE,
#line 10537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10539
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10540
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 10542
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10543
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10545
    [TRAINER_KIRA_AND_DAN_2] =
    {
#line 10546
        .trainerName = _("Kira & Dan"),
#line 10547
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10548
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10550
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10551
        .doubleBattle = TRUE,
#line 10552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10554
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10555
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10557
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10558
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10560
    [TRAINER_KIRA_AND_DAN_3] =
    {
#line 10561
        .trainerName = _("Kira & Dan"),
#line 10562
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10563
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10565
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10566
        .doubleBattle = TRUE,
#line 10567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10569
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10570
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 10572
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10573
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10575
    [TRAINER_KIRA_AND_DAN_4] =
    {
#line 10576
        .trainerName = _("Kira & Dan"),
#line 10577
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10578
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10580
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10581
        .doubleBattle = TRUE,
#line 10582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10584
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10585
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 10587
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10588
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10590
    [TRAINER_KIRA_AND_DAN_5] =
    {
#line 10591
        .trainerName = _("Kira & Dan"),
#line 10592
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 10593
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 10595
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10596
        .doubleBattle = TRUE,
#line 10597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10599
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10600
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 10602
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10603
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10605
    [TRAINER_JOHANNA] =
    {
#line 10606
        .trainerName = _("Johanna"),
#line 10607
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 10608
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 10609
F_TRAINER_FEMALE | 
#line 10610
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10611
        .doubleBattle = FALSE,
#line 10612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10614
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10615
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10617
    [TRAINER_GERALD] =
    {
#line 10618
        .trainerName = _("Gerald"),
#line 10619
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10620
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 10622
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10623
        .doubleBattle = FALSE,
#line 10624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10626
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10627
            .lvl = 23,
            .nature = NATURE_HARDY,
            .moves = {
#line 10628
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 10633
    [TRAINER_VIVIAN] =
    {
#line 10634
        .trainerName = _("Vivian"),
#line 10635
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10636
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 10637
F_TRAINER_FEMALE | 
#line 10638
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10639
        .doubleBattle = FALSE,
#line 10640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10642
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10643
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 10644
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10649
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10650
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 10651
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 10656
    [TRAINER_DANIELLE] =
    {
#line 10657
        .trainerName = _("Danielle"),
#line 10658
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10659
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 10660
F_TRAINER_FEMALE | 
#line 10661
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10662
        .doubleBattle = FALSE,
#line 10663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10665
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10666
            .lvl = 23,
            .nature = NATURE_HARDY,
            .moves = {
#line 10667
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 10672
    [TRAINER_HIDEO] =
    {
#line 10673
        .trainerName = _("Hideo"),
#line 10674
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10675
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 10677
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10678
        .doubleBattle = FALSE,
#line 10679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10681
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10682
            .lvl = 25,
            .nature = NATURE_HARDY,
            .moves = {
#line 10683
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 10688
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10689
            .lvl = 25,
            .nature = NATURE_HARDY,
            .moves = {
#line 10690
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 10695
    [TRAINER_KEIGO] =
    {
#line 10696
        .trainerName = _("Keigo"),
#line 10697
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10698
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 10700
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10701
        .doubleBattle = FALSE,
#line 10702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10704
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10705
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 10706
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 10711
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10712
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 10713
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 10718
    [TRAINER_RILEY] =
    {
#line 10719
        .trainerName = _("Riley"),
#line 10720
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10721
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 10723
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10724
        .doubleBattle = FALSE,
#line 10725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10727
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10728
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 10729
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 10734
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10735
            .lvl = 28,
            .nature = NATURE_HARDY,
            .moves = {
#line 10736
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 10741
    [TRAINER_FLINT] =
    {
#line 10742
        .trainerName = _("Flint"),
#line 10743
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10744
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 10746
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10747
        .doubleBattle = FALSE,
#line 10748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10750
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10751
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 10753
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10754
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10756
    [TRAINER_ASHLEY] =
    {
#line 10757
        .trainerName = _("Ashley"),
#line 10758
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10759
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 10760
F_TRAINER_FEMALE | 
#line 10761
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10762
        .doubleBattle = FALSE,
#line 10763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10765
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10766
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10768
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10769
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 10771
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10772
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10774
    [TRAINER_WALLY_MAUVILLE] =
    {
#line 10775
        .trainerName = _("Wally"),
#line 10776
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10777
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10779
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10780
        .doubleBattle = FALSE,
#line 10781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10783
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10784
            .lvl = 16,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10786
    [TRAINER_WALLY_VR_2] =
    {
#line 10787
        .trainerName = _("Wally"),
#line 10788
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10789
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10791
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10792
        .doubleBattle = FALSE,
#line 10793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10795
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10796
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 10797
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10802
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10803
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 10804
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 10809
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10810
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 10811
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 10816
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10817
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 10818
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 10823
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10824
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 10825
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10830
    [TRAINER_WALLY_VR_3] =
    {
#line 10831
        .trainerName = _("Wally"),
#line 10832
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10833
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10835
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10836
        .doubleBattle = FALSE,
#line 10837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10839
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10840
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 10841
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10846
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10847
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 10848
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 10853
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10854
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 10855
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 10860
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10861
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 10862
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 10867
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10868
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 10869
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10874
    [TRAINER_WALLY_VR_4] =
    {
#line 10875
        .trainerName = _("Wally"),
#line 10876
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10877
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10879
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10880
        .doubleBattle = FALSE,
#line 10881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10883
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10884
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 10885
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10890
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10891
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 10892
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 10897
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10898
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 10899
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 10904
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10905
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 10906
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 10911
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10912
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 10913
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10918
    [TRAINER_WALLY_VR_5] =
    {
#line 10919
        .trainerName = _("Wally"),
#line 10920
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10921
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender = 
#line 10923
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10924
        .doubleBattle = FALSE,
#line 10925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10927
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 10929
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10934
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10935
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 10936
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 10941
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10942
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 10943
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 10948
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10949
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 10950
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 10955
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10956
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 10957
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10962
    [TRAINER_JONAH] =
    {
#line 10963
        .trainerName = _("Jonah"),
#line 10964
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10965
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10967
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10968
        .doubleBattle = FALSE,
#line 10969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10971
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10972
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 10974
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10975
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10977
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10978
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10980
    [TRAINER_HENRY] =
    {
#line 10981
        .trainerName = _("Henry"),
#line 10982
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10983
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 10985
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10986
        .doubleBattle = FALSE,
#line 10987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10989
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10990
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 10992
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10993
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 10995
    [TRAINER_ROGER] =
    {
#line 10996
        .trainerName = _("Roger"),
#line 10997
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10998
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11000
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11001
        .doubleBattle = FALSE,
#line 11002
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11004
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11005
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
            {
#line 11007
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11008
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 11010
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11011
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11013
    [TRAINER_ALEXA] =
    {
#line 11014
        .trainerName = _("Alexa"),
#line 11015
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11016
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11017
F_TRAINER_FEMALE | 
#line 11018
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11019
        .doubleBattle = FALSE,
#line 11020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11022
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11023
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 11025
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11026
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11028
    [TRAINER_RUBEN] =
    {
#line 11029
        .trainerName = _("Ruben"),
#line 11030
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11031
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 11033
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11034
        .doubleBattle = FALSE,
#line 11035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11037
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11038
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 11040
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11041
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11043
    [TRAINER_KOJI_1] =
    {
#line 11044
        .trainerName = _("Koji"),
#line 11045
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 11046
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 11048
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11049
        .doubleBattle = FALSE,
#line 11050
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11052
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11053
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11055
    [TRAINER_WAYNE] =
    {
#line 11056
        .trainerName = _("Wayne"),
#line 11057
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11058
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11060
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11061
        .doubleBattle = FALSE,
#line 11062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11064
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11065
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 11067
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11068
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 11070
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11071
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11073
    [TRAINER_AIDAN] =
    {
#line 11074
        .trainerName = _("Aidan"),
#line 11075
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11076
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11078
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11079
        .doubleBattle = FALSE,
#line 11080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11082
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11083
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 11085
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11086
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11088
    [TRAINER_REED] =
    {
#line 11089
        .trainerName = _("Reed"),
#line 11090
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 11091
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 11093
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11094
        .doubleBattle = FALSE,
#line 11095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11097
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11098
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 11100
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11101
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11103
    [TRAINER_TISHA] =
    {
#line 11104
        .trainerName = _("Tisha"),
#line 11105
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 11106
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 11107
F_TRAINER_FEMALE | 
#line 11108
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11109
        .doubleBattle = FALSE,
#line 11110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11112
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11113
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11115
    [TRAINER_TORI_AND_TIA] =
    {
#line 11116
        .trainerName = _("Tori & Tia"),
#line 11117
        .trainerClass = TRAINER_CLASS_TWINS,
#line 11118
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender = 
#line 11120
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 11121
        .doubleBattle = TRUE,
#line 11122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11124
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11125
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
            {
#line 11127
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11128
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11130
    [TRAINER_KIM_AND_IRIS] =
    {
#line 11131
        .trainerName = _("Kim & Iris"),
#line 11132
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 11133
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 11135
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 11136
        .doubleBattle = TRUE,
#line 11137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11139
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11140
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 11141
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11146
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11147
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 11148
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11153
    [TRAINER_TYRA_AND_IVY] =
    {
#line 11154
        .trainerName = _("Tyra & Ivy"),
#line 11155
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 11156
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender = 
#line 11158
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 11159
        .doubleBattle = TRUE,
#line 11160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11162
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11163
            .lvl = 18,
            .nature = NATURE_HARDY,
            .moves = {
#line 11164
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 11169
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11170
            .lvl = 20,
            .nature = NATURE_HARDY,
            .moves = {
#line 11171
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 11176
    [TRAINER_MEL_AND_PAUL] =
    {
#line 11177
        .trainerName = _("Mel & Paul"),
#line 11178
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 11179
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender = 
#line 11181
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11182
        .doubleBattle = TRUE,
#line 11183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11185
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11186
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 11187
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 11192
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11193
            .lvl = 27,
            .nature = NATURE_HARDY,
            .moves = {
#line 11194
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 11199
    [TRAINER_JOHN_AND_JAY_1] =
    {
#line 11200
        .trainerName = _("John & Jay"),
#line 11201
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11202
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11204
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11205
        .doubleBattle = TRUE,
#line 11206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11208
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11209
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 11210
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11215
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11216
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 11217
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11222
    [TRAINER_JOHN_AND_JAY_2] =
    {
#line 11223
        .trainerName = _("John & Jay"),
#line 11224
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11225
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11227
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11228
        .doubleBattle = TRUE,
#line 11229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11231
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11232
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 11233
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11238
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11239
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 11240
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11245
    [TRAINER_JOHN_AND_JAY_3] =
    {
#line 11246
        .trainerName = _("John & Jay"),
#line 11247
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11248
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11250
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11251
        .doubleBattle = TRUE,
#line 11252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11254
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11255
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 11256
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11261
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11262
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 11263
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11268
    [TRAINER_JOHN_AND_JAY_4] =
    {
#line 11269
        .trainerName = _("John & Jay"),
#line 11270
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11271
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11273
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11274
        .doubleBattle = TRUE,
#line 11275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11277
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11278
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 11279
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11284
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11285
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 11286
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11291
    [TRAINER_JOHN_AND_JAY_5] =
    {
#line 11292
        .trainerName = _("John & Jay"),
#line 11293
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 11294
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender = 
#line 11296
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11297
        .doubleBattle = TRUE,
#line 11298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11300
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11301
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 11302
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 11307
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11308
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 11309
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 11314
    [TRAINER_RELI_AND_IAN] =
    {
#line 11315
        .trainerName = _("Reli & Ian"),
#line 11316
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11317
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11319
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11320
        .doubleBattle = TRUE,
#line 11321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11323
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11324
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 11326
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11327
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11329
    [TRAINER_LILA_AND_ROY_1] =
    {
#line 11330
        .trainerName = _("Lila & Roy"),
#line 11331
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11332
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11334
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11335
        .doubleBattle = TRUE,
#line 11336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11338
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11339
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 11341
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11342
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11344
    [TRAINER_LILA_AND_ROY_2] =
    {
#line 11345
        .trainerName = _("Lila & Roy"),
#line 11346
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11347
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11349
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11350
        .doubleBattle = TRUE,
#line 11351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11353
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11354
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 11356
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11357
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11359
    [TRAINER_LILA_AND_ROY_3] =
    {
#line 11360
        .trainerName = _("Lila & Roy"),
#line 11361
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11362
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11364
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11365
        .doubleBattle = TRUE,
#line 11366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11368
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11369
            .lvl = 45,
            .nature = NATURE_HARDY,
            },
            {
#line 11371
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11372
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11374
    [TRAINER_LILA_AND_ROY_4] =
    {
#line 11375
        .trainerName = _("Lila & Roy"),
#line 11376
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11377
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11379
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11380
        .doubleBattle = TRUE,
#line 11381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11383
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11384
            .lvl = 48,
            .nature = NATURE_HARDY,
            },
            {
#line 11386
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11387
            .lvl = 46,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11389
    [TRAINER_LILA_AND_ROY_5] =
    {
#line 11390
        .trainerName = _("Lila & Roy"),
#line 11391
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11392
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11394
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11395
        .doubleBattle = TRUE,
#line 11396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11398
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11399
            .lvl = 51,
            .nature = NATURE_HARDY,
            },
            {
#line 11401
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11402
            .lvl = 49,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11404
    [TRAINER_LISA_AND_RAY] =
    {
#line 11405
        .trainerName = _("Lisa & Ray"),
#line 11406
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 11407
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender = 
#line 11409
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11410
        .doubleBattle = TRUE,
#line 11411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11413
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11414
            .lvl = 27,
            .nature = NATURE_HARDY,
            },
            {
#line 11416
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11417
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11419
    [TRAINER_CHRIS] =
    {
#line 11420
        .trainerName = _("Chris"),
#line 11421
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11422
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11424
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11425
        .doubleBattle = FALSE,
#line 11426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11428
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11429
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 11431
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11432
            .lvl = 20,
            .nature = NATURE_HARDY,
            },
            {
#line 11434
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11435
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 11437
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11438
            .lvl = 23,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11440
    [TRAINER_DAWSON] =
    {
#line 11441
        .trainerName = _("Dawson"),
#line 11442
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 11443
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender = 
#line 11445
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11446
        .doubleBattle = FALSE,
#line 11447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11449
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11449
            .heldItem = ITEM_NUGGET,
#line 11450
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 11452
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11453
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11455
    [TRAINER_SARAH] =
    {
#line 11456
        .trainerName = _("Sarah"),
#line 11457
        .trainerClass = TRAINER_CLASS_LADY,
#line 11458
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender = 
#line 11459
F_TRAINER_FEMALE | 
#line 11460
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11461
        .doubleBattle = FALSE,
#line 11462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11464
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11465
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 11467
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11467
            .heldItem = ITEM_NUGGET,
#line 11468
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11470
    [TRAINER_DARIAN] =
    {
#line 11471
        .trainerName = _("Darian"),
#line 11472
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11473
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11475
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11476
        .doubleBattle = FALSE,
#line 11477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11479
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11480
            .lvl = 9,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11482
    [TRAINER_HAILEY] =
    {
#line 11483
        .trainerName = _("Hailey"),
#line 11484
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 11485
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender = 
#line 11486
F_TRAINER_FEMALE | 
#line 11487
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11488
        .doubleBattle = FALSE,
#line 11489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11491
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11492
            .lvl = 13,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11494
    [TRAINER_CHANDLER] =
    {
#line 11495
        .trainerName = _("Chandler"),
#line 11496
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 11497
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender = 
#line 11499
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11500
        .doubleBattle = FALSE,
#line 11501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11503
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11504
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
            {
#line 11506
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11507
            .lvl = 12,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11509
    [TRAINER_KALEB] =
    {
#line 11510
        .trainerName = _("Kaleb"),
#line 11511
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 11512
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender = 
#line 11514
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 11515
        .doubleBattle = FALSE,
#line 11516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11518
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11518
            .heldItem = ITEM_ORAN_BERRY,
#line 11519
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 11521
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11521
            .heldItem = ITEM_ORAN_BERRY,
#line 11522
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11524
    [TRAINER_JOSEPH] =
    {
#line 11525
        .trainerName = _("Joseph"),
#line 11526
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 11527
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 11529
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11530
        .doubleBattle = FALSE,
#line 11531
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11533
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11534
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 11536
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11537
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11539
    [TRAINER_ALYSSA] =
    {
#line 11540
        .trainerName = _("Alyssa"),
#line 11541
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11542
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 11543
F_TRAINER_FEMALE | 
#line 11544
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11545
        .doubleBattle = FALSE,
#line 11546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11548
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11549
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11551
    [TRAINER_MARCOS] =
    {
#line 11552
        .trainerName = _("Marcos"),
#line 11553
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 11554
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 11556
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11557
        .doubleBattle = FALSE,
#line 11558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11560
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11561
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11563
    [TRAINER_RHETT] =
    {
#line 11564
        .trainerName = _("Rhett"),
#line 11565
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 11566
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 11568
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11569
        .doubleBattle = FALSE,
#line 11570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11572
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11573
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11575
    [TRAINER_TYRON] =
    {
#line 11576
        .trainerName = _("Tyron"),
#line 11577
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 11578
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 11580
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11581
        .doubleBattle = FALSE,
#line 11582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11584
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11585
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11587
    [TRAINER_CELINA] =
    {
#line 11588
        .trainerName = _("Celina"),
#line 11589
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 11590
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 11591
F_TRAINER_FEMALE | 
#line 11592
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11593
        .doubleBattle = FALSE,
#line 11594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11596
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11597
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11599
    [TRAINER_BIANCA] =
    {
#line 11600
        .trainerName = _("Bianca"),
#line 11601
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11602
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11603
F_TRAINER_FEMALE | 
#line 11604
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11605
        .doubleBattle = FALSE,
#line 11606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11608
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11609
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11611
    [TRAINER_HAYDEN] =
    {
#line 11612
        .trainerName = _("Hayden"),
#line 11613
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 11614
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 11616
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11617
        .doubleBattle = FALSE,
#line 11618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11620
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11621
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11623
    [TRAINER_SOPHIE] =
    {
#line 11624
        .trainerName = _("Sophie"),
#line 11625
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11626
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11627
F_TRAINER_FEMALE | 
#line 11628
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11629
        .doubleBattle = FALSE,
#line 11630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11632
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11633
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 11635
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11636
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11638
    [TRAINER_COBY] =
    {
#line 11639
        .trainerName = _("Coby"),
#line 11640
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11641
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 11643
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11644
        .doubleBattle = FALSE,
#line 11645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11647
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11648
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
            {
#line 11650
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11651
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11653
    [TRAINER_LAWRENCE] =
    {
#line 11654
        .trainerName = _("Lawrence"),
#line 11655
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 11656
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 11658
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11659
        .doubleBattle = FALSE,
#line 11660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11662
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11663
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 11665
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11666
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11668
    [TRAINER_WYATT] =
    {
#line 11669
        .trainerName = _("Wyatt"),
#line 11670
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 11671
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender = 
#line 11673
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11674
        .doubleBattle = FALSE,
#line 11675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11677
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11678
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 11680
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11681
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11683
    [TRAINER_ANGELINA] =
    {
#line 11684
        .trainerName = _("Angelina"),
#line 11685
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11686
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11687
F_TRAINER_FEMALE | 
#line 11688
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11689
        .doubleBattle = FALSE,
#line 11690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11692
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11693
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 11695
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11696
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11698
    [TRAINER_KAI] =
    {
#line 11699
        .trainerName = _("Kai"),
#line 11700
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 11701
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender = 
#line 11703
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11704
        .doubleBattle = FALSE,
#line 11705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11707
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11708
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11710
    [TRAINER_CHARLOTTE] =
    {
#line 11711
        .trainerName = _("Charlotte"),
#line 11712
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 11713
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 11714
F_TRAINER_FEMALE | 
#line 11715
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 11716
        .doubleBattle = FALSE,
#line 11717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11719
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11720
            .lvl = 19,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11722
    [TRAINER_DEANDRE] =
    {
#line 11723
        .trainerName = _("Deandre"),
#line 11724
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 11725
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 11727
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11728
        .doubleBattle = FALSE,
#line 11729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11731
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11732
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 11734
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11735
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
            {
#line 11737
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11738
            .lvl = 14,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11740
    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 11741
        .trainerName = _("Grunt"),
#line 11742
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11743
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11745
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11746
        .doubleBattle = FALSE,
#line 11747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11749
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11750
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11752
    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 11753
        .trainerName = _("Grunt"),
#line 11754
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11755
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11757
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11758
        .doubleBattle = FALSE,
#line 11759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11761
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11762
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11764
    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 11765
        .trainerName = _("Grunt"),
#line 11766
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11767
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11769
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11770
        .doubleBattle = FALSE,
#line 11771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11773
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11774
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11776
    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 11777
        .trainerName = _("Grunt"),
#line 11778
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11779
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11781
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11782
        .doubleBattle = FALSE,
#line 11783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11785
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11786
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 11788
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11789
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11791
    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 11792
        .trainerName = _("Grunt"),
#line 11793
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11794
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11796
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11797
        .doubleBattle = FALSE,
#line 11798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11800
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11801
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 11803
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11804
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11806
    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 11807
        .trainerName = _("Grunt"),
#line 11808
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11809
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11811
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11812
        .doubleBattle = FALSE,
#line 11813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11815
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11816
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11818
    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 11819
        .trainerName = _("Grunt"),
#line 11820
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11821
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11823
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11824
        .doubleBattle = FALSE,
#line 11825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11827
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11828
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11830
    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 11831
        .trainerName = _("Grunt"),
#line 11832
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11833
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11835
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11836
        .doubleBattle = FALSE,
#line 11837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11839
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11840
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11842
    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 11843
        .trainerName = _("Grunt"),
#line 11844
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11845
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11847
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11848
        .doubleBattle = FALSE,
#line 11849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11851
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11852
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11854
    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 11855
        .trainerName = _("Grunt"),
#line 11856
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11857
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11859
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11860
        .doubleBattle = FALSE,
#line 11861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11863
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11864
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11866
    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 11867
        .trainerName = _("Grunt"),
#line 11868
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11869
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11871
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11872
        .doubleBattle = FALSE,
#line 11873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11875
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11876
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11878
    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 11879
        .trainerName = _("Grunt"),
#line 11880
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11881
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11883
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11884
        .doubleBattle = FALSE,
#line 11885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11887
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11888
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11890
    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 11891
        .trainerName = _("Grunt"),
#line 11892
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11893
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender = 
#line 11895
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11896
        .doubleBattle = FALSE,
#line 11897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11899
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11900
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11902
    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 11903
        .trainerName = _("Grunt"),
#line 11904
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11905
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11906
F_TRAINER_FEMALE | 
#line 11907
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11908
        .doubleBattle = FALSE,
#line 11909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11911
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11912
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11914
    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 11915
        .trainerName = _("Grunt"),
#line 11916
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11917
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11918
F_TRAINER_FEMALE | 
#line 11919
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11920
        .doubleBattle = FALSE,
#line 11921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11923
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11924
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11926
    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 11927
        .trainerName = _("Grunt"),
#line 11928
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 11929
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender = 
#line 11930
F_TRAINER_FEMALE | 
#line 11931
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11932
        .doubleBattle = FALSE,
#line 11933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11935
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11936
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11938
    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 11939
        .trainerName = _("Tabitha"),
#line 11940
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 11941
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender = 
#line 11943
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11944
        .doubleBattle = FALSE,
#line 11945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 11947
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11948
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 11950
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11951
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 11953
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11954
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 11956
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11957
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11959
    [TRAINER_DARCY] =
    {
#line 11960
        .trainerName = _("Darcy"),
#line 11961
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11962
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 11963
F_TRAINER_FEMALE | 
#line 11964
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11965
        .doubleBattle = FALSE,
#line 11966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11968
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11969
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 11971
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11972
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11974
    [TRAINER_MAXIE_MOSSDEEP] =
    {
#line 11975
        .trainerName = _("Maxie"),
#line 11976
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 11977
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender = 
#line 11979
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 11980
        .doubleBattle = FALSE,
#line 11981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11983
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11984
            .lvl = 42,
            .nature = NATURE_HARDY,
            },
            {
#line 11986
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11987
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 11989
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11990
            .lvl = 44,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 11992
    [TRAINER_PETE] =
    {
#line 11993
        .trainerName = _("Pete"),
#line 11994
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 11995
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender = 
#line 11997
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11998
        .doubleBattle = FALSE,
#line 11999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12001
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12002
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12004
    [TRAINER_ISABELLE] =
    {
#line 12005
        .trainerName = _("Isabelle"),
#line 12006
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 12007
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender = 
#line 12008
F_TRAINER_FEMALE | 
#line 12009
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 12010
        .doubleBattle = FALSE,
#line 12011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12013
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12014
            .lvl = 15,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12016
    [TRAINER_ANDRES_1] =
    {
#line 12017
        .trainerName = _("Andres"),
#line 12018
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 12019
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 12021
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12022
        .doubleBattle = FALSE,
#line 12023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12025
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12026
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12028
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12029
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12031
    [TRAINER_JOSUE] =
    {
#line 12032
        .trainerName = _("Josue"),
#line 12033
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 12034
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 12036
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12037
        .doubleBattle = FALSE,
#line 12038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12040
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12041
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12043
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12044
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12046
    [TRAINER_CAMRON] =
    {
#line 12047
        .trainerName = _("Camron"),
#line 12048
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 12049
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 12051
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 12052
        .doubleBattle = FALSE,
#line 12053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12055
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12056
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12058
    [TRAINER_CORY_1] =
    {
#line 12059
        .trainerName = _("Cory"),
#line 12060
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 12061
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 12063
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12064
        .doubleBattle = FALSE,
#line 12065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12067
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12068
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 12070
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12071
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 12073
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12074
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12076
    [TRAINER_CAROLINA] =
    {
#line 12077
        .trainerName = _("Carolina"),
#line 12078
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12079
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 12080
F_TRAINER_FEMALE | 
#line 12081
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12082
        .doubleBattle = FALSE,
#line 12083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12085
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12086
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 12088
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12089
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
            {
#line 12091
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12092
            .lvl = 24,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12094
    [TRAINER_ELIJAH] =
    {
#line 12095
        .trainerName = _("Elijah"),
#line 12096
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 12097
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 12099
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12100
        .doubleBattle = FALSE,
#line 12101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12103
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12104
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12106
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12107
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12109
    [TRAINER_CELIA] =
    {
#line 12110
        .trainerName = _("Celia"),
#line 12111
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 12112
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender = 
#line 12113
F_TRAINER_FEMALE | 
#line 12114
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 12115
        .doubleBattle = FALSE,
#line 12116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12118
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12119
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 12121
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12122
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12124
    [TRAINER_BRYAN] =
    {
#line 12125
        .trainerName = _("Bryan"),
#line 12126
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 12127
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 12129
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12130
        .doubleBattle = FALSE,
#line 12131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12133
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12134
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 12136
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12137
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12139
    [TRAINER_BRANDEN] =
    {
#line 12140
        .trainerName = _("Branden"),
#line 12141
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 12142
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender = 
#line 12144
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12145
        .doubleBattle = FALSE,
#line 12146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12148
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12149
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
            {
#line 12151
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12152
            .lvl = 22,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12154
    [TRAINER_BRYANT] =
    {
#line 12155
        .trainerName = _("Bryant"),
#line 12156
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 12157
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 12159
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12160
        .doubleBattle = FALSE,
#line 12161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12163
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12164
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 12166
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12167
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12169
    [TRAINER_SHAYLA] =
    {
#line 12170
        .trainerName = _("Shayla"),
#line 12171
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 12172
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender = 
#line 12173
F_TRAINER_FEMALE | 
#line 12174
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12175
        .doubleBattle = FALSE,
#line 12176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12178
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12179
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 12181
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12182
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12184
    [TRAINER_KYRA] =
    {
#line 12185
        .trainerName = _("Kyra"),
#line 12186
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 12187
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 12188
F_TRAINER_FEMALE | 
#line 12189
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12190
        .doubleBattle = FALSE,
#line 12191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12193
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12194
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 12196
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12197
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12199
    [TRAINER_JAIDEN] =
    {
#line 12200
        .trainerName = _("Jaiden"),
#line 12201
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 12202
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender = 
#line 12204
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 12205
        .doubleBattle = FALSE,
#line 12206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12208
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12209
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 12211
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12212
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12214
    [TRAINER_ALIX] =
    {
#line 12215
        .trainerName = _("Alix"),
#line 12216
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12217
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 12218
F_TRAINER_FEMALE | 
#line 12219
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12220
        .doubleBattle = FALSE,
#line 12221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12223
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12224
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 12226
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12227
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12229
    [TRAINER_HELENE] =
    {
#line 12230
        .trainerName = _("Helene"),
#line 12231
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 12232
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 12233
F_TRAINER_FEMALE | 
#line 12234
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12235
        .doubleBattle = FALSE,
#line 12236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12238
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12239
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 12241
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12242
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12244
    [TRAINER_MARLENE] =
    {
#line 12245
        .trainerName = _("Marlene"),
#line 12246
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12247
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 12248
F_TRAINER_FEMALE | 
#line 12249
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12250
        .doubleBattle = FALSE,
#line 12251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12253
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12254
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
            {
#line 12256
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12257
            .lvl = 18,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12259
    [TRAINER_DEVAN] =
    {
#line 12260
        .trainerName = _("Devan"),
#line 12261
        .trainerClass = TRAINER_CLASS_HIKER,
#line 12262
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 12264
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12265
        .doubleBattle = FALSE,
#line 12266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12268
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12269
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 12271
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12272
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12274
    [TRAINER_JOHNSON] =
    {
#line 12275
        .trainerName = _("Johnson"),
#line 12276
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 12277
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender = 
#line 12279
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12280
        .doubleBattle = FALSE,
#line 12281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12283
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12284
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
            {
#line 12286
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12287
            .lvl = 8,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12289
    [TRAINER_MELINA] =
    {
#line 12290
        .trainerName = _("Melina"),
#line 12291
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 12292
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender = 
#line 12293
F_TRAINER_FEMALE | 
#line 12294
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12295
        .doubleBattle = FALSE,
#line 12296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12298
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12299
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12301
    [TRAINER_BRANDI] =
    {
#line 12302
        .trainerName = _("Brandi"),
#line 12303
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12304
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 12305
F_TRAINER_FEMALE | 
#line 12306
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12307
        .doubleBattle = FALSE,
#line 12308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12310
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12311
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12313
    [TRAINER_AISHA] =
    {
#line 12314
        .trainerName = _("Aisha"),
#line 12315
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 12316
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 12317
F_TRAINER_FEMALE | 
#line 12318
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12319
        .doubleBattle = FALSE,
#line 12320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12322
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12323
            .lvl = 17,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12325
    [TRAINER_MAKAYLA] =
    {
#line 12326
        .trainerName = _("Makayla"),
#line 12327
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 12328
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender = 
#line 12329
F_TRAINER_FEMALE | 
#line 12330
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12331
        .doubleBattle = FALSE,
#line 12332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12334
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12335
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 12337
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12338
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12340
    [TRAINER_FABIAN] =
    {
#line 12341
        .trainerName = _("Fabian"),
#line 12342
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 12343
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 12345
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12346
        .doubleBattle = FALSE,
#line 12347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12349
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12350
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12352
    [TRAINER_DAYTON] =
    {
#line 12353
        .trainerName = _("Dayton"),
#line 12354
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 12355
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender = 
#line 12357
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 12358
        .doubleBattle = FALSE,
#line 12359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12361
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12362
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12364
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12365
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12367
    [TRAINER_RACHEL] =
    {
#line 12368
        .trainerName = _("Rachel"),
#line 12369
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 12370
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender = 
#line 12371
F_TRAINER_FEMALE | 
#line 12372
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12373
        .doubleBattle = FALSE,
#line 12374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12376
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12377
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12379
    [TRAINER_LEONEL] =
    {
#line 12380
        .trainerName = _("Leonel"),
#line 12381
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12382
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender = 
#line 12384
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12385
        .doubleBattle = FALSE,
#line 12386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12388
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12389
            .lvl = 30,
            .nature = NATURE_HARDY,
            .moves = {
#line 12390
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 12394
    [TRAINER_CALLIE] =
    {
#line 12395
        .trainerName = _("Callie"),
#line 12396
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 12397
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender = 
#line 12398
F_TRAINER_FEMALE | 
#line 12399
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12400
        .doubleBattle = FALSE,
#line 12401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12403
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12404
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 12406
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12407
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12409
    [TRAINER_CALE] =
    {
#line 12410
        .trainerName = _("Cale"),
#line 12411
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 12412
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 12414
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 12415
        .doubleBattle = FALSE,
#line 12416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12418
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12419
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 12421
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12422
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12424
    [TRAINER_MYLES] =
    {
#line 12425
        .trainerName = _("Myles"),
#line 12426
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 12427
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender = 
#line 12429
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12430
        .doubleBattle = FALSE,
#line 12431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12433
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12434
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12436
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12437
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12439
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12440
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12442
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12443
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12445
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12446
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12448
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12449
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12451
    [TRAINER_PAT] =
    {
#line 12452
        .trainerName = _("Pat"),
#line 12453
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 12454
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 12455
F_TRAINER_FEMALE | 
#line 12456
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12457
        .doubleBattle = FALSE,
#line 12458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12460
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12461
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12463
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12464
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12466
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12467
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12469
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12470
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12472
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12473
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
            {
#line 12475
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12476
            .lvl = 25,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12478
    [TRAINER_CRISTIN_1] =
    {
#line 12479
        .trainerName = _("Cristin"),
#line 12480
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 12481
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 12482
F_TRAINER_FEMALE | 
#line 12483
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 12484
        .doubleBattle = FALSE,
#line 12485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12487
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12488
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
            {
#line 12490
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12491
            .lvl = 29,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 12493
    [TRAINER_ROXANNE_2] =
    {
#line 12494
        .trainerName = _("Roxanne"),
#line 12495
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12496
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 12497
F_TRAINER_FEMALE | 
#line 12498
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12499
        .doubleBattle = TRUE,
#line 12500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12502
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12503
            .lvl = 32,
            .nature = NATURE_HARDY,
            .moves = {
#line 12504
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 12509
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12509
            .heldItem = ITEM_SITRUS_BERRY,
#line 12510
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 12511
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12516
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12517
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 12518
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12523
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12523
            .heldItem = ITEM_SITRUS_BERRY,
#line 12524
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 12525
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12530
    [TRAINER_ROXANNE_3] =
    {
#line 12531
        .trainerName = _("Roxanne"),
#line 12532
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12533
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 12534
F_TRAINER_FEMALE | 
#line 12535
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12536
        .doubleBattle = TRUE,
#line 12537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12539
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12540
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 12541
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 12546
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12547
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 12548
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_MAGNITUDE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 12553
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12553
            .heldItem = ITEM_SITRUS_BERRY,
#line 12554
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12555
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12560
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12561
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12562
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12567
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12567
            .heldItem = ITEM_SITRUS_BERRY,
#line 12568
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 12569
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12574
    [TRAINER_ROXANNE_4] =
    {
#line 12575
        .trainerName = _("Roxanne"),
#line 12576
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12577
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 12578
F_TRAINER_FEMALE | 
#line 12579
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12580
        .doubleBattle = TRUE,
#line 12581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12583
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12584
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 12585
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 12590
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12591
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 12592
                MOVE_PROTECT,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 12597
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12597
            .heldItem = ITEM_SITRUS_BERRY,
#line 12598
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 12599
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12604
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12605
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 12606
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12611
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12611
            .heldItem = ITEM_SITRUS_BERRY,
#line 12612
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12613
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12618
    [TRAINER_ROXANNE_5] =
    {
#line 12619
        .trainerName = _("Roxanne"),
#line 12620
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12621
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender = 
#line 12622
F_TRAINER_FEMALE | 
#line 12623
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12624
        .doubleBattle = TRUE,
#line 12625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12627
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12628
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12629
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
            },
            },
            {
#line 12634
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12635
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12636
                MOVE_FOCUS_PUNCH,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 12641
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12642
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12643
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 12648
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12648
            .heldItem = ITEM_SITRUS_BERRY,
#line 12649
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12650
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12655
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12656
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12657
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 12662
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12662
            .heldItem = ITEM_SITRUS_BERRY,
#line 12663
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 12664
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 12669
    [TRAINER_BRAWLY_2] =
    {
#line 12670
        .trainerName = _("Brawly"),
#line 12671
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12672
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 12674
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12675
        .doubleBattle = TRUE,
#line 12676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12678
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12678
            .heldItem = ITEM_SITRUS_BERRY,
#line 12679
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 12680
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 12685
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12686
            .lvl = 33,
            .nature = NATURE_HARDY,
            .moves = {
#line 12687
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 12692
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12693
            .lvl = 35,
            .nature = NATURE_HARDY,
            .moves = {
#line 12694
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 12699
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12699
            .heldItem = ITEM_SITRUS_BERRY,
#line 12700
            .lvl = 37,
            .nature = NATURE_HARDY,
            .moves = {
#line 12701
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 12706
    [TRAINER_BRAWLY_3] =
    {
#line 12707
        .trainerName = _("Brawly"),
#line 12708
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12709
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 12711
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12712
        .doubleBattle = TRUE,
#line 12713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12715
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12715
            .heldItem = ITEM_SITRUS_BERRY,
#line 12716
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 12717
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 12722
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12723
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 12724
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 12729
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12730
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12731
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 12736
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12736
            .heldItem = ITEM_SITRUS_BERRY,
#line 12737
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 12738
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 12743
    [TRAINER_BRAWLY_4] =
    {
#line 12744
        .trainerName = _("Brawly"),
#line 12745
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12746
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 12748
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12749
        .doubleBattle = TRUE,
#line 12750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12752
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12753
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12754
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 12759
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12759
            .heldItem = ITEM_SITRUS_BERRY,
#line 12760
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 12761
                MOVE_KARATE_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 12766
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12767
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 12768
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 12773
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12774
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 12775
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 12780
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12780
            .heldItem = ITEM_SITRUS_BERRY,
#line 12781
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 12782
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 12787
    [TRAINER_BRAWLY_5] =
    {
#line 12788
        .trainerName = _("Brawly"),
#line 12789
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12790
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender = 
#line 12792
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12793
        .doubleBattle = TRUE,
#line 12794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12796
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12797
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 12798
                MOVE_MEGA_KICK,
                MOVE_FOCUS_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 12803
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12804
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 12805
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 12810
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12810
            .heldItem = ITEM_SITRUS_BERRY,
#line 12811
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 12812
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 12817
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12818
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 12819
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 12824
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12825
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12826
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 12831
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12831
            .heldItem = ITEM_SITRUS_BERRY,
#line 12832
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 12833
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 12838
    [TRAINER_WATTSON_2] =
    {
#line 12839
        .trainerName = _("Wattson"),
#line 12840
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12841
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 12843
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12844
        .doubleBattle = TRUE,
#line 12845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 12847
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12848
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 12849
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12854
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12855
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 12856
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12861
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12861
            .heldItem = ITEM_SITRUS_BERRY,
#line 12862
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 12863
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12868
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12868
            .heldItem = ITEM_SITRUS_BERRY,
#line 12869
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 12870
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 12875
    [TRAINER_WATTSON_3] =
    {
#line 12876
        .trainerName = _("Wattson"),
#line 12877
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12878
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 12880
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12881
        .doubleBattle = TRUE,
#line 12882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12884
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12885
            .lvl = 39,
            .nature = NATURE_HARDY,
            .moves = {
#line 12886
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 12891
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12892
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 12893
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12898
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12899
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 12900
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12905
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12905
            .heldItem = ITEM_SITRUS_BERRY,
#line 12906
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 12907
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12912
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12912
            .heldItem = ITEM_SITRUS_BERRY,
#line 12913
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 12914
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 12919
    [TRAINER_WATTSON_4] =
    {
#line 12920
        .trainerName = _("Wattson"),
#line 12921
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12922
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 12924
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12925
        .doubleBattle = TRUE,
#line 12926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 12928
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12929
            .lvl = 44,
            .nature = NATURE_HARDY,
            .moves = {
#line 12930
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 12935
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12936
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 12937
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12942
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12943
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 12944
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12949
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12949
            .heldItem = ITEM_SITRUS_BERRY,
#line 12950
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 12951
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 12956
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12956
            .heldItem = ITEM_SITRUS_BERRY,
#line 12957
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12958
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 12963
    [TRAINER_WATTSON_5] =
    {
#line 12964
        .trainerName = _("Wattson"),
#line 12965
        .trainerClass = TRAINER_CLASS_LEADER,
#line 12966
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender = 
#line 12968
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12969
        .doubleBattle = TRUE,
#line 12970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 12972
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12973
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 12974
                MOVE_SWIFT,
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12979
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12980
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 12981
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 12986
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12987
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 12988
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 12993
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12994
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 12995
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 13000
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13000
            .heldItem = ITEM_SITRUS_BERRY,
#line 13001
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13002
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 13007
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13007
            .heldItem = ITEM_SITRUS_BERRY,
#line 13008
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13009
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 13014
    [TRAINER_FLANNERY_2] =
    {
#line 13015
        .trainerName = _("Flannery"),
#line 13016
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13017
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 13018
F_TRAINER_FEMALE | 
#line 13019
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13020
        .doubleBattle = TRUE,
#line 13021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 13023
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13023
            .heldItem = ITEM_WHITE_HERB,
#line 13024
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 13025
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13030
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13031
            .lvl = 36,
            .nature = NATURE_HARDY,
            .moves = {
#line 13032
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 13037
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13037
            .heldItem = ITEM_WHITE_HERB,
#line 13038
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 13039
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 13044
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13044
            .heldItem = ITEM_WHITE_HERB,
#line 13045
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 13046
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 13051
    [TRAINER_FLANNERY_3] =
    {
#line 13052
        .trainerName = _("Flannery"),
#line 13053
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13054
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 13055
F_TRAINER_FEMALE | 
#line 13056
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13057
        .doubleBattle = TRUE,
#line 13058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13060
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13061
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 13062
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_ROAR,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 13067
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13067
            .heldItem = ITEM_WHITE_HERB,
#line 13068
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13069
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13074
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13075
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 13076
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 13081
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13081
            .heldItem = ITEM_WHITE_HERB,
#line 13082
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13083
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 13088
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13088
            .heldItem = ITEM_WHITE_HERB,
#line 13089
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13090
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 13095
    [TRAINER_FLANNERY_4] =
    {
#line 13096
        .trainerName = _("Flannery"),
#line 13097
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13098
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 13099
F_TRAINER_FEMALE | 
#line 13100
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13101
        .doubleBattle = TRUE,
#line 13102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13104
            .species = SPECIES_HOUNDOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13105
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13106
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 13111
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13112
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13113
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 13118
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13118
            .heldItem = ITEM_WHITE_HERB,
#line 13119
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13120
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13125
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13126
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13127
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 13132
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13132
            .heldItem = ITEM_WHITE_HERB,
#line 13133
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13134
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 13139
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13139
            .heldItem = ITEM_WHITE_HERB,
#line 13140
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13141
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 13146
    [TRAINER_FLANNERY_5] =
    {
#line 13147
        .trainerName = _("Flannery"),
#line 13148
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13149
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender = 
#line 13150
F_TRAINER_FEMALE | 
#line 13151
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13152
        .doubleBattle = TRUE,
#line 13153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13155
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13156
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13157
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 13162
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13162
            .heldItem = ITEM_WHITE_HERB,
#line 13163
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13164
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 13169
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13170
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13171
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 13176
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13177
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13178
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 13183
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13183
            .heldItem = ITEM_WHITE_HERB,
#line 13184
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13185
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 13190
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13190
            .heldItem = ITEM_WHITE_HERB,
#line 13191
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13192
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 13197
    [TRAINER_NORMAN_2] =
    {
#line 13198
        .trainerName = _("Norman"),
#line 13199
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13200
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 13202
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13203
        .doubleBattle = FALSE,
#line 13204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 13206
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13207
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 13208
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 13213
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13213
            .heldItem = ITEM_SITRUS_BERRY,
#line 13214
            .lvl = 42,
            .nature = NATURE_HARDY,
            .moves = {
#line 13215
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 13220
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13221
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13222
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13227
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13227
            .heldItem = ITEM_SITRUS_BERRY,
#line 13228
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13229
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 13234
    [TRAINER_NORMAN_3] =
    {
#line 13235
        .trainerName = _("Norman"),
#line 13236
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13237
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 13239
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13240
        .doubleBattle = FALSE,
#line 13241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13243
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13243
            .heldItem = ITEM_SITRUS_BERRY,
#line 13244
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 13245
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 13250
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13251
            .lvl = 47,
            .nature = NATURE_HARDY,
            .moves = {
#line 13252
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 13257
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13258
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13259
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 13264
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13265
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13266
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13271
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13271
            .heldItem = ITEM_SITRUS_BERRY,
#line 13272
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13273
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 13278
    [TRAINER_NORMAN_4] =
    {
#line 13279
        .trainerName = _("Norman"),
#line 13280
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13281
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 13283
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13284
        .doubleBattle = FALSE,
#line 13285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13287
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13287
            .heldItem = ITEM_SITRUS_BERRY,
#line 13288
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 13289
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 13294
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13295
            .lvl = 52,
            .nature = NATURE_HARDY,
            .moves = {
#line 13296
                MOVE_LIGHT_SCREEN,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 13301
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13302
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13303
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 13308
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13309
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13310
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13315
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13315
            .heldItem = ITEM_SITRUS_BERRY,
#line 13316
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13317
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 13322
    [TRAINER_NORMAN_5] =
    {
#line 13323
        .trainerName = _("Norman"),
#line 13324
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13325
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender = 
#line 13327
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13328
        .doubleBattle = FALSE,
#line 13329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13331
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13331
            .heldItem = ITEM_SITRUS_BERRY,
#line 13332
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 13333
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 13338
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13339
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 13340
                MOVE_PROTECT,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 13345
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13346
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13347
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 13352
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13353
            .lvl = 57,
            .nature = NATURE_HARDY,
            .moves = {
#line 13354
                MOVE_TAKE_DOWN,
                MOVE_PROTECT,
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13359
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13360
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13361
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 13366
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13366
            .heldItem = ITEM_SITRUS_BERRY,
#line 13367
            .lvl = 60,
            .nature = NATURE_HARDY,
            .moves = {
#line 13368
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 13373
    [TRAINER_WINONA_2] =
    {
#line 13374
        .trainerName = _("Winona"),
#line 13375
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13376
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 13377
F_TRAINER_FEMALE | 
#line 13378
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13379
        .doubleBattle = TRUE,
#line 13380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13382
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13382
            .heldItem = ITEM_SITRUS_BERRY,
#line 13383
            .lvl = 40,
            .nature = NATURE_HARDY,
            .moves = {
#line 13384
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13389
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13390
            .lvl = 38,
            .nature = NATURE_HARDY,
            .moves = {
#line 13391
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13396
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13397
            .lvl = 41,
            .nature = NATURE_HARDY,
            .moves = {
#line 13398
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13403
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13404
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13405
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13410
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13410
            .heldItem = ITEM_CHESTO_BERRY,
#line 13411
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13412
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 13417
    [TRAINER_WINONA_3] =
    {
#line 13418
        .trainerName = _("Winona"),
#line 13419
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13420
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 13421
F_TRAINER_FEMALE | 
#line 13422
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13423
        .doubleBattle = TRUE,
#line 13424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13426
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13427
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13428
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 13433
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13434
            .lvl = 43,
            .nature = NATURE_HARDY,
            .moves = {
#line 13435
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13440
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13440
            .heldItem = ITEM_SITRUS_BERRY,
#line 13441
            .lvl = 45,
            .nature = NATURE_HARDY,
            .moves = {
#line 13442
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13447
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13448
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13449
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13454
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13455
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13456
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13461
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13461
            .heldItem = ITEM_CHESTO_BERRY,
#line 13462
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13463
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 13468
    [TRAINER_WINONA_4] =
    {
#line 13469
        .trainerName = _("Winona"),
#line 13470
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13471
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 13472
F_TRAINER_FEMALE | 
#line 13473
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13474
        .doubleBattle = TRUE,
#line 13475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13477
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13478
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13479
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 13484
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13485
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 13486
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13491
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13491
            .heldItem = ITEM_SITRUS_BERRY,
#line 13492
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13493
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13498
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13499
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13500
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13505
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13506
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13507
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13512
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13512
            .heldItem = ITEM_CHESTO_BERRY,
#line 13513
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13514
                MOVE_AERIAL_ACE,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 13519
    [TRAINER_WINONA_5] =
    {
#line 13520
        .trainerName = _("Winona"),
#line 13521
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13522
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender = 
#line 13523
F_TRAINER_FEMALE | 
#line 13524
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13525
        .doubleBattle = TRUE,
#line 13526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13528
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13529
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13530
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 13535
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13536
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 13537
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 13542
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13543
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13544
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13549
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13549
            .heldItem = ITEM_SITRUS_BERRY,
#line 13550
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13551
                MOVE_HYPER_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13556
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13557
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13558
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 13563
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13563
            .heldItem = ITEM_CHESTO_BERRY,
#line 13564
            .lvl = 60,
            .nature = NATURE_HARDY,
            .moves = {
#line 13565
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 13570
    [TRAINER_TATE_AND_LIZA_2] =
    {
#line 13571
        .trainerName = _("Tate&Liza"),
#line 13572
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13573
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 13575
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13576
        .doubleBattle = TRUE,
#line 13577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13579
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13580
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13581
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 13586
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13587
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 13588
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13593
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13593
            .heldItem = ITEM_CHESTO_BERRY,
#line 13594
            .lvl = 49,
            .nature = NATURE_HARDY,
            .moves = {
#line 13595
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13600
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13600
            .heldItem = ITEM_CHESTO_BERRY,
#line 13601
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13602
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13607
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13607
            .heldItem = ITEM_SITRUS_BERRY,
#line 13608
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13609
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 13614
    [TRAINER_TATE_AND_LIZA_3] =
    {
#line 13615
        .trainerName = _("Tate&Liza"),
#line 13616
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13617
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 13619
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13620
        .doubleBattle = TRUE,
#line 13621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13623
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13624
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13625
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 13630
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13631
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13632
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 13637
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13638
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 13639
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13644
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13644
            .heldItem = ITEM_CHESTO_BERRY,
#line 13645
            .lvl = 54,
            .nature = NATURE_HARDY,
            .moves = {
#line 13646
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13651
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13651
            .heldItem = ITEM_CHESTO_BERRY,
#line 13652
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13653
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13658
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13658
            .heldItem = ITEM_SITRUS_BERRY,
#line 13659
            .lvl = 55,
            .nature = NATURE_HARDY,
            .moves = {
#line 13660
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 13665
    [TRAINER_TATE_AND_LIZA_4] =
    {
#line 13666
        .trainerName = _("Tate&Liza"),
#line 13667
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13668
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 13670
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13671
        .doubleBattle = TRUE,
#line 13672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13674
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13675
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13676
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 13681
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13682
            .lvl = 59,
            .nature = NATURE_HARDY,
            .moves = {
#line 13683
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13688
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13689
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13690
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 13695
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13695
            .heldItem = ITEM_CHESTO_BERRY,
#line 13696
            .lvl = 59,
            .nature = NATURE_HARDY,
            .moves = {
#line 13697
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13702
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13702
            .heldItem = ITEM_CHESTO_BERRY,
#line 13703
            .lvl = 60,
            .nature = NATURE_HARDY,
            .moves = {
#line 13704
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13709
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13709
            .heldItem = ITEM_SITRUS_BERRY,
#line 13710
            .lvl = 60,
            .nature = NATURE_HARDY,
            .moves = {
#line 13711
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 13716
    [TRAINER_TATE_AND_LIZA_5] =
    {
#line 13717
        .trainerName = _("Tate&Liza"),
#line 13718
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13719
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender = 
#line 13721
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 13722
        .doubleBattle = TRUE,
#line 13723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13725
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13726
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13727
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 13732
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13733
            .lvl = 64,
            .nature = NATURE_HARDY,
            .moves = {
#line 13734
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 13739
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13740
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13741
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 13746
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13746
            .heldItem = ITEM_CHESTO_BERRY,
#line 13747
            .lvl = 64,
            .nature = NATURE_HARDY,
            .moves = {
#line 13748
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13753
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13753
            .heldItem = ITEM_CHESTO_BERRY,
#line 13754
            .lvl = 65,
            .nature = NATURE_HARDY,
            .moves = {
#line 13755
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 13760
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13760
            .heldItem = ITEM_SITRUS_BERRY,
#line 13761
            .lvl = 65,
            .nature = NATURE_HARDY,
            .moves = {
#line 13762
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 13767
    [TRAINER_JUAN_2] =
    {
#line 13768
        .trainerName = _("Juan"),
#line 13769
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13770
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 13772
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13773
        .doubleBattle = TRUE,
#line 13774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13776
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13777
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13778
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 13783
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13784
            .lvl = 46,
            .nature = NATURE_HARDY,
            .moves = {
#line 13785
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 13790
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13791
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13792
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13797
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13797
            .heldItem = ITEM_CHESTO_BERRY,
#line 13798
            .lvl = 48,
            .nature = NATURE_HARDY,
            .moves = {
#line 13799
                MOVE_REST,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13804
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13804
            .heldItem = ITEM_CHESTO_BERRY,
#line 13805
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13806
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 13811
    [TRAINER_JUAN_3] =
    {
#line 13812
        .trainerName = _("Juan"),
#line 13813
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13814
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 13816
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13817
        .doubleBattle = TRUE,
#line 13818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 13820
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13821
            .lvl = 50,
            .nature = NATURE_HARDY,
            .moves = {
#line 13822
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 13827
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13828
            .lvl = 51,
            .nature = NATURE_HARDY,
            .moves = {
#line 13829
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 13834
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13835
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13836
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13841
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13841
            .heldItem = ITEM_CHESTO_BERRY,
#line 13842
            .lvl = 53,
            .nature = NATURE_HARDY,
            .moves = {
#line 13843
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13848
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13848
            .heldItem = ITEM_CHESTO_BERRY,
#line 13849
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 13850
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 13855
    [TRAINER_JUAN_4] =
    {
#line 13856
        .trainerName = _("Juan"),
#line 13857
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13858
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 13860
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13861
        .doubleBattle = TRUE,
#line 13862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13864
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13865
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 13866
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 13871
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13872
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13873
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 13878
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13879
            .lvl = 56,
            .nature = NATURE_HARDY,
            .moves = {
#line 13880
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 13885
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13886
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13887
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 13892
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13892
            .heldItem = ITEM_CHESTO_BERRY,
#line 13893
            .lvl = 58,
            .nature = NATURE_HARDY,
            .moves = {
#line 13894
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13899
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13899
            .heldItem = ITEM_CHESTO_BERRY,
#line 13900
            .lvl = 61,
            .nature = NATURE_HARDY,
            .moves = {
#line 13901
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 13906
    [TRAINER_JUAN_5] =
    {
#line 13907
        .trainerName = _("Juan"),
#line 13908
        .trainerClass = TRAINER_CLASS_LEADER,
#line 13909
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender = 
#line 13911
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13912
        .doubleBattle = TRUE,
#line 13913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13915
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13916
            .lvl = 61,
            .nature = NATURE_HARDY,
            .moves = {
#line 13917
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 13922
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13923
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13924
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 13929
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13930
            .lvl = 61,
            .nature = NATURE_HARDY,
            .moves = {
#line 13931
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 13936
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13937
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13938
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 13943
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13943
            .heldItem = ITEM_CHESTO_BERRY,
#line 13944
            .lvl = 63,
            .nature = NATURE_HARDY,
            .moves = {
#line 13945
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 13950
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13950
            .heldItem = ITEM_CHESTO_BERRY,
#line 13951
            .lvl = 66,
            .nature = NATURE_HARDY,
            .moves = {
#line 13952
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 13957
    [TRAINER_ANGELO] =
    {
#line 13958
        .trainerName = _("Angelo"),
#line 13959
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 13960
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender = 
#line 13962
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 13963
        .doubleBattle = FALSE,
#line 13964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 13966
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13967
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 13968
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 13972
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13973
            .lvl = 17,
            .nature = NATURE_HARDY,
            .moves = {
#line 13974
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 13978
    [TRAINER_DARIUS] =
    {
#line 13979
        .trainerName = _("Darius"),
#line 13980
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 13981
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender = 
#line 13983
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 13984
        .doubleBattle = FALSE,
#line 13985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 13987
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 13988
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 13990
    [TRAINER_STEVEN] =
    {
#line 13991
        .trainerName = _("Steven"),
#line 13992
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 13993
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender = 
#line 13995
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 13996
        .doubleBattle = FALSE,
#line 13997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 13999
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14000
            .lvl = 77,
            .nature = NATURE_HARDY,
            .moves = {
#line 14001
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 14006
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14007
            .lvl = 75,
            .nature = NATURE_HARDY,
            .moves = {
#line 14008
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 14013
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14014
            .lvl = 76,
            .nature = NATURE_HARDY,
            .moves = {
#line 14015
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 14020
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14021
            .lvl = 76,
            .nature = NATURE_HARDY,
            .moves = {
#line 14022
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 14027
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14028
            .lvl = 76,
            .nature = NATURE_HARDY,
            .moves = {
#line 14029
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 14034
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14034
            .heldItem = ITEM_SITRUS_BERRY,
#line 14035
            .lvl = 78,
            .nature = NATURE_HARDY,
            .moves = {
#line 14036
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 14041
    [TRAINER_ANABEL] =
    {
#line 14042
        .trainerName = _("Anabel"),
#line 14043
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 14044
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender = 
#line 14045
F_TRAINER_FEMALE | 
#line 14046
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14047
        .doubleBattle = FALSE,
#line 14048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14050
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14051
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14053
    [TRAINER_TUCKER] =
    {
#line 14054
        .trainerName = _("Tucker"),
#line 14055
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 14056
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender = 
#line 14058
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14059
        .doubleBattle = FALSE,
#line 14060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14062
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14063
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14065
    [TRAINER_SPENSER] =
    {
#line 14066
        .trainerName = _("Spenser"),
#line 14067
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 14068
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender = 
#line 14070
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14071
        .doubleBattle = FALSE,
#line 14072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14074
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14075
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14077
    [TRAINER_GRETA] =
    {
#line 14078
        .trainerName = _("Greta"),
#line 14079
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 14080
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender = 
#line 14081
F_TRAINER_FEMALE | 
#line 14082
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14083
        .doubleBattle = FALSE,
#line 14084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14086
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14087
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14089
    [TRAINER_NOLAND] =
    {
#line 14090
        .trainerName = _("Noland"),
#line 14091
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 14092
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender = 
#line 14094
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14095
        .doubleBattle = FALSE,
#line 14096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14098
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14099
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14101
    [TRAINER_LUCY] =
    {
#line 14102
        .trainerName = _("Lucy"),
#line 14103
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 14104
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender = 
#line 14105
F_TRAINER_FEMALE | 
#line 14106
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14107
        .doubleBattle = FALSE,
#line 14108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14110
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14111
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14113
    [TRAINER_BRANDON] =
    {
#line 14114
        .trainerName = _("Brandon"),
#line 14115
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 14116
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender = 
#line 14118
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14119
        .doubleBattle = FALSE,
#line 14120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14122
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14123
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14125
    [TRAINER_ANDRES_2] =
    {
#line 14126
        .trainerName = _("Andres"),
#line 14127
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 14128
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 14130
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14131
        .doubleBattle = FALSE,
#line 14132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14134
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14135
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14137
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14138
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14140
    [TRAINER_ANDRES_3] =
    {
#line 14141
        .trainerName = _("Andres"),
#line 14142
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 14143
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 14145
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14146
        .doubleBattle = FALSE,
#line 14147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14149
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14150
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14152
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14153
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14155
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14156
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14158
    [TRAINER_ANDRES_4] =
    {
#line 14159
        .trainerName = _("Andres"),
#line 14160
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 14161
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 14163
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14164
        .doubleBattle = FALSE,
#line 14165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14167
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14168
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14170
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14171
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14173
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14174
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14176
    [TRAINER_ANDRES_5] =
    {
#line 14177
        .trainerName = _("Andres"),
#line 14178
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 14179
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender = 
#line 14181
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14182
        .doubleBattle = FALSE,
#line 14183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14185
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14186
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14188
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14189
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14191
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14192
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14194
    [TRAINER_CORY_2] =
    {
#line 14195
        .trainerName = _("Cory"),
#line 14196
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 14197
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 14199
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14200
        .doubleBattle = FALSE,
#line 14201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14203
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14204
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 14206
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14207
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 14209
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14210
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14212
    [TRAINER_CORY_3] =
    {
#line 14213
        .trainerName = _("Cory"),
#line 14214
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 14215
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 14217
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14218
        .doubleBattle = FALSE,
#line 14219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14221
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14222
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 14224
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14225
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
            {
#line 14227
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14228
            .lvl = 32,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14230
    [TRAINER_CORY_4] =
    {
#line 14231
        .trainerName = _("Cory"),
#line 14232
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 14233
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 14235
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14236
        .doubleBattle = FALSE,
#line 14237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14239
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14240
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 14242
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14243
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 14245
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14246
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14248
    [TRAINER_CORY_5] =
    {
#line 14249
        .trainerName = _("Cory"),
#line 14250
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 14251
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender = 
#line 14253
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14254
        .doubleBattle = FALSE,
#line 14255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14257
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14258
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 14260
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14261
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 14263
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14264
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14266
    [TRAINER_PABLO_2] =
    {
#line 14267
        .trainerName = _("Pablo"),
#line 14268
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 14269
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 14271
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 14272
        .doubleBattle = FALSE,
#line 14273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14275
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14276
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14278
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14279
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14281
    [TRAINER_PABLO_3] =
    {
#line 14282
        .trainerName = _("Pablo"),
#line 14283
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 14284
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 14286
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 14287
        .doubleBattle = FALSE,
#line 14288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14290
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14291
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14293
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14294
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14296
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14297
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14299
    [TRAINER_PABLO_4] =
    {
#line 14300
        .trainerName = _("Pablo"),
#line 14301
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 14302
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 14304
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 14305
        .doubleBattle = FALSE,
#line 14306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14308
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14309
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14311
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14312
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14314
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14315
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14317
    [TRAINER_PABLO_5] =
    {
#line 14318
        .trainerName = _("Pablo"),
#line 14319
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 14320
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender = 
#line 14322
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 14323
        .doubleBattle = FALSE,
#line 14324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14326
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14327
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 14329
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14330
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 14332
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14333
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14335
    [TRAINER_KOJI_2] =
    {
#line 14336
        .trainerName = _("Koji"),
#line 14337
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 14338
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 14340
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14341
        .doubleBattle = FALSE,
#line 14342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14344
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14345
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14347
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14348
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14350
    [TRAINER_KOJI_3] =
    {
#line 14351
        .trainerName = _("Koji"),
#line 14352
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 14353
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 14355
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14356
        .doubleBattle = FALSE,
#line 14357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14359
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14360
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14362
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14363
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14365
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14366
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14368
    [TRAINER_KOJI_4] =
    {
#line 14369
        .trainerName = _("Koji"),
#line 14370
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 14371
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 14373
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14374
        .doubleBattle = FALSE,
#line 14375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14377
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14378
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14380
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14381
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14383
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14384
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14386
    [TRAINER_KOJI_5] =
    {
#line 14387
        .trainerName = _("Koji"),
#line 14388
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 14389
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender = 
#line 14391
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14392
        .doubleBattle = FALSE,
#line 14393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14395
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14396
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 14398
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14399
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
            {
#line 14401
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14402
            .lvl = 43,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14404
    [TRAINER_CRISTIN_2] =
    {
#line 14405
        .trainerName = _("Cristin"),
#line 14406
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 14407
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 14408
F_TRAINER_FEMALE | 
#line 14409
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 14410
        .doubleBattle = FALSE,
#line 14411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14413
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14414
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14416
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14417
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14419
    [TRAINER_CRISTIN_3] =
    {
#line 14420
        .trainerName = _("Cristin"),
#line 14421
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 14422
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 14423
F_TRAINER_FEMALE | 
#line 14424
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 14425
        .doubleBattle = FALSE,
#line 14426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14428
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14429
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14431
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14432
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14434
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14435
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14437
    [TRAINER_CRISTIN_4] =
    {
#line 14438
        .trainerName = _("Cristin"),
#line 14439
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 14440
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 14441
F_TRAINER_FEMALE | 
#line 14442
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 14443
        .doubleBattle = FALSE,
#line 14444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14446
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14447
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14449
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14450
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14452
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14453
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14455
    [TRAINER_CRISTIN_5] =
    {
#line 14456
        .trainerName = _("Cristin"),
#line 14457
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 14458
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender = 
#line 14459
F_TRAINER_FEMALE | 
#line 14460
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 14461
        .doubleBattle = FALSE,
#line 14462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14464
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14465
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14467
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14468
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14470
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14471
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14473
    [TRAINER_FERNANDO_2] =
    {
#line 14474
        .trainerName = _("Fernando"),
#line 14475
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 14476
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 14478
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14479
        .doubleBattle = FALSE,
#line 14480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14482
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14483
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14485
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14486
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14488
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14489
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14491
    [TRAINER_FERNANDO_3] =
    {
#line 14492
        .trainerName = _("Fernando"),
#line 14493
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 14494
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 14496
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14497
        .doubleBattle = FALSE,
#line 14498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14500
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14501
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14503
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14504
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14506
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14507
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14509
    [TRAINER_FERNANDO_4] =
    {
#line 14510
        .trainerName = _("Fernando"),
#line 14511
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 14512
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 14514
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14515
        .doubleBattle = FALSE,
#line 14516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14518
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14519
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14521
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14522
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
            {
#line 14524
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14525
            .lvl = 39,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14527
    [TRAINER_FERNANDO_5] =
    {
#line 14528
        .trainerName = _("Fernando"),
#line 14529
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 14530
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender = 
#line 14532
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14533
        .doubleBattle = FALSE,
#line 14534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14536
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14537
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14539
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14540
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14542
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14543
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14545
    [TRAINER_SAWYER_2] =
    {
#line 14546
        .trainerName = _("Sawyer"),
#line 14547
        .trainerClass = TRAINER_CLASS_HIKER,
#line 14548
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14550
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14551
        .doubleBattle = FALSE,
#line 14552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14554
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14555
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
            {
#line 14557
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14558
            .lvl = 26,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14560
    [TRAINER_SAWYER_3] =
    {
#line 14561
        .trainerName = _("Sawyer"),
#line 14562
        .trainerClass = TRAINER_CLASS_HIKER,
#line 14563
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14565
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14566
        .doubleBattle = FALSE,
#line 14567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14569
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14570
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 14572
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14573
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
            {
#line 14575
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14576
            .lvl = 28,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14578
    [TRAINER_SAWYER_4] =
    {
#line 14579
        .trainerName = _("Sawyer"),
#line 14580
        .trainerClass = TRAINER_CLASS_HIKER,
#line 14581
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14583
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14584
        .doubleBattle = FALSE,
#line 14585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14587
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14588
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 14590
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14591
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
            {
#line 14593
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14594
            .lvl = 30,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14596
    [TRAINER_SAWYER_5] =
    {
#line 14597
        .trainerName = _("Sawyer"),
#line 14598
        .trainerClass = TRAINER_CLASS_HIKER,
#line 14599
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender = 
#line 14601
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 14602
        .doubleBattle = FALSE,
#line 14603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14605
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14606
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14608
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14609
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14611
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14612
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14614
    [TRAINER_GABRIELLE_2] =
    {
#line 14615
        .trainerName = _("Gabrielle"),
#line 14616
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 14617
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 14618
F_TRAINER_FEMALE | 
#line 14619
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14620
        .doubleBattle = FALSE,
#line 14621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14623
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14624
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14626
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14627
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14629
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14630
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14632
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14633
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14635
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14636
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
            {
#line 14638
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14639
            .lvl = 31,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14641
    [TRAINER_GABRIELLE_3] =
    {
#line 14642
        .trainerName = _("Gabrielle"),
#line 14643
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 14644
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 14645
F_TRAINER_FEMALE | 
#line 14646
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14647
        .doubleBattle = FALSE,
#line 14648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14650
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14651
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14653
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14654
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14656
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14657
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14659
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14660
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14662
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14663
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
            {
#line 14665
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14666
            .lvl = 33,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14668
    [TRAINER_GABRIELLE_4] =
    {
#line 14669
        .trainerName = _("Gabrielle"),
#line 14670
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 14671
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 14672
F_TRAINER_FEMALE | 
#line 14673
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14674
        .doubleBattle = FALSE,
#line 14675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14677
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14678
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14680
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14681
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14683
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14684
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14686
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14687
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14689
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14690
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
            {
#line 14692
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14693
            .lvl = 35,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14695
    [TRAINER_GABRIELLE_5] =
    {
#line 14696
        .trainerName = _("Gabrielle"),
#line 14697
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 14698
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender = 
#line 14699
F_TRAINER_FEMALE | 
#line 14700
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14701
        .doubleBattle = FALSE,
#line 14702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 14704
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14705
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14707
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14708
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14710
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14711
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14713
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14714
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14716
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14717
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
            {
#line 14719
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14720
            .lvl = 37,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14722
    [TRAINER_THALIA_2] =
    {
#line 14723
        .trainerName = _("Thalia"),
#line 14724
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 14725
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 14726
F_TRAINER_FEMALE | 
#line 14727
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14728
        .doubleBattle = FALSE,
#line 14729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14731
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14732
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
            {
#line 14734
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14735
            .lvl = 34,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14737
    [TRAINER_THALIA_3] =
    {
#line 14738
        .trainerName = _("Thalia"),
#line 14739
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 14740
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 14741
F_TRAINER_FEMALE | 
#line 14742
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14743
        .doubleBattle = FALSE,
#line 14744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14746
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14747
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 14749
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14750
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
            {
#line 14752
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14753
            .lvl = 36,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14755
    [TRAINER_THALIA_4] =
    {
#line 14756
        .trainerName = _("Thalia"),
#line 14757
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 14758
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 14759
F_TRAINER_FEMALE | 
#line 14760
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14761
        .doubleBattle = FALSE,
#line 14762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14764
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14765
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 14767
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14768
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
            {
#line 14770
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14771
            .lvl = 38,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14773
    [TRAINER_THALIA_5] =
    {
#line 14774
        .trainerName = _("Thalia"),
#line 14775
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 14776
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender = 
#line 14777
F_TRAINER_FEMALE | 
#line 14778
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 14779
        .doubleBattle = FALSE,
#line 14780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_SMART_SWITCHING,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 14782
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14783
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 14785
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14786
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
            {
#line 14788
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14789
            .lvl = 40,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14791
    [TRAINER_MARIELA] =
    {
#line 14792
        .trainerName = _("Mariela"),
#line 14793
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 14794
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender = 
#line 14795
F_TRAINER_FEMALE | 
#line 14796
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14797
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14799
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14800
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14802
    [TRAINER_ALVARO] =
    {
#line 14803
        .trainerName = _("Alvaro"),
#line 14804
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 14805
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender = 
#line 14807
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 14808
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 14810
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14811
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
            {
#line 14813
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14814
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14816
    [TRAINER_EVERETT] =
    {
#line 14817
        .trainerName = _("Everett"),
#line 14818
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 14819
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender = 
#line 14821
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 14822
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14824
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14825
            .lvl = 41,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14827
    [TRAINER_RED] =
    {
#line 14828
        .trainerName = _("Red"),
#line 14829
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 14830
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = 
#line 14832
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14833
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14835
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14836
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14838
    [TRAINER_LEAF] =
    {
#line 14839
        .trainerName = _("Leaf"),
#line 14840
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 14841
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender = 
#line 14842
F_TRAINER_FEMALE | 
#line 14843
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14844
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14846
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14847
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14849
    [TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 14850
        .trainerName = _("Brendan"),
#line 14851
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 14852
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender = 
#line 14854
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14855
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14857
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14858
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
#line 14860
    [TRAINER_MAY_PLACEHOLDER] =
    {
#line 14861
        .trainerName = _("May"),
#line 14862
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 14863
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender = 
#line 14864
F_TRAINER_FEMALE | 
#line 14865
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14866
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 14868
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 14869
            .lvl = 5,
            .nature = NATURE_HARDY,
            },
        },
    },
