#ifndef GUARD_CONFIG_SPECIES_ENABLED_H
#define GUARD_CONFIG_SPECIES_ENABLED_H

// WARNING: For some reason, using 1/0 instead of TRUE/FALSE causes cry IDs to be shifted.
// Please use TRUE/FALSE when using the family toggles.

// Modifying the latest generation WILL change the saveblock due to Dex flags and will require a new save file.
// Generations of Pokémon are defined by the first member introduced,
// so Pikachu depends on the Gen 1 setting despite Pichu being the lowest member of the evolution tree.
// Eg: If P_GEN_2_POKEMON is set to FALSE, all members of the Sneasel Family will be disabled
// (Sneasel + Hisuian, Weavile and Sneasler).
#define P_GEN_1_POKEMON                  TRUE // Generation 1 Pokémon (RGBY)
#define P_GEN_2_POKEMON                  TRUE // Generation 2 Pokémon (GSC)
#define P_GEN_3_POKEMON                  TRUE // Generation 3 Pokémon (RSE, FRLG)
#define P_GEN_4_POKEMON                  FALSE // Generation 4 Pokémon (DPPt, HGSS)
#define P_GEN_5_POKEMON                  FALSE // Generation 5 Pokémon (BW, B2W2)
#define P_GEN_6_POKEMON                  FALSE // Generation 6 Pokémon (XY, ORAS)
#define P_GEN_7_POKEMON                  FALSE // Generation 7 Pokémon (SM, USUM, LGPE)
#define P_GEN_8_POKEMON                  FALSE // Generation 8 Pokémon (SwSh, BDSP, LA)
#define P_GEN_9_POKEMON                  FALSE // Generation 9 Pokémon (SV)

// Setting this to TRUE will add the new evolutions to the Regional Dex.
#define P_NEW_EVOS_IN_REGIONAL_DEX       TRUE

// Battle gimmick specific Forms.
#define P_MEGA_EVOLUTIONS                FALSE
#define P_PRIMAL_REVERSIONS              FALSE // Groudon and Kyogre only.
#define P_ULTRA_BURST_FORMS              FALSE // Ultra Necrozma only.
#define P_GIGANTAMAX_FORMS               FALSE
#define P_TERA_FORMS                     FALSE

// Fusion forms
#define P_FUSION_FORMS                   FALSE

// Regional Forms. Includes Regional Form evolutions, like Sirfetch'd.
#define P_REGIONAL_FORMS                 FALSE
#define P_ALOLAN_FORMS                   P_REGIONAL_FORMS
#define P_GALARIAN_FORMS                 P_REGIONAL_FORMS
#define P_HISUIAN_FORMS                  P_REGIONAL_FORMS
#define P_PALDEAN_FORMS                  P_REGIONAL_FORMS

// Big groups of forms that aren't always desired when choosing families.
#define P_PIKACHU_EXTRA_FORMS            FALSE
#define P_COSPLAY_PIKACHU_FORMS          P_PIKACHU_EXTRA_FORMS
#define P_CAP_PIKACHU_FORMS              P_PIKACHU_EXTRA_FORMS

// Cross-generation evolutions. Includes pre-evolutions.
#define P_CROSS_GENERATION_EVOS          TRUE
#define P_GEN_2_CROSS_EVOS               P_CROSS_GENERATION_EVOS
#define P_GEN_3_CROSS_EVOS               P_CROSS_GENERATION_EVOS
#define P_GEN_4_CROSS_EVOS               P_CROSS_GENERATION_EVOS
//#define P_GEN_5_CROSS_EVOS             // Gen 5 didn't introduce any cross-gen evos.
#define P_GEN_6_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Just Sylveon.
//#define P_GEN_7_CROSS_EVOS             // Alolan evolutions handled by P_ALOLAN_FORMS.
#define P_GEN_8_CROSS_EVOS               FALSE // Regional evolutions handled by P_GALARIAN_FORMS and P_HISUIAN_FORMS.
#define P_GEN_9_CROSS_EVOS               P_CROSS_GENERATION_EVOS // Clodsire handled by P_PALDEAN_FORMS.

// To disable specific families, replace P_GEN_x_POKEMON with FALSE.
#define P_FAMILY_BULBASAUR               P_GEN_1_POKEMON
#define P_FAMILY_CHARMANDER              P_GEN_1_POKEMON
#define P_FAMILY_SQUIRTLE                P_GEN_1_POKEMON
#define P_FAMILY_CATERPIE                P_GEN_1_POKEMON
#define P_FAMILY_WEEDLE                  0
#define P_FAMILY_PIDGEY                  P_GEN_1_POKEMON
#define P_FAMILY_RATTATA                 0
#define P_FAMILY_SPEAROW                 0
#define P_FAMILY_EKANS                   P_GEN_1_POKEMON
#define P_FAMILY_PIKACHU                 P_GEN_1_POKEMON
#define P_FAMILY_SANDSHREW               P_GEN_1_POKEMON
#define P_FAMILY_NIDORAN                 P_GEN_1_POKEMON
#define P_FAMILY_CLEFAIRY                P_GEN_1_POKEMON
#define P_FAMILY_VULPIX                  P_GEN_1_POKEMON
#define P_FAMILY_JIGGLYPUFF              P_GEN_1_POKEMON
#define P_FAMILY_ZUBAT                   P_GEN_1_POKEMON
#define P_FAMILY_ODDISH                  P_GEN_1_POKEMON
#define P_FAMILY_PARAS                   P_GEN_1_POKEMON
#define P_FAMILY_VENONAT                 P_GEN_1_POKEMON
#define P_FAMILY_DIGLETT                 P_GEN_1_POKEMON
#define P_FAMILY_MEOWTH                  P_GEN_1_POKEMON
#define P_FAMILY_PSYDUCK                 0
#define P_FAMILY_MANKEY                  P_GEN_1_POKEMON
#define P_FAMILY_GROWLITHE               P_GEN_1_POKEMON
#define P_FAMILY_POLIWAG                 P_GEN_1_POKEMON
#define P_FAMILY_ABRA                    P_GEN_1_POKEMON
#define P_FAMILY_MACHOP                  P_GEN_1_POKEMON
#define P_FAMILY_BELLSPROUT              0
#define P_FAMILY_TENTACOOL               P_GEN_1_POKEMON
#define P_FAMILY_GEODUDE                 P_GEN_1_POKEMON
#define P_FAMILY_PONYTA                  P_GEN_1_POKEMON
#define P_FAMILY_SLOWPOKE                P_GEN_1_POKEMON
#define P_FAMILY_MAGNEMITE               P_GEN_1_POKEMON
#define P_FAMILY_FARFETCHD               0
#define P_FAMILY_DODUO                   P_GEN_1_POKEMON
#define P_FAMILY_SEEL                    0
#define P_FAMILY_GRIMER                  P_GEN_1_POKEMON
#define P_FAMILY_SHELLDER                P_GEN_1_POKEMON
#define P_FAMILY_GASTLY                  P_GEN_1_POKEMON
#define P_FAMILY_ONIX                    P_GEN_1_POKEMON
#define P_FAMILY_DROWZEE                 0
#define P_FAMILY_KRABBY                  0
#define P_FAMILY_VOLTORB                 P_GEN_1_POKEMON
#define P_FAMILY_EXEGGCUTE               P_GEN_1_POKEMON
#define P_FAMILY_CUBONE                  P_GEN_1_POKEMON
#define P_FAMILY_HITMONS                 0
#define P_FAMILY_LICKITUNG               0
#define P_FAMILY_KOFFING                 P_GEN_1_POKEMON
#define P_FAMILY_RHYHORN                 0
#define P_FAMILY_CHANSEY                 P_GEN_1_POKEMON
#define P_FAMILY_TANGELA                 0
#define P_FAMILY_KANGASKHAN              0
#define P_FAMILY_HORSEA                  P_GEN_1_POKEMON
#define P_FAMILY_GOLDEEN                 P_GEN_1_POKEMON
#define P_FAMILY_STARYU                  P_GEN_1_POKEMON
#define P_FAMILY_MR_MIME                 0
#define P_FAMILY_SCYTHER                 P_GEN_1_POKEMON
#define P_FAMILY_JYNX                    P_GEN_1_POKEMON
#define P_FAMILY_ELECTABUZZ              P_GEN_1_POKEMON
#define P_FAMILY_MAGMAR                  P_GEN_1_POKEMON
#define P_FAMILY_PINSIR                  P_GEN_1_POKEMON
#define P_FAMILY_TAUROS                  P_GEN_1_POKEMON
#define P_FAMILY_MAGIKARP                P_GEN_1_POKEMON
#define P_FAMILY_LAPRAS                  P_GEN_1_POKEMON
#define P_FAMILY_DITTO                   P_GEN_1_POKEMON
#define P_FAMILY_EEVEE                   P_GEN_1_POKEMON
#define P_FAMILY_PORYGON                 0
#define P_FAMILY_OMANYTE                 P_GEN_1_POKEMON
#define P_FAMILY_KABUTO                  P_GEN_1_POKEMON
#define P_FAMILY_AERODACTYL              P_GEN_1_POKEMON
#define P_FAMILY_SNORLAX                 P_GEN_1_POKEMON
#define P_FAMILY_ARTICUNO                0
#define P_FAMILY_ZAPDOS                  0
#define P_FAMILY_MOLTRES                 0
#define P_FAMILY_DRATINI                 P_GEN_1_POKEMON
#define P_FAMILY_MEWTWO                  0
#define P_FAMILY_MEW                     0

#define P_FAMILY_CHIKORITA               P_GEN_2_POKEMON
#define P_FAMILY_CYNDAQUIL               P_GEN_2_POKEMON
#define P_FAMILY_TOTODILE                P_GEN_2_POKEMON
#define P_FAMILY_SENTRET                 0
#define P_FAMILY_HOOTHOOT                0
#define P_FAMILY_LEDYBA                  0
#define P_FAMILY_SPINARAK                P_GEN_2_POKEMON
#define P_FAMILY_CHINCHOU                P_GEN_2_POKEMON
#define P_FAMILY_TOGEPI                  P_GEN_2_POKEMON
#define P_FAMILY_NATU                    P_GEN_2_POKEMON
#define P_FAMILY_MAREEP                  P_GEN_2_POKEMON
#define P_FAMILY_MARILL                  P_GEN_2_POKEMON
#define P_FAMILY_SUDOWOODO               P_GEN_2_POKEMON
#define P_FAMILY_HOPPIP                  P_GEN_2_POKEMON
#define P_FAMILY_AIPOM                   0
#define P_FAMILY_SUNKERN                 0
#define P_FAMILY_YANMA                   P_GEN_2_POKEMON
#define P_FAMILY_WOOPER                  0
#define P_FAMILY_MURKROW                 P_GEN_2_POKEMON
#define P_FAMILY_MISDREAVUS              P_GEN_2_POKEMON
#define P_FAMILY_UNOWN                   0
#define P_FAMILY_WOBBUFFET               0
#define P_FAMILY_GIRAFARIG               P_GEN_2_POKEMON
#define P_FAMILY_PINECO                  P_GEN_2_POKEMON
#define P_FAMILY_DUNSPARCE               0
#define P_FAMILY_GLIGAR                  P_GEN_2_POKEMON
#define P_FAMILY_SNUBBULL                P_GEN_2_POKEMON
#define P_FAMILY_QWILFISH                0
#define P_FAMILY_SHUCKLE                 0
#define P_FAMILY_HERACROSS               P_GEN_2_POKEMON
#define P_FAMILY_SNEASEL                 P_GEN_2_POKEMON
#define P_FAMILY_TEDDIURSA               0
#define P_FAMILY_SLUGMA                  P_GEN_2_POKEMON
#define P_FAMILY_SWINUB                  P_GEN_2_POKEMON
#define P_FAMILY_CORSOLA                 0
#define P_FAMILY_REMORAID                0
#define P_FAMILY_DELIBIRD                0
#define P_FAMILY_MANTINE                 0
#define P_FAMILY_SKARMORY                P_GEN_2_POKEMON
#define P_FAMILY_HOUNDOUR                P_GEN_2_POKEMON
#define P_FAMILY_PHANPY                  P_GEN_2_POKEMON
#define P_FAMILY_STANTLER                0
#define P_FAMILY_SMEARGLE                0
#define P_FAMILY_MILTANK                 P_GEN_2_POKEMON
#define P_FAMILY_RAIKOU                  0
#define P_FAMILY_ENTEI                   0
#define P_FAMILY_SUICUNE                 0
#define P_FAMILY_LARVITAR                P_GEN_2_POKEMON
#define P_FAMILY_LUGIA                   0
#define P_FAMILY_HO_OH                   0
#define P_FAMILY_CELEBI                  0

#define P_FAMILY_TREECKO                 P_GEN_3_POKEMON
#define P_FAMILY_TORCHIC                 P_GEN_3_POKEMON
#define P_FAMILY_MUDKIP                  P_GEN_3_POKEMON
#define P_FAMILY_POOCHYENA               P_GEN_3_POKEMON
#define P_FAMILY_ZIGZAGOON               P_GEN_3_POKEMON
#define P_FAMILY_WURMPLE                 P_GEN_3_POKEMON
#define P_FAMILY_LOTAD                   P_GEN_3_POKEMON
#define P_FAMILY_SEEDOT                  P_GEN_3_POKEMON
#define P_FAMILY_TAILLOW                 P_GEN_3_POKEMON
#define P_FAMILY_WINGULL                 P_GEN_3_POKEMON
#define P_FAMILY_RALTS                   P_GEN_3_POKEMON
#define P_FAMILY_SURSKIT                 P_GEN_3_POKEMON
#define P_FAMILY_SHROOMISH               P_GEN_3_POKEMON
#define P_FAMILY_SLAKOTH                 0
#define P_FAMILY_NINCADA                 0
#define P_FAMILY_WHISMUR                 P_GEN_3_POKEMON
#define P_FAMILY_MAKUHITA                P_GEN_3_POKEMON
#define P_FAMILY_NOSEPASS                0
#define P_FAMILY_SKITTY                  P_GEN_3_POKEMON
#define P_FAMILY_SABLEYE                 0
#define P_FAMILY_MAWILE                  0
#define P_FAMILY_ARON                    P_GEN_3_POKEMON
#define P_FAMILY_MEDITITE                P_GEN_3_POKEMON
#define P_FAMILY_ELECTRIKE               P_GEN_3_POKEMON
#define P_FAMILY_PLUSLE                  0
#define P_FAMILY_MINUN                   0
#define P_FAMILY_VOLBEAT_ILLUMISE        P_GEN_3_POKEMON
#define P_FAMILY_ROSELIA                 P_GEN_3_POKEMON
#define P_FAMILY_GULPIN                  0
#define P_FAMILY_CARVANHA                P_GEN_3_POKEMON
#define P_FAMILY_WAILMER                 P_GEN_3_POKEMON
#define P_FAMILY_NUMEL                   P_GEN_3_POKEMON
#define P_FAMILY_TORKOAL                 P_GEN_3_POKEMON
#define P_FAMILY_SPOINK                  P_GEN_3_POKEMON
#define P_FAMILY_SPINDA                  0
#define P_FAMILY_TRAPINCH                P_GEN_3_POKEMON
#define P_FAMILY_CACNEA                  P_GEN_3_POKEMON
#define P_FAMILY_SWABLU                  P_GEN_3_POKEMON
#define P_FAMILY_ZANGOOSE                P_GEN_3_POKEMON
#define P_FAMILY_SEVIPER                 P_GEN_3_POKEMON
#define P_FAMILY_LUNATONE                P_GEN_3_POKEMON
#define P_FAMILY_SOLROCK                 P_GEN_3_POKEMON
#define P_FAMILY_BARBOACH                P_GEN_3_POKEMON
#define P_FAMILY_CORPHISH                P_GEN_3_POKEMON
#define P_FAMILY_BALTOY                  P_GEN_3_POKEMON
#define P_FAMILY_LILEEP                  P_GEN_3_POKEMON
#define P_FAMILY_ANORITH                 P_GEN_3_POKEMON
#define P_FAMILY_FEEBAS                  P_GEN_3_POKEMON
#define P_FAMILY_CASTFORM                0
#define P_FAMILY_KECLEON                 P_GEN_3_POKEMON
#define P_FAMILY_SHUPPET                 P_GEN_3_POKEMON
#define P_FAMILY_DUSKULL                 P_GEN_3_POKEMON
#define P_FAMILY_TROPIUS                 0
#define P_FAMILY_CHIMECHO                0
#define P_FAMILY_ABSOL                   P_GEN_3_POKEMON
#define P_FAMILY_SNORUNT                 P_GEN_3_POKEMON
#define P_FAMILY_SPHEAL                  P_GEN_3_POKEMON
#define P_FAMILY_CLAMPERL                P_GEN_3_POKEMON
#define P_FAMILY_RELICANTH               P_GEN_3_POKEMON
#define P_FAMILY_LUVDISC                 0
#define P_FAMILY_BAGON                   P_GEN_3_POKEMON
#define P_FAMILY_BELDUM                  P_GEN_3_POKEMON
#define P_FAMILY_REGIROCK                P_GEN_3_POKEMON
#define P_FAMILY_REGICE                  P_GEN_3_POKEMON
#define P_FAMILY_REGISTEEL               P_GEN_3_POKEMON
#define P_FAMILY_LATIAS                  P_GEN_3_POKEMON
#define P_FAMILY_LATIOS                  P_GEN_3_POKEMON
#define P_FAMILY_KYOGRE                  P_GEN_3_POKEMON
#define P_FAMILY_GROUDON                 P_GEN_3_POKEMON
#define P_FAMILY_RAYQUAZA                P_GEN_3_POKEMON
#define P_FAMILY_JIRACHI                 0
#define P_FAMILY_DEOXYS                  0

#define P_FAMILY_TURTWIG                 TRUE
#define P_FAMILY_STARLY                  TRUE
#define P_FAMILY_DRIFLOON                TRUE
#define P_FAMILY_STUNKY                  TRUE
#define P_FAMILY_BRONZOR                 TRUE
#define P_FAMILY_GIBLE                   TRUE
#define P_FAMILY_RIOLU                   TRUE
#define P_FAMILY_HIPPOPOTAS              TRUE
#define P_FAMILY_CROAGUNK                TRUE
#define P_FAMILY_SNOVER                  TRUE
#define P_FAMILY_ROTOM                   TRUE
#define P_FAMILY_REGIGIGAS               TRUE

#define P_FAMILY_ROGGENROLA              TRUE
#define P_FAMILY_DRILBUR                 TRUE
#define P_FAMILY_VENIPEDE                TRUE
#define P_FAMILY_COTTONEE                TRUE
#define P_FAMILY_SANDILE                 TRUE
#define P_FAMILY_FRILLISH                TRUE
#define P_FAMILY_JOLTIK                  TRUE
#define P_FAMILY_FERROSEED               TRUE
#define P_FAMILY_LITWICK                 TRUE
#define P_FAMILY_GOLETT                  TRUE
#define P_FAMILY_DEINO                   TRUE
#define P_FAMILY_LARVESTA                TRUE

#define P_FAMILY_FLETCHLING              TRUE
#define P_FAMILY_HONEDGE                 TRUE
#define P_FAMILY_INKAY                   TRUE
#define P_FAMILY_TYRUNT                  TRUE
#define P_FAMILY_AMAURA                  TRUE
#define P_FAMILY_PHANTUMP                TRUE

#define P_FAMILY_ROCKRUFF                TRUE

#define P_FAMILY_TINKATINK               TRUE

#endif // GUARD_CONFIG_SPECIES_ENABLED_H
