const struct Item gItems[] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Poké Balls

    [ITEM_POKE_BALL] =
    {
        .name = _("Poké Ball"),
        .itemId = ITEM_POKE_BALL,
        .price = 100,
        .description = sPokeBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_POKE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_POKE_BALL - FIRST_BALL,
    },

    [ITEM_GREAT_BALL] =
    {
        .name = _("Great Ball"),
        .itemId = ITEM_GREAT_BALL,
        .price = 250,
        .description = sGreatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_GREAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_GREAT_BALL - FIRST_BALL,
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = _("Ultra Ball"),
        .itemId = ITEM_ULTRA_BALL,
        .price = 400,
        .description = sUltraBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_ULTRA_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_ULTRA_BALL - FIRST_BALL,
    },

    [ITEM_MASTER_BALL] =
    {
        .name = _("Master Ball"),
        .itemId = ITEM_MASTER_BALL,
        .price = 65000,
        .description = sMasterBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_MASTER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_MASTER_BALL - FIRST_BALL,
    },

    [ITEM_PREMIER_BALL] =
    {
        .name = _("Premier Ball"),
        .itemId = ITEM_PREMIER_BALL,
        .price = 100,
        .description = sPremierBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_PREMIER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_PREMIER_BALL - FIRST_BALL,
    },

    [ITEM_HEAL_BALL] =
    {
        .name = _("Heal Ball"),
        .itemId = ITEM_HEAL_BALL,
        .price = 140,
        .description = sHealBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_HEAL_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_HEAL_BALL - FIRST_BALL,
    },

    [ITEM_NET_BALL] =
    {
        .name = _("Net Ball"),
        .itemId = ITEM_NET_BALL,
        .price = 600,
        .description = sNetBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NET_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_NET_BALL - FIRST_BALL,
    },

    [ITEM_NEST_BALL] =
    {
        .name = _("Nest Ball"),
        .itemId = ITEM_NEST_BALL,
        .price = 250,
        .description = sNestBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NEST_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_NEST_BALL - FIRST_BALL,
    },

    [ITEM_DIVE_BALL] =
    {
        .name = _("Dive Ball"),
        .itemId = ITEM_DIVE_BALL,
        .price = 400,
        .description = sDiveBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DIVE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_DIVE_BALL - FIRST_BALL,
    },

    [ITEM_DUSK_BALL] =
    {
        .name = _("Dusk Ball"),
        .itemId = ITEM_DUSK_BALL,
        .price = 750,
        .description = sDuskBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DUSK_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_DUSK_BALL - FIRST_BALL,
    },

    [ITEM_TIMER_BALL] =
    {
        .name = _("Timer Ball"),
        .itemId = ITEM_TIMER_BALL,
        .price = 400,
        .description = sTimerBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_TIMER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_TIMER_BALL - FIRST_BALL,
    },

    [ITEM_QUICK_BALL] =
    {
        .name = _("Quick Ball"),
        .itemId = ITEM_QUICK_BALL,
        .price = 700,
        .description = sQuickBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_QUICK_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_QUICK_BALL - FIRST_BALL,
    },

    [ITEM_REPEAT_BALL] =
    {
        .name = _("Repeat Ball"),
        .itemId = ITEM_REPEAT_BALL,
        .price = 400,
        .description = sRepeatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_REPEAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_REPEAT_BALL - FIRST_BALL,
    },

    [ITEM_LUXURY_BALL] =
    {
        .name = _("Luxury Ball"),
        .itemId = ITEM_LUXURY_BALL,
        .price = 300,
        .description = sLuxuryBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LUXURY_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LUXURY_BALL - FIRST_BALL,
    },

    [ITEM_LITTLE_BALL] =
    {
        .name = _("Little Ball"),
        .itemId = ITEM_LITTLE_BALL,
        .price = 200,
        .description = sLittleBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LITTLE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LITTLE_BALL - FIRST_BALL,
    },

    [ITEM_LURE_BALL] =
    {
        .name = _("Lure Ball"),
        .itemId = ITEM_LURE_BALL,
        .price = 0,
        .description = sLureBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LURE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LURE_BALL - FIRST_BALL,
    },

    [ITEM_MOON_BALL] =
    {
        .name = _("Moon Ball"),
        .itemId = ITEM_MOON_BALL,
        .price = 0,
        .description = sMoonBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_MOON_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_MOON_BALL - FIRST_BALL,
    },

    [ITEM_FRIEND_BALL] =
    {
        .name = _("Friend Ball"),
        .itemId = ITEM_FRIEND_BALL,
        .price = 0,
        .description = sFriendBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_FRIEND_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_FRIEND_BALL - FIRST_BALL,
    },

    [ITEM_LOVE_BALL] =
    {
        .name = _("Love Ball"),
        .itemId = ITEM_LOVE_BALL,
        .price = 0,
        .description = sLoveBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LOVE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LOVE_BALL - FIRST_BALL,
    },

    [ITEM_FAST_BALL] =
    {
        .name = _("Fast Ball"),
        .itemId = ITEM_FAST_BALL,
        .price = 0,
        .description = sFastBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_FAST_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_FAST_BALL - FIRST_BALL,
    },

    [ITEM_HEAVY_BALL] =
    {
        .name = _("Heavy Ball"),
        .itemId = ITEM_HEAVY_BALL,
        .price = 750,
        .description = sHeavyBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_HEAVY_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_HEAVY_BALL - FIRST_BALL,
    },

    [ITEM_DREAM_BALL] =
    {
        .name = _("Dream Ball"),
        .itemId = ITEM_DREAM_BALL,
        .price = 500,
        .description = sDreamBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DREAM_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_DREAM_BALL - FIRST_BALL,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = _("Safari Ball"),
        .itemId = ITEM_SAFARI_BALL,
        .price = 0,
        .description = sSafariBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_SAFARI_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_SAFARI_BALL - FIRST_BALL,
    },

    [ITEM_AQUA_BALL] =
    {
        .name = _("Aqua Ball"),
        .itemId = ITEM_AQUA_BALL,
        .price = 0,
        .description = sSportBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_AQUA_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_AQUA_BALL - FIRST_BALL,
    },

    [ITEM_MAGMA_BALL] =
    {
        .name = _("Magma Ball"),
        .itemId = ITEM_MAGMA_BALL,
        .price = 0,
        .description = sParkBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_MAGMA_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_MAGMA_BALL - FIRST_BALL,
    },

    [ITEM_WING_BALL] =
    {
        .name = _("Wing Ball"),
        .itemId = ITEM_WING_BALL,
        .price = 600,
        .description = sWingBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_WING_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_WING_BALL - FIRST_BALL,
    },

    [ITEM_CHERISH_BALL] =
    {
        .name = _("Cherish Ball"),
        .itemId = ITEM_CHERISH_BALL,
        .price = 0,
        .description = sCherishBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_CHERISH_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_CHERISH_BALL - FIRST_BALL,
    },

// Medicine

    [ITEM_POTION] =
    {
        .name = _("Potion"),
        .itemId = ITEM_POTION,
        .price = 100,
        .holdEffectParam = 20,
        .description = sPotionDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SUPER_POTION] =
    {
        .name = _("Super Potion"),
        .itemId = ITEM_SUPER_POTION,
        .price = 250,
        .holdEffectParam = 60,
        .description = sSuperPotionDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_HYPER_POTION] =
    {
        .name = _("Hyper Potion"),
        .itemId = ITEM_HYPER_POTION,
        .price = 475,
        .holdEffectParam = 120,
        .description = sHyperPotionDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_POTION] =
    {
        .name = _("Max Potion"),
        .itemId = ITEM_MAX_POTION,
        .price = 900,
        .holdEffectParam = 255,
        .description = sMaxPotionDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FULL_RESTORE] =
    {
        .name = _("Full Restore"),
        .itemId = ITEM_FULL_RESTORE,
        .price = 1150,
        .holdEffectParam = 255,
        .description = sFullRestoreDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_REVIVE] =
    {
        .name = _("Revive"),
        .itemId = ITEM_REVIVE,
        .price = 500,
        .description = sReviveDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_REVIVE] =
    {
        .name = _("Max Revive"),
        .itemId = ITEM_MAX_REVIVE,
        .price = 1400,
        .description = sMaxReviveDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FRESH_WATER] =
    {
        .name = _("Fresh Water"),
        .itemId = ITEM_FRESH_WATER,
        .price = 100,
        .holdEffectParam = 30,
        .description = sFreshWaterDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SODA_POP] =
    {
        .name = _("Soda Pop"),
        .itemId = ITEM_SODA_POP,
        .price = 150,
        .holdEffectParam = 50,
        .description = sSodaPopDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LEMONADE] =
    {
        .name = _("Lemonade"),
        .itemId = ITEM_LEMONADE,
        .price = 200,
        .holdEffectParam = 70,
        .description = sLemonadeDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MOOMOO_MILK] =
    {
        .name = _("Moomoo Milk"),
        .itemId = ITEM_MOOMOO_MILK,
        .price = 300,
        .holdEffectParam = 100,
        .description = sMoomooMilkDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ENERGY_POWDER] =
    {
        .name = _("Energy Powder"),
        .itemId = ITEM_ENERGY_POWDER,
        .price = 500,
        .description = sEnergyPowderDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ENERGY_ROOT] =
    {
        .name = _("Energy Root"),
        .itemId = ITEM_ENERGY_ROOT,
        .price = 1200,
        .description = sEnergyRootDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_HEAL_POWDER] =
    {
        .name = _("Heal Powder"),
        .itemId = ITEM_HEAL_POWDER,
        .price = 300,
        .description = sHealPowderDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_REVIVAL_HERB] =
    {
        .name = _("Revival Herb"),
        .itemId = ITEM_REVIVAL_HERB,
        .price = 1000,
        .description = sRevivalHerbDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ANTIDOTE] =
    {
        .name = _("Antidote"),
        .itemId = ITEM_ANTIDOTE,
        .price = 75,
        .description = sAntidoteDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PARALYZE_HEAL] =
    {
        .name = _("Paralyze Heal"),
        .itemId = ITEM_PARALYZE_HEAL,
        .price = 125,
        .description = sParalyzeHealDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BURN_HEAL] =
    {
        .name = _("Burn Heal"),
        .itemId = ITEM_BURN_HEAL,
        .price = 125,
        .description = sBurnHealDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ICE_HEAL] =
    {
        .name = _("Ice Heal"),
        .itemId = ITEM_ICE_HEAL,
        .price = 125,
        .description = sIceHealDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_AWAKENING] =
    {
        .name = _("Awakening"),
        .itemId = ITEM_AWAKENING,
        .price = 125,
        .description = sAwakeningDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FULL_HEAL] =
    {
        .name = _("Full Heal"),
        .itemId = ITEM_FULL_HEAL,
        .price = 250,
        .description = sFullHealDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ETHER] =
    {
        .name = _("Ether"),
        .itemId = ITEM_ETHER,
        .price = 400,
        .holdEffectParam = 10,
        .description = sEtherDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_MAX_ETHER] =
    {
        .name = _("Max Ether"),
        .itemId = ITEM_MAX_ETHER,
        .price = 750,
        .holdEffectParam = 255,
        .description = sMaxEtherDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_ELIXIR] =
    {
        .name = _("Elixir"),
        .itemId = ITEM_ELIXIR,
        .price = 1500,
        .holdEffectParam = 10,
        .description = sElixirDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_MAX_ELIXIR] =
    {
        .name = _("Max Elixir"),
        .itemId = ITEM_MAX_ELIXIR,
        .price = 2750,
        .holdEffectParam = 255,
        .description = sMaxElixirDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_BERRY_JUICE] =
    {
        .name = _("Berry Juice"),
        .itemId = ITEM_BERRY_JUICE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = sBerryJuiceDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SACRED_ASH] =
    {
        .name = _("Sacred Ash"),
        .itemId = ITEM_SACRED_ASH,
        .price = 50000,
        .description = sSacredAshDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
    },

    [ITEM_SWEET_HEART] =
    {
        .name = _("Sweet Heart"),
        .itemId = ITEM_SWEET_HEART,
        .price = 3000,
        .holdEffectParam = 20,
        .description = sSweetHeartDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_HONEY] =
    {
        .name = _("Max Honey"),
        .itemId = ITEM_MAX_HONEY,
        .price = 8000,
        .description = sMaxHoneyDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

// Regional Specialties

    [ITEM_PEWTER_CRUNCHIES] =
    {
        .name = _("Pewter Crunches"),
        .itemId = ITEM_PEWTER_CRUNCHIES,
        .price = 250,
        .description = sPewterCrunchiesDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RAGE_CANDY_BAR] =
    {
        .name = _("Rage Candy Bar"),
        .itemId = ITEM_RAGE_CANDY_BAR,
        .price = 350,
        .description = sRageCandyBarDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = _("Lava Cookie"),
        .itemId = ITEM_LAVA_COOKIE,
        .price = 125,
        .description = sLavaCookieDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_OLD_GATEAU] =
    {
        .name = _("Old Gateau"),
        .itemId = ITEM_OLD_GATEAU,
        .price = 350,
        .description = sOldGateauDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_CASTELIACONE] =
    {
        .name = _("CasteliaCone"),
        .itemId = ITEM_CASTELIACONE,
        .price = 350,
        .description = sCasteliaconeDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LUMIOSE_GALETTE] =
    {
        .name = _("Lumiose Galette"),
        .itemId = ITEM_LUMIOSE_GALETTE,
        .price = 350,
        .description = sLumioseGaletteDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SHALOUR_SABLE] =
    {
        .name = _("Shalour Sable"),
        .itemId = ITEM_SHALOUR_SABLE,
        .price = 350,
        .description = sShalourSableDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BIG_MALASADA] =
    {
        .name = _("Big Malasada"),
        .itemId = ITEM_BIG_MALASADA,
        .price = 350,
        .description = sBigMalasadaDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
        .name = _("HP Up"),
        .itemId = ITEM_HP_UP,
        .price = 9999,
        .description = sHPUpDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_PROTEIN] =
    {
        .name = _("Protein"),
        .itemId = ITEM_PROTEIN,
        .price = 9999,
        .description = sProteinDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_IRON] =
    {
        .name = _("Iron"),
        .itemId = ITEM_IRON,
        .price = 9999,
        .description = sIronDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CALCIUM] =
    {
        .name = _("Calcium"),
        .itemId = ITEM_CALCIUM,
        .price = 9999,
        .description = sCalciumDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_ZINC] =
    {
        .name = _("Zinc"),
        .itemId = ITEM_ZINC,
        .price = 9999,
        .description = sZincDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CARBOS] =
    {
        .name = _("Carbos"),
        .itemId = ITEM_CARBOS,
        .price = 9999,
        .description = sCarbosDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_PP_UP] =
    {
        .name = _("PP Up"),
        .itemId = ITEM_PP_UP,
        .price = 10000,
        .description = sPPUpDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

    [ITEM_PP_MAX] =
    {
        .name = _("PP Max"),
        .itemId = ITEM_PP_MAX,
        .price = 10000,
        .description = sPPMaxDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

// EV Feathers

    [ITEM_HEALTH_FEATHER] =
    {
        .name = _("HealthFeather"),
        .itemId = ITEM_HEALTH_FEATHER,
        .price = 300,
        .description = sHealthFeatherDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_MUSCLE_FEATHER] =
    {
        .name = _("MuscleFeather"),
        .itemId = ITEM_MUSCLE_FEATHER,
        .price = 300,
        .description = sMuscleFeatherDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_RESIST_FEATHER] =
    {
        .name = _("ResistFeather"),
        .itemId = ITEM_RESIST_FEATHER,
        .price = 300,
        .description = sResistFeatherDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_GENIUS_FEATHER] =
    {
        .name = _("GeniusFeather"),
        .itemId = ITEM_GENIUS_FEATHER,
        .price = 300,
        .description = sGeniusFeatherDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CLEVER_FEATHER] =
    {
        .name = _("CleverFeather"),
        .itemId = ITEM_CLEVER_FEATHER,
        .price = 300,
        .description = sCleverFeatherDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_SWIFT_FEATHER] =
    {
        .name = _("SwiftFeather"),
        .itemId = ITEM_SWIFT_FEATHER,
        .price = 300,
        .description = sSwiftFeatherDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

// Ability Modifiers

    [ITEM_ABILITY_CAPSULE] =
    {
        .name = _("Ability Capsule"),
        .itemId = ITEM_ABILITY_CAPSULE,
        .price = 6000,
        .holdEffectParam = 0,
        .description = sAbilityCapsuleDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityCapsule,
    },

    [ITEM_ABILITY_PATCH] =
    {
        .name = _("Ability Patch"),
        .itemId = ITEM_ABILITY_PATCH,
        .price = 0,
        .holdEffectParam = 0,
        .description = sAbilityPatchDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

// Mints

    [ITEM_ADAMANT_MINT] =
    {
        .name = _("Adamant Mint"),
        .itemId = ITEM_ADAMANT_MINT,
        .price = 8800,
        .description = sAdamantMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_ADAMANT,
    },
    [ITEM_BOLD_MINT] =
    {
        .name = _("Bold Mint"),
        .itemId = ITEM_BOLD_MINT,
        .price = 8800,
        .description = sBoldMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_BOLD,
    },
    [ITEM_BRAVE_MINT] =
    {
        .name = _("Brave Mint"),
        .itemId = ITEM_BRAVE_MINT,
        .price = 8800,
        .description = sBraveMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_BRAVE,
    },
    [ITEM_CALM_MINT] =
    {
        .name = _("Calm Mint"),
        .itemId = ITEM_CALM_MINT,
        .price = 8800,
        .description = sCalmMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_CALM,
    },
    [ITEM_CAREFUL_MINT] =
    {
        .name = _("Careful Mint"),
        .itemId = ITEM_CAREFUL_MINT,
        .price = 8800,
        .description = sCarefulMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_CAREFUL,
    },
    [ITEM_GENTLE_MINT] =
    {
        .name = _("Gentle Mint"),
        .itemId = ITEM_GENTLE_MINT,
        .price = 8800,
        .description = sGentleMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_GENTLE,
    },
    [ITEM_HASTY_MINT] =
    {
        .name = _("Hasty Mint"),
        .itemId = ITEM_HASTY_MINT,
        .price = 8800,
        .description = sHastyMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_HASTY,
    },
    [ITEM_IMPISH_MINT] =
    {
        .name = _("Impish Mint"),
        .itemId = ITEM_IMPISH_MINT,
        .price = 8800,
        .description = sImpishMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_IMPISH,
    },
    [ITEM_JOLLY_MINT] =
    {
        .name = _("Jolly Mint"),
        .itemId = ITEM_JOLLY_MINT,
        .price = 8800,
        .description = sJollyMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_JOLLY,
    },
    [ITEM_LAX_MINT] =
    {
        .name = _("Lax Mint"),
        .itemId = ITEM_LAX_MINT,
        .price = 8800,
        .description = sLaxMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_LAX,
    },
    [ITEM_LONELY_MINT] =
    {
        .name = _("Lonely Mint"),
        .itemId = ITEM_LONELY_MINT,
        .price = 8800,
        .description = sLonelyMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_LONELY,
    },
    [ITEM_MILD_MINT] =
    {
        .name = _("Mild Mint"),
        .itemId = ITEM_MILD_MINT,
        .price = 8800,
        .description = sMildMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_MILD,
    },
    [ITEM_MODEST_MINT] =
    {
        .name = _("Modest Mint"),
        .itemId = ITEM_MODEST_MINT,
        .price = 8800,
        .description = sModestMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_MODEST,
    },
    [ITEM_NAIVE_MINT] =
    {
        .name = _("Naive Mint"),
        .itemId = ITEM_NAIVE_MINT,
        .price = 8800,
        .description = sNaiveMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_NAIVE,
    },
    [ITEM_NAUGHTY_MINT] =
    {
        .name = _("Naughty Mint"),
        .itemId = ITEM_NAUGHTY_MINT,
        .price = 8800,
        .description = sNaughtyMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_NAUGHTY,
    },
    [ITEM_QUIET_MINT] =
    {
        .name = _("Quiet Mint"),
        .itemId = ITEM_QUIET_MINT,
        .price = 8800,
        .description = sQuietMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_QUIET,
    },
    [ITEM_RASH_MINT] =
    {
        .name = _("Rash Mint"),
        .itemId = ITEM_RASH_MINT,
        .price = 8800,
        .description = sRashMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_RASH,
    },
    [ITEM_RELAXED_MINT] =
    {
        .name = _("Relaxed Mint"),
        .itemId = ITEM_RELAXED_MINT,
        .price = 8800,
        .description = sRelaxedMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_RELAXED,
    },
    [ITEM_SASSY_MINT] =
    {
        .name = _("Sassy Mint"),
        .itemId = ITEM_SASSY_MINT,
        .price = 8800,
        .description = sSassyMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_SASSY,
    },
    [ITEM_SERIOUS_MINT] =
    {
        .name = _("Serious Mint"),
        .itemId = ITEM_SERIOUS_MINT,
        .price = 3000,
        .description = sSeriousMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_SERIOUS,
    },
    [ITEM_TIMID_MINT] =
    {
        .name = _("Timid Mint"),
        .itemId = ITEM_TIMID_MINT,
        .price = 8800,
        .description = sTimidMintDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_TIMID,
    },

// Candy

    [ITEM_RARE_CANDY] =
    {
        .name = _("Rare Candy"),
        .itemId = ITEM_RARE_CANDY,
        .price = 10000,
        .description = sRareCandyDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    },

    [ITEM_EXP_CANDY_XS] =
    {
        .name = _("Exp.Candy XS"),
        .itemId = ITEM_EXP_CANDY_XS,
        .price = 20,
        .description = sExpCandyXSDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_EXP_CANDY_S] =
    {
        .name = _("Exp.Candy S"),
        .itemId = ITEM_EXP_CANDY_S,
        .price = 240,
        .description = sExpCandyXSDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_EXP_CANDY_M] =
    {
        .name = _("Exp.Candy M"),
        .itemId = ITEM_EXP_CANDY_M,
        .price = 1000,
        .description = sExpCandyMDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_EXP_CANDY_L] =
    {
        .name = _("Exp.Candy L"),
        .itemId = ITEM_EXP_CANDY_L,
        .price = 3000,
        .description = sExpCandyLDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_EXP_CANDY_XL] =
    {
        .name = _("Exp.Candy XL"),
        .itemId = ITEM_EXP_CANDY_XL,
        .price = 10000,
        .description = sExpCandyXLDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_DYNAMAX_CANDY] =
    {
        .name = _("DynamaxCandy"),
        .itemId = ITEM_DYNAMAX_CANDY,
        .price = 0,
        .description = sDynamaxCandyDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

// Medicinal Flutes

    [ITEM_BLUE_FLUTE] =
    {
        .name = _("Blue Flute"),
        .itemId = ITEM_BLUE_FLUTE,
        .price = 20,
        .description = sBlueFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_YELLOW_FLUTE] =
    {
        .name = _("Yellow Flute"),
        .itemId = ITEM_YELLOW_FLUTE,
        .price = 20,
        .description = sYellowFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RED_FLUTE] =
    {
        .name = _("Red Flute"),
        .itemId = ITEM_RED_FLUTE,
        .price = 20,
        .description = sRedFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

// Encounter-modifying Flutes

    [ITEM_BLACK_FLUTE] =
    {
        .name = _("Black Flute"),
        .itemId = ITEM_BLACK_FLUTE,
        .price = 20,
        .holdEffectParam = 50,
        .description = sBlackFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    },

    [ITEM_WHITE_FLUTE] =
    {
        .name = _("White Flute"),
        .itemId = ITEM_WHITE_FLUTE,
        .price = 20,
        .holdEffectParam = 150,
        .description = sWhiteFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    },

// Encounter Modifiers

    [ITEM_REPEL] =
    {
        .name = _("Repel"),
        .itemId = ITEM_REPEL,
        .price = 400,
        .holdEffectParam = 50,
        .description = sRepelDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_SUPER_REPEL] =
    {
        .name = _("Super Repel"),
        .itemId = ITEM_SUPER_REPEL,
        .price = 700,
        .holdEffectParam = 100,
        .description = sSuperRepelDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_MAX_REPEL] =
    {
        .name = _("Max Repel"),
        .itemId = ITEM_MAX_REPEL,
        .price = 1000,
        .holdEffectParam = 150,
        .description = sMaxRepelDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_LURE] =
    {
        .name = _("Lure"),
        .itemId = ITEM_LURE,
        .price = 350,
        .holdEffectParam = 100,
        .description = sLureDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SUPER_LURE] =
    {
        .name = _("Super Lure"),
        .itemId = ITEM_SUPER_LURE,
        .price = 500,
        .holdEffectParam = 200,
        .description = sSuperLureDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_MAX_LURE] =
    {
        .name = _("Max Lure"),
        .itemId = ITEM_MAX_LURE,
        .price = 700,
        .holdEffectParam = 250,
        .description = sMaxLureDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ESCAPE_ROPE] =
    {
        .name = _("Escape Rope"),
        .itemId = ITEM_ESCAPE_ROPE,
        .description = sEscapeRopeDesc,
        #if I_KEY_ESCAPE_ROPE >= GEN_8
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #else
            .price = 500,
            .pocket = POCKET_CONSUMABLES,
        #endif
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
    },

// X Items

    [ITEM_X_ATTACK] =
    {
        .name = _("X Attack"),
        .itemId = ITEM_X_ATTACK,
        .price = 1000,
        .description = sXAttackDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_DEFENSE] =
    {
        .name = _("X Defense"),
        .itemId = ITEM_X_DEFENSE,
        .price = 2000,
        .description = sXDefenseDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SP_ATK] =
    {
        .name = _("X Sp. Atk"),
        .itemId = ITEM_X_SP_ATK,
        .price = 1000,
        .description = sXSpAtkDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SP_DEF] =
    {
        .name = _("X Sp. Def"),
        .itemId = ITEM_X_SP_DEF,
        .price = 2000,
        .description = sXSpDefDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SPEED] =
    {
        .name = _("X Speed"),
        .itemId = ITEM_X_SPEED,
        .price = 1000,
        .description = sXSpeedDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_ACCURACY] =
    {
        .name = _("X Accuracy"),
        .itemId = ITEM_X_ACCURACY,
        .price = 1000,
        .description = sXAccuracyDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_DIRE_HIT] =
    {
        .name = _("Dire Hit"),
        .itemId = ITEM_DIRE_HIT,
        .price = 1000,
        .description = sDireHitDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_GUARD_SPEC] =
    {
        .name = _("Guard Spec."),
        .itemId = ITEM_GUARD_SPEC,
        .price = 1500,
        .description = sGuardSpecDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_POKE_DOLL] =
    {
        .name = _("Poké Doll"),
        .itemId = ITEM_POKE_DOLL,
        .price = 100,
        .description = sPokeDollDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

    [ITEM_FLUFFY_TAIL] =
    {
        .name = _("Fluffy Tail"),
        .itemId = ITEM_FLUFFY_TAIL,
        .price = 100,
        .description = sFluffyTailDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

    [ITEM_POKE_TOY] =
    {
        .name = _("Poké Toy"),
        .itemId = ITEM_POKE_TOY,
        .price = 100,
        .description = sPokeToyDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

    [ITEM_MAX_MUSHROOMS] =
    {
        .name = _("MaxMushrooms"),
        .itemId = ITEM_MAX_MUSHROOMS,
        .price = 8000,
        .description = sMaxMushroomsDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease, // Todo
    },

// Treasures

    [ITEM_BOTTLE_CAP] =
    {
        .name = _("Bottle Cap"),
        .itemId = ITEM_BOTTLE_CAP,
        .price = 5000,
        .description = sBottleCapDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GOLD_BOTTLE_CAP] =
    {
        .name = _("GoldBottlCap"),
        .itemId = ITEM_GOLD_BOTTLE_CAP,
        .price = 10000,
        .description = sGoldBottleCapDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NUGGET] =
    {
        .name = _("Nugget"),
        .itemId = ITEM_NUGGET,
        .price = 10000,
        .description = sNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_NUGGET] =
    {
        .name = _("Big Nugget"),
        .itemId = ITEM_BIG_NUGGET,
        .price = 40000,
        .description = sBigNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TINY_MUSHROOM] =
    {
        .name = _("Tiny Mushroom"),
        .itemId = ITEM_TINY_MUSHROOM,
        .price = 500,
        .description = sTinyMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = _("Big Mushroom"),
        .itemId = ITEM_BIG_MUSHROOM,
        .price = 5000,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BALM_MUSHROOM] =
    {
        .name = _("Balm Mushroom"),
        .itemId = ITEM_BALM_MUSHROOM,
        .price = 15000,
        .description = sBalmMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PEARL] =
    {
        .name = _("Pearl"),
        .itemId = ITEM_PEARL,
        .price = 2000,
        .description = sPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_PEARL] =
    {
        .name = _("Big Pearl"),
        .itemId = ITEM_BIG_PEARL,
        .price = 8000,
        .description = sBigPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PEARL_STRING] =
    {
        .name = _("Pearl String"),
        .itemId = ITEM_PEARL_STRING,
        .price = 20000,
        .description = sPearlStringDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STARDUST] =
    {
        .name = _("Stardust"),
        .itemId = ITEM_STARDUST,
        .price = 3000,
        .description = sStardustDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = _("Star Piece"),
        .itemId = ITEM_STAR_PIECE,
        .price = 12000,
        .description = sStarPieceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COMET_SHARD] =
    {
        .name = _("Comet Shard"),
        .itemId = ITEM_COMET_SHARD,
        .price = 25000,
        .description = sCometShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHOAL_SALT] =
    {
        .name = _("Shoal Salt"),
        .itemId = ITEM_SHOAL_SALT,
        .price = 20,
        .description = sShoalSaltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = _("Shoal Shell"),
        .itemId = ITEM_SHOAL_SHELL,
        .price = 20,
        .description = sShoalShellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_SHARD] =
    {
        .name = _("Red Shard"),
        .itemId = ITEM_RED_SHARD,
        .price = 1000,
        .description = sRedShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = _("Blue Shard"),
        .itemId = ITEM_BLUE_SHARD,
        .price = 1000,
        .description = sBlueShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = _("Yellow Shard"),
        .itemId = ITEM_YELLOW_SHARD,
        .price = 1000,
        .description = sYellowShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = _("Green Shard"),
        .itemId = ITEM_GREEN_SHARD,
        .price = 1000,
        .description = sGreenShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEART_SCALE] =
    {
        .name = _("Heart Scale"),
        .itemId = ITEM_HEART_SCALE,
        .price = 3000,
        .description = sHeartScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HONEY] =
    {
        .name = _("Honey"),
        .itemId = ITEM_HONEY,
        .price = 300,
        .description = sHoneyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RARE_BONE] =
    {
        .name = _("Rare Bone"),
        .itemId = ITEM_RARE_BONE,
        .price = 5000,
        .description = sRareBoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ODD_KEYSTONE] =
    {
        .name = _("Odd Keystone"),
        .itemId = ITEM_ODD_KEYSTONE,
        .price = 2100,
        .description = sOddKeystoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PRETTY_FEATHER] =
    {
        .name = _("Pretty Feather"),
        .itemId = ITEM_PRETTY_FEATHER,
        .price = 1000,
        .description = sPrettyFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_COPPER] =
    {
        .name = _("Relic Copper"),
        .itemId = ITEM_RELIC_COPPER,
        .price = 0,
        .description = sRelicCopperDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_SILVER] =
    {
        .name = _("Relic Silver"),
        .itemId = ITEM_RELIC_SILVER,
        .price = 0,
        .description = sRelicSilverDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_GOLD] =
    {
        .name = _("Relic Gold"),
        .itemId = ITEM_RELIC_GOLD,
        .price = 0,
        .description = sRelicGoldDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_VASE] =
    {
        .name = _("Relic Vase"),
        .itemId = ITEM_RELIC_VASE,
        .price = 0,
        .description = sRelicVaseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_BAND] =
    {
        .name = _("Relic Band"),
        .itemId = ITEM_RELIC_BAND,
        .price = 0,
        .description = sRelicBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_STATUE] =
    {
        .name = _("Relic Statue"),
        .itemId = ITEM_RELIC_STATUE,
        .price = 0,
        .description = sRelicStatueDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_CROWN] =
    {
        .name = _("Relic Crown"),
        .itemId = ITEM_RELIC_CROWN,
        .price = 0,
        .description = sRelicCrownDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STRANGE_SOUVENIR] =
    {
        .name = _("StrngeSouvnr"),
        .itemId = ITEM_STRANGE_SOUVENIR,
        .price = 3000,
        .description = sStrangeSouvenirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Fossils

    [ITEM_HELIX_FOSSIL] =
    {
        .name = _("Helix Fossil"),
        .itemId = ITEM_HELIX_FOSSIL,
        .description = sHelixFossilDesc,
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = _("Dome Fossil"),
        .itemId = ITEM_DOME_FOSSIL,
        .description = sDomeFossilDesc,
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = _("Old Amber"),
        .itemId = ITEM_OLD_AMBER,
        .description = sOldAmberDesc,
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = _("Root Fossil"),
        .itemId = ITEM_ROOT_FOSSIL,
        .description = sRootFossilDesc,
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = _("Claw Fossil"),
        .itemId = ITEM_CLAW_FOSSIL,
        .description = sClawFossilDesc,
        .price = 0,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ARMOR_FOSSIL] =
    {
        .name = _("Armor Fossil"),
        .itemId = ITEM_ARMOR_FOSSIL,
        .price = 7000,
        .description = sArmorFossilDesc,
        .pocket = POCKET_KEY_ITEMS,
        .importance = 1,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SKULL_FOSSIL] =
    {
        .name = _("Skull Fossil"),
        .itemId = ITEM_SKULL_FOSSIL,
        .price = 7000,
        .description = sSkullFossilDesc,
        .pocket = POCKET_KEY_ITEMS,
        .importance = 1,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COVER_FOSSIL] =
    {
        .name = _("Cover Fossil"),
        .itemId = ITEM_COVER_FOSSIL,
        .price = 7000,
        .description = sCoverFossilDesc,
        .pocket = POCKET_KEY_ITEMS,
        .importance = 1,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PLUME_FOSSIL] =
    {
        .name = _("Plume Fossil"),
        .itemId = ITEM_PLUME_FOSSIL,
        .price = 7000,
        .description = sPlumeFossilDesc,
        .pocket = POCKET_KEY_ITEMS,
        .importance = 1,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_JAW_FOSSIL] =
    {
        .name = _("Jaw Fossil"),
        .itemId = ITEM_JAW_FOSSIL,
        .price = 7000,
        .description = sJawFossilDesc,
        .pocket = POCKET_KEY_ITEMS,
        .importance = 1,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAIL_FOSSIL] =
    {
        .name = _("Sail Fossil"),
        .itemId = ITEM_SAIL_FOSSIL,
        .price = 7000,
        .description = sSailFossilDesc,
        .pocket = POCKET_KEY_ITEMS,
        .importance = 1,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOSSILIZED_BIRD] =
    {
        .name = _("FosslzedBird"),
        .itemId = ITEM_FOSSILIZED_BIRD,
        .price = 5000,
        .description = sFossilizedBirdDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOSSILIZED_FISH] =
    {
        .name = _("FosslzedFish"),
        .itemId = ITEM_FOSSILIZED_FISH,
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOSSILIZED_DRAKE] =
    {
        .name = _("FosslzedDrke"),
        .itemId = ITEM_FOSSILIZED_DRAKE,
        .price = 5000,
        .description = sFossilizedDrakeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOSSILIZED_DINO] =
    {
        .name = _("FosslzedDino"),
        .itemId = ITEM_FOSSILIZED_DINO,
        .price = 5000,
        .description = sFossilizedDinoDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mulch

    [ITEM_GROWTH_MULCH] =
    {
        .name = _("Growth Mulch"),
        .itemId = ITEM_GROWTH_MULCH,
        .price = 200,
        .description = sGrowthMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_DAMP_MULCH] =
    {
        .name = _("Damp Mulch"),
        .itemId = ITEM_DAMP_MULCH,
        .price = 200,
        .description = sDampMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_STABLE_MULCH] =
    {
        .name = _("Stable Mulch"),
        .itemId = ITEM_STABLE_MULCH,
        .price = 200,
        .description = sStableMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_GOOEY_MULCH] =
    {
        .name = _("Gooey Mulch"),
        .itemId = ITEM_GOOEY_MULCH,
        .price = 200,
        .description = sGooeyMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_RICH_MULCH] =
    {
        .name = _("Rich Mulch"),
        .itemId = ITEM_RICH_MULCH,
        .price = 200,
        .description = sRichMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_SURPRISE_MULCH] =
    {
        .name = _("SurprseMulch"),
        .itemId = ITEM_SURPRISE_MULCH,
        .price = 200,
        .description = sSurpriseMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_BOOST_MULCH] =
    {
        .name = _("Boost Mulch"),
        .itemId = ITEM_BOOST_MULCH,
        .price = 200,
        .description = sBoostMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_AMAZE_MULCH] =
    {
        .name = _("Amaze Mulch"),
        .itemId = ITEM_AMAZE_MULCH,
        .price = 200,
        .description = sAmazeMulchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

// Apricorns

    [ITEM_RED_APRICORN] =
    {
        .name = _("Red Apricorn"),
        .itemId = ITEM_RED_APRICORN,
        .price = 200,
        .description = sRedApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_APRICORN] =
    {
        .name = _("Blue Apricorn"),
        .itemId = ITEM_BLUE_APRICORN,
        .price = 200,
        .description = sBlueApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_APRICORN] =
    {
        .name = _("YellwApricorn"),
        .itemId = ITEM_YELLOW_APRICORN,
        .price = 200,
        .description = sYellowApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_APRICORN] =
    {
        .name = _("GreenApricorn"),
        .itemId = ITEM_GREEN_APRICORN,
        .price = 200,
        .description = sGreenApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINK_APRICORN] =
    {
        .name = _("Pink Apricorn"),
        .itemId = ITEM_PINK_APRICORN,
        .price = 200,
        .description = sPinkApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHITE_APRICORN] =
    {
        .name = _("WhiteApricorn"),
        .itemId = ITEM_WHITE_APRICORN,
        .price = 200,
        .description = sWhiteApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_APRICORN] =
    {
        .name = _("BlackApricorn"),
        .itemId = ITEM_BLACK_APRICORN,
        .price = 200,
        .description = sBlackApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WISHING_PIECE] =
    {
        .name = _("WishingPiece"),
        .itemId = ITEM_WISHING_PIECE,
        .price = 20,
        .description = sWishingPieceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_GALARICA_TWIG] =
    {
        .name = _("GalaricaTwig"),
        .itemId = ITEM_GALARICA_TWIG,
        .price = 40,
        .description = sGalaricaTwigDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ARMORITE_ORE] =
    {
        .name = _("Armorite Ore"),
        .itemId = ITEM_ARMORITE_ORE,
        .price = 40,
        .description = sArmoriteOreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DYNITE_ORE] =
    {
        .name = _("Dynite Ore"),
        .itemId = ITEM_DYNITE_ORE,
        .price = 20,
        .description = sDyniteOreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mail

    [ITEM_ORANGE_MAIL] =
    {
        .name = _("Orange Mail"),
        .itemId = ITEM_ORANGE_MAIL,
        .price = 50,
        .description = sOrangeMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = _("Harbor Mail"),
        .itemId = ITEM_HARBOR_MAIL,
        .price = 50,
        .description = sHarborMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = _("Glitter Mail"),
        .itemId = ITEM_GLITTER_MAIL,
        .price = 50,
        .description = sGlitterMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
    },

    [ITEM_MECH_MAIL] =
    {
        .name = _("Mech Mail"),
        .itemId = ITEM_MECH_MAIL,
        .price = 50,
        .description = sMechMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = _("Wood Mail"),
        .itemId = ITEM_WOOD_MAIL,
        .price = 50,
        .description = sWoodMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = _("Wave Mail"),
        .itemId = ITEM_WAVE_MAIL,
        .price = 50,
        .description = sWaveMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = _("Bead Mail"),
        .itemId = ITEM_BEAD_MAIL,
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = _("Shadow Mail"),
        .itemId = ITEM_SHADOW_MAIL,
        .price = 50,
        .description = sShadowMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = _("Tropic Mail"),
        .itemId = ITEM_TROPIC_MAIL,
        .price = 50,
        .description = sTropicMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = _("Dream Mail"),
        .itemId = ITEM_DREAM_MAIL,
        .price = 50,
        .description = sDreamMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
    },

    [ITEM_FAB_MAIL] =
    {
        .name = _("Fab Mail"),
        .itemId = ITEM_FAB_MAIL,
        .price = 50,
        .description = sFabMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = _("Retro Mail"),
        .itemId = ITEM_RETRO_MAIL,
        .price = 50,
        .description = sRetroMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
    },

// Evolution Items

    [ITEM_FIRE_STONE] =
    {
        .name = _("Fire Stone"),
        .itemId = ITEM_FIRE_STONE,
        .price = 3000,
        .description = sFireStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_WATER_STONE] =
    {
        .name = _("Water Stone"),
        .itemId = ITEM_WATER_STONE,
        .price = 3000,
        .description = sWaterStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_THUNDER_STONE] =
    {
        .name = _("Thunder Stone"),
        .itemId = ITEM_THUNDER_STONE,
        .price = 3000,
        .description = sThunderStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_LEAF_STONE] =
    {
        .name = _("Leaf Stone"),
        .itemId = ITEM_LEAF_STONE,
        .price = 3000,
        .description = sLeafStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_ICE_STONE] =
    {
        .name = _("Ice Stone"),
        .itemId = ITEM_ICE_STONE,
        .price = 3000,
        .description = sIceStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_SUN_STONE] =
    {
        .name = _("Sun Stone"),
        .itemId = ITEM_SUN_STONE,
        .price = 3000,
        .description = sSunStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_MOON_STONE] =
    {
        .name = _("Moon Stone"),
        .itemId = ITEM_MOON_STONE,
        .price = 3000,
        .description = sMoonStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_SHINY_STONE] =
    {
        .name = _("Shiny Stone"),
        .itemId = ITEM_SHINY_STONE,
        .price = 3000,
        .description = sShinyStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_DUSK_STONE] =
    {
        .name = _("Dusk Stone"),
        .itemId = ITEM_DUSK_STONE,
        .price = 3000,
        .description = sDuskStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_DAWN_STONE] =
    {
        .name = _("Dawn Stone"),
        .itemId = ITEM_DAWN_STONE,
        .price = 3000,
        .description = sDawnStoneDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_SWEET_APPLE] =
    {
        .name = _("Sweet Apple"),
        .itemId = ITEM_SWEET_APPLE,
        .price = 2200,
        .description = sSweetAppleDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_TART_APPLE] =
    {
        .name = _("Tart Apple"),
        .itemId = ITEM_TART_APPLE,
        .price = 2200,
        .description = sTartAppleDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_CRACKED_POT] =
    {
        .name = _("Cracked Pot"),
        .itemId = ITEM_CRACKED_POT,
        .price = 1600,
        .description = sCrackedPotDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_CHIPPED_POT] =
    {
        .name = _("Chipped Pot"),
        .itemId = ITEM_CHIPPED_POT,
        .price = 38000,
        .description = sChippedPotDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_GALARICA_CUFF] =
    {
        .name = _("GalaricaCuff"),
        .itemId = ITEM_GALARICA_CUFF,
        .price = 6000,
        .description = sGalaricaCuffDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_GALARICA_WREATH] =
    {
        .name = _("GalrcaWreath"),
        .itemId = ITEM_GALARICA_WREATH,
        .price = 6000,
        .description = sGalaricaWreathDesc,
        .pocket = POCKET_CONSUMABLES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_DRAGON_SCALE] =
    {
        .name = _("Dragon Scale"),
        .itemId = ITEM_DRAGON_SCALE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
        .description = sDragonScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_UPGRADE] =
    {
        .name = _("Upgrade"),
        .itemId = ITEM_UPGRADE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_UPGRADE,
        .description = sUpgradeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PROTECTOR] =
    {
        .name = _("Protector"),
        .itemId = ITEM_PROTECTOR,
        .price = 2000,
        .description = sProtectorDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ELECTIRIZER] =
    {
        .name = _("Electirizer"),
        .itemId = ITEM_ELECTIRIZER,
        .price = 2000,
        .description = sElectirizerDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGMARIZER] =
    {
        .name = _("Magmarizer"),
        .itemId = ITEM_MAGMARIZER,
        .price = 2000,
        .description = sMagmarizerDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DUBIOUS_DISC] =
    {
        .name = _("Dubious Disc"),
        .itemId = ITEM_DUBIOUS_DISC,
        .price = 2000,
        .description = sDubiousDiscDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_REAPER_CLOTH] =
    {
        .name = _("Reaper Cloth"),
        .itemId = ITEM_REAPER_CLOTH,
        .price = 2000,
        .description = sReaperClothDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PRISM_SCALE] =
    {
        .name = _("Prism Scale"),
        .itemId = ITEM_PRISM_SCALE,
        .price = 2000,
        .description = sPrismScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHIPPED_DREAM] =
    {
        .name = _("Whipped Dream"),
        .itemId = ITEM_WHIPPED_DREAM,
        .price = 2000,
        .description = sWhippedDreamDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SACHET] =
    {
        .name = _("Sachet"),
        .itemId = ITEM_SACHET,
        .price = 2000,
        .description = sSachetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OVAL_STONE] =
    {
        .name = _("Oval Stone"),
        .itemId = ITEM_OVAL_STONE,
        .price = 2000,
        .description = sOvalStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STRAWBERRY_SWEET] =
    {
        .name = _("StrwbrySweet"),
        .itemId = ITEM_STRAWBERRY_SWEET,
        .price = 500,
        .description = sStrawberrySweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LOVE_SWEET] =
    {
        .name = _("Love Sweet"),
        .itemId = ITEM_LOVE_SWEET,
        .price = 500,
        .description = sLoveSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BERRY_SWEET] =
    {
        .name = _("Berry Sweet"),
        .itemId = ITEM_BERRY_SWEET,
        .price = 500,
        .description = sBerrySweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLOVER_SWEET] =
    {
        .name = _("Clover Sweet"),
        .itemId = ITEM_CLOVER_SWEET,
        .price = 500,
        .description = sCloverSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FLOWER_SWEET] =
    {
        .name = _("Flower Sweet"),
        .itemId = ITEM_FLOWER_SWEET,
        .price = 500,
        .description = sFlowerSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STAR_SWEET] =
    {
        .name = _("Star Sweet"),
        .itemId = ITEM_STAR_SWEET,
        .price = 500,
        .description = sStarSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RIBBON_SWEET] =
    {
        .name = _("Ribbon Sweet"),
        .itemId = ITEM_RIBBON_SWEET,
        .price = 500,
        .description = sRibbonSweetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EVERSTONE] =
    {
        .name = _("Everstone"),
        .itemId = ITEM_EVERSTONE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = sEverstoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Nectars

    [ITEM_RED_NECTAR] =
    {
        .name = _("Red Nectar"),
        .itemId = ITEM_RED_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
        .description = sRedNectarDesc,
        .pocket = POCKET_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_YELLOW_NECTAR] =
    {
        .name = _("Yellow Nectar"),
        .itemId = ITEM_YELLOW_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
        .description = sYellowNectarDesc,
        .pocket = POCKET_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_PINK_NECTAR] =
    {
        .name = _("Pink Nectar"),
        .itemId = ITEM_PINK_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
        .description = sPinkNectarDesc,
        .pocket = POCKET_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_PURPLE_NECTAR] =
    {
        .name = _("Purple Nectar"),
        .itemId = ITEM_PURPLE_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
        .description = sPurpleNectarDesc,
        .pocket = POCKET_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

// Plates

    [ITEM_FLAME_PLATE] =
    {
        .name = _("Flame Plate"),
        .itemId = ITEM_FLAME_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sFlamePlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_SPLASH_PLATE] =
    {
        .name = _("Splash Plate"),
        .itemId = ITEM_SPLASH_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sSplashPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ZAP_PLATE] =
    {
        .name = _("Zap Plate"),
        .itemId = ITEM_ZAP_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sZapPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_MEADOW_PLATE] =
    {
        .name = _("Meadow Plate"),
        .itemId = ITEM_MEADOW_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sMeadowPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICICLE_PLATE] =
    {
        .name = _("Icicle Plate"),
        .itemId = ITEM_ICICLE_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sIciclePlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIST_PLATE] =
    {
        .name = _("Fist Plate"),
        .itemId = ITEM_FIST_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sFistPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_TOXIC_PLATE] =
    {
        .name = _("Toxic Plate"),
        .itemId = ITEM_TOXIC_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sToxicPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_EARTH_PLATE] =
    {
        .name = _("Earth Plate"),
        .itemId = ITEM_EARTH_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sEarthPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_SKY_PLATE] =
    {
        .name = _("Sky Plate"),
        .itemId = ITEM_SKY_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sSkyPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_MIND_PLATE] =
    {
        .name = _("Mind Plate"),
        .itemId = ITEM_MIND_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sMindPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_INSECT_PLATE] =
    {
        .name = _("Insect Plate"),
        .itemId = ITEM_INSECT_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sInsectPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_STONE_PLATE] =
    {
        .name = _("Stone Plate"),
        .itemId = ITEM_STONE_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sStonePlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_SPOOKY_PLATE] =
    {
        .name = _("Spooky Plate"),
        .itemId = ITEM_SPOOKY_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sSpookyPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRACO_PLATE] =
    {
        .name = _("Draco Plate"),
        .itemId = ITEM_DRACO_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sDracoPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DREAD_PLATE] =
    {
        .name = _("Dread Plate"),
        .itemId = ITEM_DREAD_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sDreadPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_IRON_PLATE] =
    {
        .name = _("Iron Plate"),
        .itemId = ITEM_IRON_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sIronPlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_PIXIE_PLATE] =
    {
        .name = _("Pixie Plate"),
        .itemId = ITEM_PIXIE_PLATE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = sPixiePlateDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

// Drives

    [ITEM_DOUSE_DRIVE] =
    {
        .name = _("Douse Drive"),
        .itemId = ITEM_DOUSE_DRIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sDouseDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_SHOCK_DRIVE] =
    {
        .name = _("Shock Drive"),
        .itemId = ITEM_SHOCK_DRIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sShockDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_BURN_DRIVE] =
    {
        .name = _("Burn Drive"),
        .itemId = ITEM_BURN_DRIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sBurnDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_CHILL_DRIVE] =
    {
        .name = _("Chill Drive"),
        .itemId = ITEM_CHILL_DRIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sChillDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

// Memories

    [ITEM_FIRE_MEMORY] =
    {
        .name = _("Fire Memory"),
        .itemId = ITEM_FIRE_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFireMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_WATER_MEMORY] =
    {
        .name = _("Water Memory"),
        .itemId = ITEM_WATER_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sWaterMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ELECTRIC_MEMORY] =
    {
        .name = _("Electric Memory"),
        .itemId = ITEM_ELECTRIC_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sElectricMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_GRASS_MEMORY] =
    {
        .name = _("Grass Memory"),
        .itemId = ITEM_GRASS_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGrassMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICE_MEMORY] =
    {
        .name = _("Ice Memory"),
        .itemId = ITEM_ICE_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sIceMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIGHTING_MEMORY] =
    {
        .name = _("Fighting Memory"),
        .itemId = ITEM_FIGHTING_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFightingMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_POISON_MEMORY] =
    {
        .name = _("Poison Memory"),
        .itemId = ITEM_POISON_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sPoisonMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_GROUND_MEMORY] =
    {
        .name = _("Ground Memory"),
        .itemId = ITEM_GROUND_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGroundMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_FLYING_MEMORY] =
    {
        .name = _("Flying Memory"),
        .itemId = ITEM_FLYING_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFlyingMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_PSYCHIC_MEMORY] =
    {
        .name = _("Psychic Memory"),
        .itemId = ITEM_PSYCHIC_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sPsychicMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_BUG_MEMORY] =
    {
        .name = _("Bug Memory"),
        .itemId = ITEM_BUG_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sBugMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_ROCK_MEMORY] =
    {
        .name = _("Rock Memory"),
        .itemId = ITEM_ROCK_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sRockMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_GHOST_MEMORY] =
    {
        .name = _("Ghost Memory"),
        .itemId = ITEM_GHOST_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGhostMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRAGON_MEMORY] =
    {
        .name = _("Dragon Memory"),
        .itemId = ITEM_DRAGON_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sDragonMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DARK_MEMORY] =
    {
        .name = _("Dark Memory"),
        .itemId = ITEM_DARK_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sDarkMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_STEEL_MEMORY] =
    {
        .name = _("Steel Memory"),
        .itemId = ITEM_STEEL_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sSteelMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_FAIRY_MEMORY] =
    {
        .name = _("Fairy Memory"),
        .itemId = ITEM_FAIRY_MEMORY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFairyMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

    [ITEM_RUSTED_SWORD] =
    {
        .name = _("RustedSword"),
        .itemId = ITEM_RUSTED_SWORD,
        .price = 0,
        .description = sRustedSwordDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUSTED_SHIELD] =
    {
        .name = _("RustedShield"),
        .itemId = ITEM_RUSTED_SHIELD,
        .price = 0,
        .description = sRustedShieldDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Colored Orbs

    [ITEM_RED_ORB] =
    {
        .name = _("Red Orb"),
        .itemId = ITEM_RED_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = sRedOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_ORB] =
    {
        .name = _("Blue Orb"),
        .itemId = ITEM_BLUE_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = sBlueOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mega Stones

    [ITEM_VENUSAURITE] =
    {
        .name = _("Venusaurite"),
        .itemId = ITEM_VENUSAURITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sVenusauriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARIZARDITE_X] =
    {
        .name = _("Charizardite X"),
        .itemId = ITEM_CHARIZARDITE_X,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARIZARDITE_Y] =
    {
        .name = _("Charizardite Y"),
        .itemId = ITEM_CHARIZARDITE_Y,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLASTOISINITE] =
    {
        .name = _("Blastoisinite"),
        .itemId = ITEM_BLASTOISINITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBlastoisiniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BEEDRILLITE] =
    {
        .name = _("Beedrillite"),
        .itemId = ITEM_BEEDRILLITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBeedrilliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PIDGEOTITE] =
    {
        .name = _("Pidgeotite"),
        .itemId = ITEM_PIDGEOTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sPidgeotiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ALAKAZITE] =
    {
        .name = _("Alakazite"),
        .itemId = ITEM_ALAKAZITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAlakaziteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SLOWBRONITE] =
    {
        .name = _("Slowbronite"),
        .itemId = ITEM_SLOWBRONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSlowbroniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GENGARITE] =
    {
        .name = _("Gengarite"),
        .itemId = ITEM_GENGARITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGengariteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KANGASKHANITE] =
    {
        .name = _("Kangaskhanite"),
        .itemId = ITEM_KANGASKHANITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sKangaskhaniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINSIRITE] =
    {
        .name = _("Pinsirite"),
        .itemId = ITEM_PINSIRITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sPinsiriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GYARADOSITE] =
    {
        .name = _("Gyaradosite"),
        .itemId = ITEM_GYARADOSITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGyaradositeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AERODACTYLITE] =
    {
        .name = _("Aerodactylite"),
        .itemId = ITEM_AERODACTYLITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAerodactyliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEWTWONITE_X] =
    {
        .name = _("Mewtwonite X"),
        .itemId = ITEM_MEWTWONITE_X,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEWTWONITE_Y] =
    {
        .name = _("Mewtwonite Y"),
        .itemId = ITEM_MEWTWONITE_Y,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AMPHAROSITE] =
    {
        .name = _("Ampharosite"),
        .itemId = ITEM_AMPHAROSITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAmpharositeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STEELIXITE] =
    {
        .name = _("Steelixite"),
        .itemId = ITEM_STEELIXITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSteelixiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCIZORITE] =
    {
        .name = _("Scizorite"),
        .itemId = ITEM_SCIZORITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sScizoriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HERACRONITE] =
    {
        .name = _("Heracronite"),
        .itemId = ITEM_HERACRONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sHeracroniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HOUNDOOMINITE] =
    {
        .name = _("Houndoominite"),
        .itemId = ITEM_HOUNDOOMINITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sHoundoominiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TYRANITARITE] =
    {
        .name = _("Tyranitarite"),
        .itemId = ITEM_TYRANITARITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sTyranitariteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCEPTILITE] =
    {
        .name = _("Sceptilite"),
        .itemId = ITEM_SCEPTILITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSceptiliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLAZIKENITE] =
    {
        .name = _("Blazikenite"),
        .itemId = ITEM_BLAZIKENITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBlazikeniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SWAMPERTITE] =
    {
        .name = _("Swampertite"),
        .itemId = ITEM_SWAMPERTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSwampertiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GARDEVOIRITE] =
    {
        .name = _("Gardevoirite"),
        .itemId = ITEM_GARDEVOIRITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGardevoiriteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SABLENITE] =
    {
        .name = _("Sablenite"),
        .itemId = ITEM_SABLENITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSableniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAWILITE] =
    {
        .name = _("Mawilite"),
        .itemId = ITEM_MAWILITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMawiliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AGGRONITE] =
    {
        .name = _("Aggronite"),
        .itemId = ITEM_AGGRONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAggroniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEDICHAMITE] =
    {
        .name = _("Medichamite"),
        .itemId = ITEM_MEDICHAMITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMedichamiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MANECTITE] =
    {
        .name = _("Manectite"),
        .itemId = ITEM_MANECTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sManectiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHARPEDONITE] =
    {
        .name = _("Sharpedonite"),
        .itemId = ITEM_SHARPEDONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSharpedoniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CAMERUPTITE] =
    {
        .name = _("Cameruptite"),
        .itemId = ITEM_CAMERUPTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCameruptiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ALTARIANITE] =
    {
        .name = _("Altarianite"),
        .itemId = ITEM_ALTARIANITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAltarianiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BANETTITE] =
    {
        .name = _("Banettite"),
        .itemId = ITEM_BANETTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBanettiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ABSOLITE] =
    {
        .name = _("Absolite"),
        .itemId = ITEM_ABSOLITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAbsoliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GLALITITE] =
    {
        .name = _("Glalitite"),
        .itemId = ITEM_GLALITITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGlalititeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SALAMENCITE] =
    {
        .name = _("Salamencite"),
        .itemId = ITEM_SALAMENCITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSalamenciteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAGROSSITE] =
    {
        .name = _("Metagrossite"),
        .itemId = ITEM_METAGROSSITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMetagrossiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LATIASITE] =
    {
        .name = _("Latiasite"),
        .itemId = ITEM_LATIASITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLatiasiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LATIOSITE] =
    {
        .name = _("Latiosite"),
        .itemId = ITEM_LATIOSITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLatiositeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LOPUNNITE] =
    {
        .name = _("Lopunnite"),
        .itemId = ITEM_LOPUNNITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLopunniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GARCHOMPITE] =
    {
        .name = _("Garchompite"),
        .itemId = ITEM_GARCHOMPITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGarchompiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCARIONITE] =
    {
        .name = _("Lucarionite"),
        .itemId = ITEM_LUCARIONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLucarioniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ABOMASITE] =
    {
        .name = _("Abomasite"),
        .itemId = ITEM_ABOMASITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAbomasiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GALLADITE] =
    {
        .name = _("Galladite"),
        .itemId = ITEM_GALLADITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGalladiteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AUDINITE] =
    {
        .name = _("Audinite"),
        .itemId = ITEM_AUDINITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAudiniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DIANCITE] =
    {
        .name = _("Diancite"),
        .itemId = ITEM_DIANCITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sDianciteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Gems

    [ITEM_NORMAL_GEM] =
    {
        .name = _("Normal Gem"),
        .itemId = ITEM_NORMAL_GEM,
        .price = 250,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sNormalGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
    },

    [ITEM_FIRE_GEM] =
    {
        .name = _("Fire Gem"),
        .itemId = ITEM_FIRE_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sFireGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_WATER_GEM] =
    {
        .name = _("Water Gem"),
        .itemId = ITEM_WATER_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sWaterGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ELECTRIC_GEM] =
    {
        .name = _("Electric Gem"),
        .itemId = ITEM_ELECTRIC_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sElectricGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_GRASS_GEM] =
    {
        .name = _("Grass Gem"),
        .itemId = ITEM_GRASS_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sGrassGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICE_GEM] =
    {
        .name = _("Ice Gem"),
        .itemId = ITEM_ICE_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sIceGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIGHTING_GEM] =
    {
        .name = _("Fighting Gem"),
        .itemId = ITEM_FIGHTING_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sFightingGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_POISON_GEM] =
    {
        .name = _("Poison Gem"),
        .itemId = ITEM_POISON_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sPoisonGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_GROUND_GEM] =
    {
        .name = _("Ground Gem"),
        .itemId = ITEM_GROUND_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sGroundGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_FLYING_GEM] =
    {
        .name = _("Flying Gem"),
        .itemId = ITEM_FLYING_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sFlyingGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_PSYCHIC_GEM] =
    {
        .name = _("Psychic Gem"),
        .itemId = ITEM_PSYCHIC_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sPsychicGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_BUG_GEM] =
    {
        .name = _("Bug Gem"),
        .itemId = ITEM_BUG_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sBugGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_ROCK_GEM] =
    {
        .name = _("Rock Gem"),
        .itemId = ITEM_ROCK_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sRockGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_GHOST_GEM] =
    {
        .name = _("Ghost Gem"),
        .itemId = ITEM_GHOST_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sGhostGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRAGON_GEM] =
    {
        .name = _("Dragon Gem"),
        .itemId = ITEM_DRAGON_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sDragonGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DARK_GEM] =
    {
        .name = _("Dark Gem"),
        .itemId = ITEM_DARK_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sDarkGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_STEEL_GEM] =
    {
        .name = _("Steel Gem"),
        .itemId = ITEM_STEEL_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sSteelGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_FAIRY_GEM] =
    {
        .name = _("Fairy Gem"),
        .itemId = ITEM_FAIRY_GEM,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 30,
        .description = sFairyGemDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

// Z-Crystals

    [ITEM_NORMALIUM_Z] =
    {
        .name = _("Normalium Z"),
        .itemId = ITEM_NORMALIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sNormaliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL
    },

    [ITEM_FIRIUM_Z] =
    {
        .name = _("Firium Z"),
        .itemId = ITEM_FIRIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFiriumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE
    },

    [ITEM_WATERIUM_Z] =
    {
        .name = _("Waterium Z"),
        .itemId = ITEM_WATERIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sWateriumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER
    },

    [ITEM_ELECTRIUM_Z] =
    {
        .name = _("Electrium Z"),
        .itemId = ITEM_ELECTRIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sElectriumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC
    },

    [ITEM_GRASSIUM_Z] =
    {
        .name = _("Grassium Z"),
        .itemId = ITEM_GRASSIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGrassiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS
    },

    [ITEM_ICIUM_Z] =
    {
        .name = _("Icium Z"),
        .itemId = ITEM_ICIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sIciumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE
    },

    [ITEM_FIGHTINIUM_Z] =
    {
        .name = _("Fightinium Z"),
        .itemId = ITEM_FIGHTINIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFightiniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING
    },

    [ITEM_POISONIUM_Z] =
    {
        .name = _("Poisonium Z"),
        .itemId = ITEM_POISONIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPoisoniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON
    },

    [ITEM_GROUNDIUM_Z] =
    {
        .name = _("Groundium Z"),
        .itemId = ITEM_GROUNDIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGroundiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND
    },

    [ITEM_FLYINIUM_Z] =
    {
        .name = _("Flyinium Z"),
        .itemId = ITEM_FLYINIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFlyiniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING
    },

    [ITEM_PSYCHIUM_Z] =
    {
        .name = _("Psychium Z"),
        .itemId = ITEM_PSYCHIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPsychiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC
    },

    [ITEM_BUGINIUM_Z] =
    {
        .name = _("Buginium Z"),
        .itemId = ITEM_BUGINIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sBuginiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG
    },

    [ITEM_ROCKIUM_Z] =
    {
        .name = _("Rockium Z"),
        .itemId = ITEM_ROCKIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sRockiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK
    },

    [ITEM_GHOSTIUM_Z] =
    {
        .name = _("Ghostium Z"),
        .itemId = ITEM_GHOSTIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGhostiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST
    },

    [ITEM_DRAGONIUM_Z] =
    {
        .name = _("Dragonium Z"),
        .itemId = ITEM_DRAGONIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDragoniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON
    },

    [ITEM_DARKINIUM_Z] =
    {
        .name = _("Darkinium Z"),
        .itemId = ITEM_DARKINIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDarkiniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK
    },

    [ITEM_STEELIUM_Z] =
    {
        .name = _("Steelium Z"),
        .itemId = ITEM_STEELIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSteeliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL
    },

    [ITEM_FAIRIUM_Z] =
    {
        .name = _("Fairium Z"),
        .itemId = ITEM_FAIRIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFairiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY
    },

    [ITEM_PIKANIUM_Z] =
    {
        .name = _("Pikanium Z"),
        .itemId = ITEM_PIKANIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPikaniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_EEVIUM_Z] =
    {
        .name = _("Eevium Z"),
        .itemId = ITEM_EEVIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sEeviumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_SNORLIUM_Z] =
    {
        .name = _("Snorlium Z"),
        .itemId = ITEM_SNORLIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSnorliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MEWNIUM_Z] =
    {
        .name = _("Mewnium Z"),
        .itemId = ITEM_MEWNIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMewniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_DECIDIUM_Z] =
    {
        .name = _("Decidium Z"),
        .itemId = ITEM_DECIDIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDecidiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_INCINIUM_Z] =
    {
        .name = _("Incinium Z"),
        .itemId = ITEM_INCINIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sInciniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_PRIMARIUM_Z] =
    {
        .name = _("Primarium Z"),
        .itemId = ITEM_PRIMARIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPrimariumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_LYCANIUM_Z] =
    {
        .name = _("Lycanium Z"),
        .itemId = ITEM_LYCANIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sLycaniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MIMIKIUM_Z] =
    {
        .name = _("Mimikium Z"),
        .itemId = ITEM_MIMIKIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMimikiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_KOMMONIUM_Z] =
    {
        .name = _("Kommonium Z"),
        .itemId = ITEM_KOMMONIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sKommoniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_TAPUNIUM_Z] =
    {
        .name = _("Tapunium Z"),
        .itemId = ITEM_TAPUNIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sTapuniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  //signature z move
    },

    [ITEM_SOLGANIUM_Z] =
    {
        .name = _("Solganium Z"),
        .itemId = ITEM_SOLGANIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSolganiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_LUNALIUM_Z] =
    {
        .name = _("Lunalium Z"),
        .itemId = ITEM_LUNALIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sLunaliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MARSHADIUM_Z] =
    {
        .name = _("Marshadium Z"),
        .itemId = ITEM_MARSHADIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMarshadiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_ALORAICHIUM_Z] =
    {
        .name = _("Aloraichium Z"),
        .itemId = ITEM_ALORAICHIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sAloraichiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_PIKASHUNIUM_Z] =
    {
        .name = _("Pikashunium Z"),
        .itemId = ITEM_PIKASHUNIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPikashuniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_ULTRANECROZIUM_Z] =
    {
        .name = _("U-Necrozium Z"),
        .itemId = ITEM_ULTRANECROZIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sUltranecroziumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  //signature z move
    },

// Species-specific Held Items

    [ITEM_LIGHT_BALL] =
    {
        .name = _("Light Ball"),
        .itemId = ITEM_LIGHT_BALL,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = sLightBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LEEK] =
    {
        .name = _("Leek"),
        .itemId = ITEM_LEEK,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LEEK,
        .description = sLeekDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_THICK_CLUB] =
    {
        .name = _("Thick Club"),
        .itemId = ITEM_THICK_CLUB,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = sThickClubDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKY_PUNCH] =
    {
        .name = _("Lucky Punch"),
        .itemId = ITEM_LUCKY_PUNCH,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = sLuckyPunchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAL_POWDER] =
    {
        .name = _("Metal Powder"),
        .itemId = ITEM_METAL_POWDER,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = sMetalPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_QUICK_POWDER] =
    {
        .name = _("Quick Powder"),
        .itemId = ITEM_QUICK_POWDER,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_QUICK_POWDER,
        .description = sQuickPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
        .name = _("Deep Sea Scale"),
        .itemId = ITEM_DEEP_SEA_SCALE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = sDeepSeaScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
        .name = _("Deep Sea Tooth"),
        .itemId = ITEM_DEEP_SEA_TOOTH,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = sDeepSeaToothDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOUL_DEW] =
    {
        .name = _("Soul Dew"),
        .itemId = ITEM_SOUL_DEW,
        .price = 0,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        #if defined(BATTLE_ENGINE) && B_SOUL_DEW_BOOST >= GEN_7
            .holdEffectParam = 20,
        #else
            .holdEffectParam = 50,
        #endif
        .description = sSoulDewDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ADAMANT_ORB] =
    {
        .name = _("Adamant Orb"),
        .itemId = ITEM_ADAMANT_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 20,
        .description = sAdamantOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUSTROUS_ORB] =
    {
        .name = _("Lustrous Orb"),
        .itemId = ITEM_LUSTROUS_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 20,
        .description = sLustrousOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRISEOUS_ORB] =
    {
        .name = _("Griseous Orb"),
        .itemId = ITEM_GRISEOUS_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 20,
        .description = sGriseousOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Incenses

    [ITEM_SEA_INCENSE] =
    {
        .name = _("Sea Incense"),
        .itemId = ITEM_SEA_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = _("Lax Incense"),
        .itemId = ITEM_LAX_INCENSE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = sLaxIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROCK_INCENSE] =
    {
        .name = _("Rock Incense"),
        .itemId = ITEM_ROCK_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
        .description = sRockIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FULL_INCENSE] =
    {
        .name = _("Full Incense"),
        .itemId = ITEM_FULL_INCENSE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 5,
        .description = sFullIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WAVE_INCENSE] =
    {
        .name = _("Wave Incense"),
        .itemId = ITEM_WAVE_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sWaveIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROSE_INCENSE] =
    {
        .name = _("Rose Incense"),
        .itemId = ITEM_ROSE_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
        .description = sRoseIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCK_INCENSE] =
    {
        .name = _("Luck Incense"),
        .itemId = ITEM_LUCK_INCENSE,
        .price = 11000,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
        .description = sLuckIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PURE_INCENSE] =
    {
        .name = _("Pure Incense"),
        .itemId = ITEM_PURE_INCENSE,
        .price = 6000,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Contest Scarves

    [ITEM_RED_SCARF] =
    {
        .name = _("Red Scarf"),
        .itemId = ITEM_RED_SCARF,
        .price = 100,
        .description = sRedScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_SCARF] =
    {
        .name = _("Blue Scarf"),
        .itemId = ITEM_BLUE_SCARF,
        .price = 100,
        .description = sBlueScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINK_SCARF] =
    {
        .name = _("Pink Scarf"),
        .itemId = ITEM_PINK_SCARF,
        .price = 100,
        .description = sPinkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_SCARF] =
    {
        .name = _("Green Scarf"),
        .itemId = ITEM_GREEN_SCARF,
        .price = 100,
        .description = sGreenScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_SCARF] =
    {
        .name = _("Yellow Scarf"),
        .itemId = ITEM_YELLOW_SCARF,
        .price = 100,
        .description = sYellowScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// EV Gain Modifiers

    [ITEM_MACHO_BRACE] =
    {
        .name = _("Macho Brace"),
        .itemId = ITEM_MACHO_BRACE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = sMachoBraceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POWER_WEIGHT] =
    {
        .name = _("Power Weight"),
        .itemId = ITEM_POWER_WEIGHT,
        .price = 8000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
        .description = sPowerWeightDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_HP,
    },

    [ITEM_POWER_BRACER] =
    {
        .name = _("Power Bracer"),
        .itemId = ITEM_POWER_BRACER,
        .price = 8000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
        .description = sPowerBracerDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_ATK,
    },

    [ITEM_POWER_BELT] =
    {
        .name = _("Power Belt"),
        .itemId = ITEM_POWER_BELT,
        .price = 8000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
        .description = sPowerBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_DEF,
    },

    [ITEM_POWER_LENS] =
    {
        .name = _("Power Lens"),
        .itemId = ITEM_POWER_LENS,
        .price = 8000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
        .description = sPowerLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPATK,
    },

    [ITEM_POWER_BAND] =
    {
        .name = _("Power Band"),
        .itemId = ITEM_POWER_BAND,
        .price = 8000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
        .description = sPowerBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPDEF,
    },

    [ITEM_POWER_ANKLET] =
    {
        .name = _("Power Anklet"),
        .itemId = ITEM_POWER_ANKLET,
        .price = 8000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 4,
        .description = sPowerAnkletDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPEED,
    },

// Type-boosting Held Items

    [ITEM_SILK_SCARF] =
    {
        .name = _("Silk Scarf"),
        .itemId = ITEM_SILK_SCARF,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = 25,
        .description = sSilkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARCOAL] =
    {
        .name = _("Charcoal"),
        .itemId = ITEM_CHARCOAL,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = 25,
        .description = sCharcoalDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MYSTIC_WATER] =
    {
        .name = _("Mystic Water"),
        .itemId = ITEM_MYSTIC_WATER,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 25,
        .description = sMysticWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGNET] =
    {
        .name = _("Magnet"),
        .itemId = ITEM_MAGNET,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = 25,
        .description = sMagnetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MIRACLE_SEED] =
    {
        .name = _("Miracle Seed"),
        .itemId = ITEM_MIRACLE_SEED,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 25,
        .description = sMiracleSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
        .name = _("Never-Melt Ice"),
        .itemId = ITEM_NEVER_MELT_ICE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = 25,
        .description = sNeverMeltIceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_BELT] =
    {
        .name = _("Black Belt"),
        .itemId = ITEM_BLACK_BELT,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = 25,
        .description = sBlackBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POISON_BARB] =
    {
        .name = _("Poison Barb"),
        .itemId = ITEM_POISON_BARB,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 25,
        .description = sPoisonBarbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOFT_SAND] =
    {
        .name = _("Soft Sand"),
        .itemId = ITEM_SOFT_SAND,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = 25,
        .description = sSoftSandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHARP_BEAK] =
    {
        .name = _("Sharp Beak"),
        .itemId = ITEM_SHARP_BEAK,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = 25,
        .description = sSharpBeakDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TWISTED_SPOON] =
    {
        .name = _("Twisted Spoon"),
        .itemId = ITEM_TWISTED_SPOON,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 25,
        .description = sTwistedSpoonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILVER_POWDER] =
    {
        .name = _("Silver Powder"),
        .itemId = ITEM_SILVER_POWDER,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = 25,
        .description = sSilverPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HARD_STONE] =
    {
        .name = _("Hard Stone"),
        .itemId = ITEM_HARD_STONE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 25,
        .description = sHardStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPELL_TAG] =
    {
        .name = _("Spell Tag"),
        .itemId = ITEM_SPELL_TAG,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = 25,
        .description = sSpellTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_FANG] =
    {
        .name = _("Dragon Fang"),
        .itemId = ITEM_DRAGON_FANG,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = 25,
        .description = sDragonFangDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_GLASSES] =
    {
        .name = _("Black Glasses"),
        .itemId = ITEM_BLACK_GLASSES,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = 25,
        .description = sBlackGlassesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAL_COAT] =
    {
        .name = _("Metal Coat"),
        .itemId = ITEM_METAL_COAT,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = 25,
        .description = sMetalCoatDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LOVELY_INCENSE] =
    {
        .name = _("Lovely Incense"),
        .itemId = ITEM_LOVELY_INCENSE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_FAIRY_POWER,
        .holdEffectParam = 25,
        .description = sOddIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Choice Items

    [ITEM_CHOICE_BAND] =
    {
        .name = _("Choice Band"),
        .itemId = ITEM_CHOICE_BAND,
        .price = 20000,
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = sChoiceBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOICE_SPECS] =
    {
        .name = _("Choice Specs"),
        .itemId = ITEM_CHOICE_SPECS,
        .price = 20000,
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
        .description = sChoiceSpecsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOICE_SCARF] =
    {
        .name = _("Choice Scarf"),
        .itemId = ITEM_CHOICE_SCARF,
        .price = 20000,
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
        .description = sChoiceScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Status Orbs

    [ITEM_FLAME_ORB] =
    {
        .name = _("Flame Orb"),
        .itemId = ITEM_FLAME_ORB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
        .description = sFlameOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TOXIC_ORB] =
    {
        .name = _("Toxic Orb"),
        .itemId = ITEM_TOXIC_ORB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_TOXIC_ORB,
        .description = sToxicOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Weather Rocks

    [ITEM_DAMP_ROCK] =
    {
        .name = _("Damp Rock"),
        .itemId = ITEM_DAMP_ROCK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
        .description = sDampRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEAT_ROCK] =
    {
        .name = _("Heat Rock"),
        .itemId = ITEM_HEAT_ROCK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
        .description = sHeatRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SMOOTH_ROCK] =
    {
        .name = _("Smooth Rock"),
        .itemId = ITEM_SMOOTH_ROCK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
        .description = sSmoothRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ICY_ROCK] =
    {
        .name = _("Icy Rock"),
        .itemId = ITEM_ICY_ROCK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
        .description = sIcyRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Terrain Seeds

    [ITEM_ELECTRIC_SEED] =
    {
        .name = _("Electric Seed"),
        .itemId = ITEM_ELECTRIC_SEED,
        .price = 300,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN,
        .description = sElectricSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PSYCHIC_SEED] =
    {
        .name = _("Psychic Seed"),
        .itemId = ITEM_PSYCHIC_SEED,
        .price = 300,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_PSYCHIC_TERRAIN,
        .description = sPsychicSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MISTY_SEED] =
    {
        .name = _("Misty Seed"),
        .itemId = ITEM_MISTY_SEED,
        .price = 300,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_MISTY_TERRAIN,
        .description = sMistySeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRASSY_SEED] =
    {
        .name = _("Grassy Seed"),
        .itemId = ITEM_GRASSY_SEED,
        .price = 300,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_GRASSY_TERRAIN,
        .description = sGrassySeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Type-activated Stat Modifiers

    [ITEM_ABSORB_BULB] =
    {
        .name = _("Absorb Bulb"),
        .itemId = ITEM_ABSORB_BULB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ABSORB_BULB,
        .holdEffectParam = 0,
        .description = sAbsorbBulbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CELL_BATTERY] =
    {
        .name = _("Cell Battery"),
        .itemId = ITEM_CELL_BATTERY,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CELL_BATTERY,
        .holdEffectParam = 0,
        .description = sCellBatteryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUMINOUS_MOSS] =
    {
        .name = _("Luminous Moss"),
        .itemId = ITEM_LUMINOUS_MOSS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LUMINOUS_MOSS,
        .holdEffectParam = 0,
        .description = sLuminousMossDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SNOWBALL] =
    {
        .name = _("Snowball"),
        .itemId = ITEM_SNOWBALL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SNOWBALL,
        .holdEffectParam = 0,
        .description = sSnowballDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Misc. Held Items

    [ITEM_BRIGHT_POWDER] =
    {
        .name = _("Bright Powder"),
        .itemId = ITEM_BRIGHT_POWDER,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = sBrightPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHITE_HERB] =
    {
        .name = _("White Herb"),
        .itemId = ITEM_WHITE_HERB,
        .price = 300,
        .holdEffect = HOLD_EFFECT_RESTORE_STATS,
        .description = sWhiteHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXP_SHARE] =
    {
        .name = _("Exp. Share"),
        .itemId = ITEM_EXP_SHARE,
        .price = 0,
        .importance = 1,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = sExpShareDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_ExpShare,
    },

    [ITEM_QUICK_CLAW] =
    {
        .name = _("Quick Claw"),
        .itemId = ITEM_QUICK_CLAW,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = sQuickClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOOTHE_BELL] =
    {
        .name = _("Soothe Bell"),
        .itemId = ITEM_SOOTHE_BELL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = sSootheBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MENTAL_HERB] =
    {
        .name = _("Mental Herb"),
        .itemId = ITEM_MENTAL_HERB,
        .price = 300,
        .holdEffect = HOLD_EFFECT_MENTAL_HERB,
        .description = sMentalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KINGS_ROCK] =
    {
        .name = _("King's Rock"),
        .itemId = ITEM_KINGS_ROCK,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AMULET_COIN] =
    {
        .name = _("Amulet Coin"),
        .itemId = ITEM_AMULET_COIN,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
        .description = sAmuletCoinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLEANSE_TAG] =
    {
        .name = _("Cleanse Tag"),
        .itemId = ITEM_CLEANSE_TAG,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sCleanseTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SMOKE_BALL] =
    {
        .name = _("Smoke Ball"),
        .itemId = ITEM_SMOKE_BALL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = sSmokeBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOCUS_BAND] =
    {
        .name = _("Focus Band"),
        .itemId = ITEM_FOCUS_BAND,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = sFocusBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKY_EGG] =
    {
        .name = _("Lucky Egg"),
        .itemId = ITEM_LUCKY_EGG,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = sLuckyEggDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCOPE_LENS] =
    {
        .name = _("Scope Lens"),
        .itemId = ITEM_SCOPE_LENS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sScopeLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LEFTOVERS] =
    {
        .name = _("Leftovers"),
        .itemId = ITEM_LEFTOVERS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .description = sLeftoversDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHELL_BELL] =
    {
        .name = _("Shell Bell"),
        .itemId = ITEM_SHELL_BELL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 6,
        .description = sShellBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WIDE_LENS] =
    {
        .name = _("Wide Lens"),
        .itemId = ITEM_WIDE_LENS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .holdEffectParam = 11,
        .description = sWideLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MUSCLE_BAND] =
    {
        .name = _("Muscle Band"),
        .itemId = ITEM_MUSCLE_BAND,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
        .holdEffectParam = 15,
        .description = sMuscleBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WISE_GLASSES] =
    {
        .name = _("Wise Glasses"),
        .itemId = ITEM_WISE_GLASSES,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_WISE_GLASSES,
        .holdEffectParam = 15,
        .description = sWiseGlassesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXPERT_BELT] =
    {
        .name = _("Expert Belt"),
        .itemId = ITEM_EXPERT_BELT,
        .price = 15000,
        .holdEffect = HOLD_EFFECT_EXPERT_BELT,
        .holdEffectParam = 20,
        .description = sExpertBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIGHT_CLAY] =
    {
        .name = _("Light Clay"),
        .itemId = ITEM_LIGHT_CLAY,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
        .description = sLightClayDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIFE_ORB] =
    {
        .name = _("Life Orb"),
        .itemId = ITEM_LIFE_ORB,
        .price = 20000,
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
        .description = sLifeOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POWER_HERB] =
    {
        .name = _("Power Herb"),
        .itemId = ITEM_POWER_HERB,
        .price = 300,
        .holdEffect = HOLD_EFFECT_POWER_HERB,
        .description = sPowerHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOCUS_SASH] =
    {
        .name = _("Focus Sash"),
        .itemId = ITEM_FOCUS_SASH,
        .price = 300,
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
        .description = sFocusSashDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ZOOM_LENS] =
    {
        .name = _("Zoom Lens"),
        .itemId = ITEM_ZOOM_LENS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ZOOM_LENS,
        .holdEffectParam = 20,
        .description = sZoomLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METRONOME] =
    {
        .name = _("Metronome"),
        .itemId = ITEM_METRONOME,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_METRONOME,
        .holdEffectParam = 20,
        .description = sMetronomeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_IRON_BALL] =
    {
        .name = _("Iron Ball"),
        .itemId = ITEM_IRON_BALL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_IRON_BALL,
        .description = sIronBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LAGGING_TAIL] =
    {
        .name = _("Lagging Tail"),
        .itemId = ITEM_LAGGING_TAIL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .description = sLaggingTailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DESTINY_KNOT] =
    {
        .name = _("Destiny Knot"),
        .itemId = ITEM_DESTINY_KNOT,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
        .description = sDestinyKnotDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_SLUDGE] =
    {
        .name = _("Black Sludge"),
        .itemId = ITEM_BLACK_SLUDGE,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
        .description = sBlackSludgeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRIP_CLAW] =
    {
        .name = _("Grip Claw"),
        .itemId = ITEM_GRIP_CLAW,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GRIP_CLAW,
        .description = sGripClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STICKY_BARB] =
    {
        .name = _("Sticky Barb"),
        .itemId = ITEM_STICKY_BARB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_STICKY_BARB,
        .description = sStickyBarbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHED_SHELL] =
    {
        .name = _("Shed Shell"),
        .itemId = ITEM_SHED_SHELL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
        .description = sShedShellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_ROOT] =
    {
        .name = _("Big Root"),
        .itemId = ITEM_BIG_ROOT,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .holdEffectParam = 30,
        .description = sBigRootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAZOR_CLAW] =
    {
        .name = _("Razor Claw"),
        .itemId = ITEM_RAZOR_CLAW,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sRazorClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAZOR_FANG] =
    {
        .name = _("Razor Fang"),
        .itemId = ITEM_RAZOR_FANG,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sRazorFangDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EVIOLITE] =
    {
        .name = _("Eviolite"),
        .itemId = ITEM_EVIOLITE,
        .price = 15000,
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .holdEffectParam = 50,
        .description = sEvioliteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FLOAT_STONE] =
    {
        .name = _("Float Stone"),
        .itemId = ITEM_FLOAT_STONE,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FLOAT_STONE,
        .description = sFloatStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROCKY_HELMET] =
    {
        .name = _("Rocky Helmet"),
        .itemId = ITEM_ROCKY_HELMET,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
        .holdEffectParam = 0,
        .description = sRockyHelmetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AIR_BALLOON] =
    {
        .name = _("Air Balloon"),
        .itemId = ITEM_AIR_BALLOON,
        .price = 300,
        .holdEffect = HOLD_EFFECT_AIR_BALLOON,
        .holdEffectParam = 0,
        .description = sAirBalloonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_CARD] =
    {
        .name = _("Red Card"),
        .itemId = ITEM_RED_CARD,
        .price = 300,
        .holdEffect = HOLD_EFFECT_RED_CARD,
        .holdEffectParam = 0,
        .description = sRedCardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RING_TARGET] =
    {
        .name = _("Ring Target"),
        .itemId = ITEM_RING_TARGET,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_RING_TARGET,
        .holdEffectParam = 0,
        .description = sRingTargetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BINDING_BAND] =
    {
        .name = _("Binding Band"),
        .itemId = ITEM_BINDING_BAND,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BINDING_BAND,
        .description = sBindingBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EJECT_BUTTON] =
    {
        .name = _("Eject Button"),
        .itemId = ITEM_EJECT_BUTTON,
        .price = 300,
        .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
        .holdEffectParam = 0,
        .description = sEjectButtonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WEAKNESS_POLICY] =
    {
        .name = _("Weakness Policy"),
        .itemId = ITEM_WEAKNESS_POLICY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .holdEffectParam = 0,
        .description = sWeaknessPolicyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ASSAULT_VEST] =
    {
        .name = _("Assault Vest"),
        .itemId = ITEM_ASSAULT_VEST,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
        .description = sAssaultVestDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAFETY_GOGGLES] =
    {
        .name = _("Safety Goggles"),
        .itemId = ITEM_SAFETY_GOGGLES,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SAFETY_GOGGLES,
        .description = sSafetyGogglesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ADRENALINE_ORB] =
    {
        .name = _("Adrenaline Orb"),
        .itemId = ITEM_ADRENALINE_ORB,
        .price = 300,
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
        .description = sAdrenalineOrbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
        .name = _("Terrain Extender"),
        .itemId = ITEM_TERRAIN_EXTENDER,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .description = sTerrainExtenderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PROTECTIVE_PADS] =
    {
        .name = _("Protective Pads"),
        .itemId = ITEM_PROTECTIVE_PADS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
        .description = sProtectivePadsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_THROAT_SPRAY] =
    {
        .name = _("Throat Spray"),
        .itemId = ITEM_THROAT_SPRAY,
        .price = 300,
        .holdEffect = HOLD_EFFECT_THROAT_SPRAY,
        .description = sThroatSprayDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EJECT_PACK] =
    {
        .name = _("Eject Pack"),
        .itemId = ITEM_EJECT_PACK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EJECT_PACK,
        .description = sEjectPackDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEAVY_DUTY_BOOTS] =
    {
        .name = _("Heavy-Duty Boots"),
        .itemId = ITEM_HEAVY_DUTY_BOOTS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_HEAVY_DUTY_BOOTS,
        .description = sHeavyDutyBootsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUNDER_POLICY] =
    {
        .name = _("BlundrPolicy"),
        .itemId = ITEM_BLUNDER_POLICY,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BLUNDER_POLICY,
        .description = sBlunderPolicyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_SERVICE] =
    {
        .name = _("Room Service"),
        .itemId = ITEM_ROOM_SERVICE,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ROOM_SERVICE,
        .description = sRoomServiceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_UTILITY_UMBRELLA] =
    {
        .name = _("UtltyUmbrlla"),
        .itemId = ITEM_UTILITY_UMBRELLA,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_UTILITY_UMBRELLA,
        .description = sUtilityUmbrellaDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
        .name = _("Cheri Berry"),
        .itemId = ITEM_CHERI_BERRY,
        .price = 250,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sCheriBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = _("Chesto Berry"),
        .itemId = ITEM_CHESTO_BERRY,
        .price = 250,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = sChestoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = _("Pecha Berry"),
        .itemId = ITEM_PECHA_BERRY,
        .price = 250,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = sPechaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = _("Rawst Berry"),
        .itemId = ITEM_RAWST_BERRY,
        .price = 250,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = sRawstBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = _("Aspear Berry"),
        .itemId = ITEM_ASPEAR_BERRY,
        .price = 250,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = sAspearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = _("Leppa Berry"),
        .itemId = ITEM_LEPPA_BERRY,
        .price = 600,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = sLeppaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = _("Oran Berry"),
        .itemId = ITEM_ORAN_BERRY,
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = sOranBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = _("Persim Berry"),
        .itemId = ITEM_PERSIM_BERRY,
        .price = 250,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = sPersimBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LUM_BERRY] =
    {
        .name = _("Lum Berry"),
        .itemId = ITEM_LUM_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = sLumBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = _("Sitrus Berry"),
        .itemId = ITEM_SITRUS_BERRY,
        .price = 500,
        #if defined(BATTLE_ENGINE) && I_SITRUS_BERRY_HEAL >= GEN_4
            .holdEffect = HOLD_EFFECT_RESTORE_PCT_HP,
            .holdEffectParam = 25,
        #else
            .holdEffect = HOLD_EFFECT_RESTORE_HP,
            .holdEffectParam = 30,
        #endif
        .description = sSitrusBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = _("Figy Berry"),
        .itemId = ITEM_FIGY_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = 2,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = _("Wiki Berry"),
        .itemId = ITEM_WIKI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = 2,
        .description = sWikiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = _("Mago Berry"),
        .itemId = ITEM_MAGO_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = 2,
        .description = sMagoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = _("Aguav Berry"),
        .itemId = ITEM_AGUAV_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = 2,
        .description = sAguavBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = _("Iapapa Berry"),
        .itemId = ITEM_IAPAPA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = 2,
        .description = sIapapaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAZZ_BERRY] =
    {
        .name = _("Razz Berry"),
        .itemId = ITEM_RAZZ_BERRY,
        .price = 100,
        .description = sRazzBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUK_BERRY] =
    {
        .name = _("Bluk Berry"),
        .itemId = ITEM_BLUK_BERRY,
        .price = 100,
        .description = sBlukBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NANAB_BERRY] =
    {
        .name = _("Nanab Berry"),
        .itemId = ITEM_NANAB_BERRY,
        .price = 100,
        .description = sNanabBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WEPEAR_BERRY] =
    {
        .name = _("Wepear Berry"),
        .itemId = ITEM_WEPEAR_BERRY,
        .price = 100,
        .description = sWepearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINAP_BERRY] =
    {
        .name = _("Pinap Berry"),
        .itemId = ITEM_PINAP_BERRY,
        .price = 100,
        .description = sPinapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POMEG_BERRY] =
    {
        .name = _("Pomeg Berry"),
        .itemId = ITEM_POMEG_BERRY,
        .price = 200,
        .description = sPomegBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_KELPSY_BERRY] =
    {
        .name = _("Kelpsy Berry"),
        .itemId = ITEM_KELPSY_BERRY,
        .price = 200,
        .description = sKelpsyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_QUALOT_BERRY] =
    {
        .name = _("Qualot Berry"),
        .itemId = ITEM_QUALOT_BERRY,
        .price = 200,
        .description = sQualotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_HONDEW_BERRY] =
    {
        .name = _("Hondew Berry"),
        .itemId = ITEM_HONDEW_BERRY,
        .price = 200,
        .description = sHondewBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_GREPA_BERRY] =
    {
        .name = _("Grepa Berry"),
        .itemId = ITEM_GREPA_BERRY,
        .price = 200,
        .description = sGrepaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_TAMATO_BERRY] =
    {
        .name = _("Tamato Berry"),
        .itemId = ITEM_TAMATO_BERRY,
        .price = 200,
        .description = sTamatoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_CORNN_BERRY] =
    {
        .name = _("Cornn Berry"),
        .itemId = ITEM_CORNN_BERRY,
        .price = 100,
        .description = sCornnBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGOST_BERRY] =
    {
        .name = _("Magost Berry"),
        .itemId = ITEM_MAGOST_BERRY,
        .price = 100,
        .description = sMagostBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RABUTA_BERRY] =
    {
        .name = _("Rabuta Berry"),
        .itemId = ITEM_RABUTA_BERRY,
        .price = 100,
        .description = sRabutaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NOMEL_BERRY] =
    {
        .name = _("Nomel Berry"),
        .itemId = ITEM_NOMEL_BERRY,
        .price = 100,
        .description = sNomelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPELON_BERRY] =
    {
        .name = _("Spelon Berry"),
        .itemId = ITEM_SPELON_BERRY,
        .price = 100,
        .description = sSpelonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PAMTRE_BERRY] =
    {
        .name = _("Pamtre Berry"),
        .itemId = ITEM_PAMTRE_BERRY,
        .price = 100,
        .description = sPamtreBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WATMEL_BERRY] =
    {
        .name = _("Watmel Berry"),
        .itemId = ITEM_WATMEL_BERRY,
        .price = 100,
        .description = sWatmelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DURIN_BERRY] =
    {
        .name = _("Durin Berry"),
        .itemId = ITEM_DURIN_BERRY,
        .price = 100,
        .description = sDurinBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BELUE_BERRY] =
    {
        .name = _("Belue Berry"),
        .itemId = ITEM_BELUE_BERRY,
        .price = 100,
        .description = sBelueBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHILAN_BERRY] =
    {
        .name = _("Chilan Berry"),
        .itemId = ITEM_CHILAN_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_NORMAL,
        .description = sChilanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OCCA_BERRY] =
    {
        .name = _("Occa Berry"),
        .itemId = ITEM_OCCA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIRE,
        .description = sOccaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PASSHO_BERRY] =
    {
        .name = _("Passho Berry"),
        .itemId = ITEM_PASSHO_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_WATER,
        .description = sPasshoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WACAN_BERRY] =
    {
        .name = _("Wacan Berry"),
        .itemId = ITEM_WACAN_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ELECTRIC,
        .description = sWacanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RINDO_BERRY] =
    {
        .name = _("Rindo Berry"),
        .itemId = ITEM_RINDO_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GRASS,
        .description = sRindoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YACHE_BERRY] =
    {
        .name = _("Yache Berry"),
        .itemId = ITEM_YACHE_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ICE,
        .description = sYacheBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOPLE_BERRY] =
    {
        .name = _("Chople Berry"),
        .itemId = ITEM_CHOPLE_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIGHTING,
        .description = sChopleBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEBIA_BERRY] =
    {
        .name = _("Kebia Berry"),
        .itemId = ITEM_KEBIA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_POISON,
        .description = sKebiaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHUCA_BERRY] =
    {
        .name = _("Shuca Berry"),
        .itemId = ITEM_SHUCA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GROUND,
        .description = sShucaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COBA_BERRY] =
    {
        .name = _("Coba Berry"),
        .itemId = ITEM_COBA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FLYING,
        .description = sCobaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PAYAPA_BERRY] =
    {
        .name = _("Payapa Berry"),
        .itemId = ITEM_PAYAPA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_PSYCHIC,
        .description = sPayapaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TANGA_BERRY] =
    {
        .name = _("Tanga Berry"),
        .itemId = ITEM_TANGA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_BUG,
        .description = sTangaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARTI_BERRY] =
    {
        .name = _("Charti Berry"),
        .itemId = ITEM_CHARTI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ROCK,
        .description = sChartiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KASIB_BERRY] =
    {
        .name = _("Kasib Berry"),
        .itemId = ITEM_KASIB_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GHOST,
        .description = sKasibBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HABAN_BERRY] =
    {
        .name = _("Haban Berry"),
        .itemId = ITEM_HABAN_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DRAGON,
        .description = sHabanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COLBUR_BERRY] =
    {
        .name = _("Colbur Berry"),
        .itemId = ITEM_COLBUR_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DARK,
        .description = sColburBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BABIRI_BERRY] =
    {
        .name = _("Babiri Berry"),
        .itemId = ITEM_BABIRI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_STEEL,
        .description = sBabiriBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROSELI_BERRY] =
    {
        .name = _("Roseli Berry"),
        .itemId = ITEM_ROSELI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FAIRY,
        .description = sRoseliBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIECHI_BERRY] =
    {
        .name = _("Liechi Berry"),
        .itemId = ITEM_LIECHI_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sLiechiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GANLON_BERRY] =
    {
        .name = _("Ganlon Berry"),
        .itemId = ITEM_GANLON_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sGanlonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SALAC_BERRY] =
    {
        .name = _("Salac Berry"),
        .itemId = ITEM_SALAC_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = sSalacBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PETAYA_BERRY] =
    {
        .name = _("Petaya Berry"),
        .itemId = ITEM_PETAYA_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sPetayaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_APICOT_BERRY] =
    {
        .name = _("Apicot Berry"),
        .itemId = ITEM_APICOT_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sApicotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LANSAT_BERRY] =
    {
        .name = _("Lansat Berry"),
        .itemId = ITEM_LANSAT_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = sLansatBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STARF_BERRY] =
    {
        .name = _("Starf Berry"),
        .itemId = ITEM_STARF_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = sStarfBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ENIGMA_BERRY] =
    {
        .name = _("Enigma Berry"),
        .itemId = ITEM_ENIGMA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_ENIGMA_BERRY,
        .description = sEnigmaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MICLE_BERRY] =
    {
        .name = _("Micle Berry"),
        .itemId = ITEM_MICLE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_MICLE_BERRY,
        .holdEffectParam = 4,
        .description = sMicleBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CUSTAP_BERRY] =
    {
        .name = _("Custap Berry"),
        .itemId = ITEM_CUSTAP_BERRY,
        .price = 500,
        .holdEffect = HOLD_EFFECT_CUSTAP_BERRY,
        .holdEffectParam = 4,
        .description = sCustapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_JABOCA_BERRY] =
    {
        .name = _("Jaboca Berry"),
        .itemId = ITEM_JABOCA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_JABOCA_BERRY,
        .description = sJabocaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROWAP_BERRY] =
    {
        .name = _("Rowap Berry"),
        .itemId = ITEM_ROWAP_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_ROWAP_BERRY,
        .description = sRowapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEE_BERRY] =
    {
        .name = _("Kee Berry"),
        .itemId = ITEM_KEE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_KEE_BERRY,
        .description = sKeeBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MARANGA_BERRY] =
    {
        .name = _("Maranga Berry"),
        .itemId = ITEM_MARANGA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_MARANGA_BERRY,
        .description = sMarangaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ENIGMA_BERRY_E_READER] =
    {
        .name = _("Enigma Berry"),
        .itemId = ITEM_ENIGMA_BERRY,
        .price = 20,
        .description = sEnigmaBerryEReaderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_EnigmaBerry,
    },

// TMs/HMs

    [ITEM_TM01_FOCUS_PUNCH] =
    {
        .name = _("TM01"),
        .itemId = ITEM_TM01_FOCUS_PUNCH,
        .price = 3000,
        .description = sTM01Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM02_DRAGON_CLAW] =
    {
        .name = _("TM02"),
        .itemId = ITEM_TM02_DRAGON_CLAW,
        .price = 3000,
        .description = sTM02Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM03_THUNDER_FANG] =
    {
        .name = _("TM03"),
        .itemId = ITEM_TM03_THUNDER_FANG,
        .price = 10000,
        .description = sTM03Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM04_CALM_MIND] =
    {
        .name = _("TM04"),
        .itemId = ITEM_TM04_CALM_MIND,
        .price = 3000,
        .description = sTM04Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM05_ROAR] =
    {
        .name = _("TM05"),
        .itemId = ITEM_TM05_ROAR,
        .price = 1000,
        .description = sTM05Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM06_TOXIC] =
    {
        .name = _("TM06"),
        .itemId = ITEM_TM06_TOXIC,
        .price = 3000,
        .description = sTM06Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM07_HAIL] =
    {
        .name = _("TM07"),
        .itemId = ITEM_TM07_HAIL,
        .price = 3000,
        .description = sTM07Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM08_BULK_UP] =
    {
        .name = _("TM08"),
        .itemId = ITEM_TM08_BULK_UP,
        .price = 3000,
        .description = sTM08Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM09_SEED_BOMB] =
    {
        .name = _("TM09"),
        .itemId = ITEM_TM09_SEED_BOMB,
        .price = 12000,
        .description = sTM09Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM10_HIDDEN_POWER] =
    {
        .name = _("TM10"),
        .itemId = ITEM_TM10_HIDDEN_POWER,
        .price = 3000,
        .description = sTM10Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM11_SUNNY_DAY] =
    {
        .name = _("TM11"),
        .itemId = ITEM_TM11_SUNNY_DAY,
        .price = 2000,
        .description = sTM11Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM12_TAUNT] =
    {
        .name = _("TM12"),
        .itemId = ITEM_TM12_TAUNT,
        .price = 3000,
        .description = sTM12Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM13_ICE_BEAM] =
    {
        .name = _("TM13"),
        .itemId = ITEM_TM13_ICE_BEAM,
        .price = 3000,
        .description = sTM13Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM14_BLIZZARD] =
    {
        .name = _("TM14"),
        .itemId = ITEM_TM14_BLIZZARD,
        .price = 30000,
        .description = sTM14Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM15_ICE_FANG] =
    {
        .name = _("TM15"),
        .itemId = ITEM_TM15_ICE_FANG,
        .price = 10000,
        .description = sTM15Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM16_LIGHT_SCREEN] =
    {
        .name = _("TM16"),
        .itemId = ITEM_TM16_LIGHT_SCREEN,
        .price = 10000,
        .description = sTM16Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM17_PROTECT] =
    {
        .name = _("TM17"),
        .itemId = ITEM_TM17_PROTECT,
        .price = 10000,
        .description = sTM17Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM18_RAIN_DANCE] =
    {
        .name = _("TM18"),
        .itemId = ITEM_TM18_RAIN_DANCE,
        .price = 2000,
        .description = sTM18Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM19_GIGA_DRAIN] =
    {
        .name = _("TM19"),
        .itemId = ITEM_TM19_GIGA_DRAIN,
        .price = 3000,
        .description = sTM19Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM20_FIRE_FANG] =
    {
        .name = _("TM20"),
        .itemId = ITEM_TM20_FIRE_FANG,
        .price = 10000,
        .description = sTM20Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM21_THUNDER_PUNCH] =
    {
        .name = _("TM21"),
        .itemId = ITEM_TM21_THUNDER_PUNCH,
        .price = 12000,
        .description = sTM21Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM22_SOLAR_BEAM] =
    {
        .name = _("TM22"),
        .itemId = ITEM_TM22_SOLAR_BEAM,
        .price = 3000,
        .description = sTM22Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM23_IRON_TAIL] =
    {
        .name = _("TM23"),
        .itemId = ITEM_TM23_IRON_TAIL,
        .price = 3000,
        .description = sTM23Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM24_THUNDERBOLT] =
    {
        .name = _("TM24"),
        .itemId = ITEM_TM24_THUNDERBOLT,
        .price = 3000,
        .description = sTM24Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM25_THUNDER] =
    {
        .name = _("TM25"),
        .itemId = ITEM_TM25_THUNDER,
        .price = 30000,
        .description = sTM25Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM26_EARTHQUAKE] =
    {
        .name = _("TM26"),
        .itemId = ITEM_TM26_EARTHQUAKE,
        .price = 3000,
        .description = sTM26Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM27_FIRE_PUNCH] =
    {
        .name = _("TM27"),
        .itemId = ITEM_TM27_FIRE_PUNCH,
        .price = 12000,
        .description = sTM27Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM28_DIG] =
    {
        .name = _("TM28"),
        .itemId = ITEM_TM28_DIG,
        .price = 2000,
        .description = sTM28Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM29_PSYCHIC] =
    {
        .name = _("TM29"),
        .itemId = ITEM_TM29_PSYCHIC,
        .price = 2000,
        .description = sTM29Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM30_SHADOW_BALL] =
    {
        .name = _("TM30"),
        .itemId = ITEM_TM30_SHADOW_BALL,
        .price = 3000,
        .description = sTM30Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM31_BRICK_BREAK] =
    {
        .name = _("TM31"),
        .itemId = ITEM_TM31_BRICK_BREAK,
        .price = 3000,
        .description = sTM31Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM32_ICE_PUNCH] =
    {
        .name = _("TM32"),
        .itemId = ITEM_TM32_ICE_PUNCH,
        .price = 12000,
        .description = sTM32Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM33_REFLECT] =
    {
        .name = _("TM33"),
        .itemId = ITEM_TM33_REFLECT,
        .price = 10000,
        .description = sTM33Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM34_VOLT_SWITCH] =
    {
        .name = _("TM34"),
        .itemId = ITEM_TM34_VOLT_SWITCH,
        .price = 3000,
        .description = sTM34Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM35_FLAMETHROWER] =
    {
        .name = _("TM35"),
        .itemId = ITEM_TM35_FLAMETHROWER,
        .price = 3000,
        .description = sTM35Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM36_SLUDGE_BOMB] =
    {
        .name = _("TM36"),
        .itemId = ITEM_TM36_SLUDGE_BOMB,
        .price = 1000,
        .description = sTM36Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM37_SANDSTORM] =
    {
        .name = _("TM37"),
        .itemId = ITEM_TM37_SANDSTORM,
        .price = 2000,
        .description = sTM37Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM38_FIRE_BLAST] =
    {
        .name = _("TM38"),
        .itemId = ITEM_TM38_FIRE_BLAST,
        .price = 30000,
        .description = sTM38Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM39_ROCK_TOMB] =
    {
        .name = _("TM39"),
        .itemId = ITEM_TM39_ROCK_TOMB,
        .price = 3000,
        .description = sTM39Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM40_AERIAL_ACE] =
    {
        .name = _("TM40"),
        .itemId = ITEM_TM40_AERIAL_ACE,
        .price = 3000,
        .description = sTM40Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM41_COUNTER] =
    {
        .name = _("TM41"),
        .itemId = ITEM_TM41_COUNTER,
        .price = 3000,
        .description = sTM41Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM42_FACADE] =
    {
        .name = _("TM42"),
        .itemId = ITEM_TM42_FACADE,
        .price = 3000,
        .description = sTM42Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM43_PSYSHOCK] =
    {
        .name = _("TM43"),
        .itemId = ITEM_TM43_PSYSHOCK,
        .price = 3000,
        .description = sTM43Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM44_REST] =
    {
        .name = _("TM44"),
        .itemId = ITEM_TM44_REST,
        .price = 3000,
        .description = sTM44Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM45_NASTY_PLOT] =
    {
        .name = _("TM45"),
        .itemId = ITEM_TM45_NASTY_PLOT,
        .price = 20000,
        .description = sTM45Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM46_THIEF] =
    {
        .name = _("TM46"),
        .itemId = ITEM_TM46_THIEF,
        .price = 3000,
        .description = sTM46Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM47_STEEL_WING] =
    {
        .name = _("TM47"),
        .itemId = ITEM_TM47_STEEL_WING,
        .price = 3000,
        .description = sTM47Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM48_ZEN_HEADBUTT] =
    {
        .name = _("TM48"),
        .itemId = ITEM_TM48_ZEN_HEADBUTT,
        .price = 12000,
        .description = sTM48Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM49_WAVE_CRASH] =
    {
        .name = _("TM49"),
        .itemId = ITEM_TM49_WAVE_CRASH,
        .price = 3000,
        .description = sTM49Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM50_OVERHEAT] =
    {
        .name = _("TM50"),
        .itemId = ITEM_TM50_OVERHEAT,
        .price = 3000,
        .description = sTM50Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM51] =
    {
        .name = _("TM51"),
        .itemId = ITEM_TM51,
        .price = 15000,
        .description = sTM51Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM52] =
    {
        .name = _("TM52"),
        .itemId = ITEM_TM52,
        .price = 30000,
        .description = sTM52Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM53] =
    {
        .name = _("TM53"),
        .itemId = ITEM_TM53,
        .price = 3000,
        .description = sTM53Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM54] =
    {
        .name = _("TM54"),
        .itemId = ITEM_TM54,
        .price = 3000,
        .description = sTM54Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM55] =
    {
        .name = _("TM55"),
        .itemId = ITEM_TM55,
        .price = 3000,
        .description = sTM55Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM56] =
    {
        .name = _("TM56"),
        .itemId = ITEM_TM56,
        .price = 15000,
        .description = sTM56Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM57] =
    {
        .name = _("TM57"),
        .itemId = ITEM_TM57,
        .price = 3000,
        .description = sTM57Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM58] =
    {
        .name = _("TM58"),
        .itemId = ITEM_TM58,
        .price = 10000,
        .description = sTM58Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM59] =
    {
        .name = _("TM59"),
        .itemId = ITEM_TM59,
        .price = 3000,
        .description = sTM59Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM60] =
    {
        .name = _("TM60"),
        .itemId = ITEM_TM60,
        .price = 15000,
        .description = sTM60Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM61] =
    {
        .name = _("TM61"),
        .itemId = ITEM_TM61,
        .price = 15000,
        .description = sTM61Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM62] =
    {
        .name = _("TM62"),
        .itemId = ITEM_TM62,
        .price = 3000,
        .description = sTM62Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM63] =
    {
        .name = _("TM63"),
        .itemId = ITEM_TM63,
        .price = 10000,
        .description = sTM63Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM64] =
    {
        .name = _("TM64"),
        .itemId = ITEM_TM64,
        .price = 3000,
        .description = sTM64Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM65] =
    {
        .name = _("TM65"),
        .itemId = ITEM_TM65,
        .price = 3000,
        .description = sTM65Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM66] =
    {
        .name = _("TM66"),
        .itemId = ITEM_TM66,
        .price = 3000,
        .description = sTM66Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM67] =
    {
        .name = _("TM67"),
        .itemId = ITEM_TM67,
        .price = 10000,
        .description = sTM67Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM68] =
    {
        .name = _("TM68"),
        .itemId = ITEM_TM68,
        .price = 7500,
        .description = sTM68Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM69] =
    {
        .name = _("TM69"),
        .itemId = ITEM_TM69,
        .price = 3000,
        .description = sTM69Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM70] =
    {
        .name = _("TM70"),
        .itemId = ITEM_TM70,
        .price = 30000,
        .description = sTM70Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM71] =
    {
        .name = _("TM71"),
        .itemId = ITEM_TM71,
        .price = 30000,
        .description = sTM71Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM72] =
    {
        .name = _("TM72"),
        .itemId = ITEM_TM72,
        .price = 3000,
        .description = sTM72Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM73] =
    {
        .name = _("TM73"),
        .itemId = ITEM_TM73,
        .price = 10000,
        .description = sTM73Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM74] =
    {
        .name = _("TM74"),
        .itemId = ITEM_TM74,
        .price = 10000,
        .description = sTM74Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM75] =
    {
        .name = _("TM75"),
        .itemId = ITEM_TM75,
        .price = 20000,
        .description = sTM75Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM76] =
    {
        .name = _("TM76"),
        .itemId = ITEM_TM76,
        .price = 3000,
        .description = sTM76Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM77] =
    {
        .name = _("TM77"),
        .itemId = ITEM_TM77,
        .price = 15000,
        .description = sTM77Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM78] =
    {
        .name = _("TM78"),
        .itemId = ITEM_TM78,
        .price = 30000,
        .description = sTM78Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM79] =
    {
        .name = _("TM79"),
        .itemId = ITEM_TM79,
        .price = 3000,
        .description = sTM79Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM80] =
    {
        .name = _("TM80"),
        .itemId = ITEM_TM80,
        .price = 3000,
        .description = sTM80Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM81] =
    {
        .name = _("TM81"),
        .itemId = ITEM_TM81,
        .price = 3000,
        .description = sTM81Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM82] =
    {
        .name = _("TM82"),
        .itemId = ITEM_TM82,
        .price = 3000,
        .description = sTM82Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM83] =
    {
        .name = _("TM83"),
        .itemId = ITEM_TM83,
        .price = 15000,
        .description = sTM83Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM84] =
    {
        .name = _("TM84"),
        .itemId = ITEM_TM84,
        .price = 3000,
        .description = sTM84Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM85] =
    {
        .name = _("TM85"),
        .itemId = ITEM_TM85,
        .price = 3000,
        .description = sTM85Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM86] =
    {
        .name = _("TM86"),
        .itemId = ITEM_TM86,
        .price = 3000,
        .description = sTM86Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM87] =
    {
        .name = _("TM87"),
        .itemId = ITEM_TM87,
        .price = 3000,
        .description = sTM87Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM88] =
    {
        .name = _("TM88"),
        .itemId = ITEM_TM88,
        .price = 3000,
        .description = sTM88Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM89] =
    {
        .name = _("TM89"),
        .itemId = ITEM_TM89,
        .price = 3000,
        .description = sTM89Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM90] =
    {
        .name = _("TM90"),
        .itemId = ITEM_TM90,
        .price = 3000,
        .description = sTM90Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM91] =
    {
        .name = _("TM91"),
        .itemId = ITEM_TM91,
        .price = 3000,
        .description = sTM91Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM92] =
    {
        .name = _("TM92"),
        .itemId = ITEM_TM92,
        .price = 12000,
        .description = sTM92Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM93] =
    {
        .name = _("TM93"),
        .itemId = ITEM_TM93,
        .price = 3000,
        .description = sTM93Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM94] =
    {
        .name = _("TM94"),
        .itemId = ITEM_TM94,
        .price = 3000,
        .description = sTM94Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM95] =
    {
        .name = _("TM95"),
        .itemId = ITEM_TM95,
        .price = 3000,
        .description = sTM95Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM96] =
    {
        .name = _("TM96"),
        .itemId = ITEM_TM96,
        .price = 30000,
        .description = sTM96Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM97] =
    {
        .name = _("TM97"),
        .itemId = ITEM_TM97,
        .price = 3000,
        .description = sTM97Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM98] =
    {
        .name = _("TM98"),
        .itemId = ITEM_TM98,
        .price = 30000,
        .description = sTM98Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM99] =
    {
        .name = _("TM99"),
        .itemId = ITEM_TM99,
        .price = 3000,
        .description = sTM99Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM100] =
    {
        .name = _("TM100"),
        .itemId = ITEM_TM100,
        .price = 3000,
        .description = sTM100Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM101_CLOSE_COMBAT] =
    {
        .name = _("TM101"),
        .itemId = ITEM_TM101_CLOSE_COMBAT,
        .price = 0,
        .description = sTM101Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM102_DRACO_METEOR] =
    {
        .name = _("TM102"),
        .itemId = ITEM_TM102_DRACO_METEOR,
        .price = 0,
        .description = sTM102Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM103_SURF] =
    {
        .name = _("TM103"),
        .itemId = ITEM_TM103_SURF,
        .price = 0,
        .description = sTM103Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM104_STRENGTH] =
    {
        .name = _("TM104"),
        .itemId = ITEM_TM104_STRENGTH,
        .price = 0,
        .description = sTM104Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM105_SUPERPOWER] =
    {
        .name = _("TM105"),
        .itemId = ITEM_TM105_SUPERPOWER,
        .price = 0,
        .description = sTM105Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM106_OUTRAGE] =
    {
        .name = _("TM106"),
        .itemId = ITEM_TM106_OUTRAGE,
        .price = 0,
        .description = sTM106Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM107_WATERFALL] =
    {
        .name = _("TM107"),
        .itemId = ITEM_TM107_WATERFALL,
        .price = 0,
        .description = sTM107Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM108_FOUL_PLAY] =
    {
        .name = _("TM108"),
        .itemId = ITEM_TM108_FOUL_PLAY,
        .price = 0,
        .description = sTM108Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM109_SEISMIC_TOSS] =
    {
        .name = _("TM109"),
        .itemId = ITEM_TM109_SEISMIC_TOSS,
        .price = 10000,
        .description = sTM109Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM110_VENOSHOCK] =
    {
        .name = _("TM110"),
        .itemId = ITEM_TM110_VENOSHOCK,
        .price = 10000,
        .description = sTM110Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM111_AMNESIA] =
    {
        .name = _("TM111"),
        .itemId = ITEM_TM111_AMNESIA,
        .price = 10000,
        .description = sTM111Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM112_SLUDGE_WAVE] =
    {
        .name = _("TM112"),
        .itemId = ITEM_TM112_SLUDGE_WAVE,
        .price = 0,
        .description = sTM112Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM113_SOLAR_BLADE] =
    {
        .name = _("TM113"),
        .itemId = ITEM_TM113_SOLAR_BLADE,
        .price = 0,
        .description = sTM113Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM114_HEX] =
    {
        .name = _("TM114"),
        .itemId = ITEM_TM114_HEX,
        .price = 0,
        .description = sTM114Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM115_HOWLING_GALE] =
    {
        .name = _("TM115"),
        .itemId = ITEM_TM115_HOWLING_GALE,
        .price = 0,
        .description = sTM115Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM116_GRASSY_TERRAIN] =
    {
        .name = _("TM116"),
        .itemId = ITEM_TM116_GRASSY_TERRAIN,
        .price = 0,
        .description = sTM116Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM117_ELECTRIC_TERRAIN] =
    {
        .name = _("TM117"),
        .itemId = ITEM_TM117_ELECTRIC_TERRAIN,
        .price = 0,
        .description = sTM117Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM118_PSYCHIC_TERRAIN] =
    {
        .name = _("TM118"),
        .itemId = ITEM_TM118_PSYCHIC_TERRAIN,
        .price = 0,
        .description = sTM118Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM119_MISTY_TERRAIN] =
    {
        .name = _("TM119"),
        .itemId = ITEM_TM119_MISTY_TERRAIN,
        .price = 0,
        .description = sTM119Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM120_DEFOG] =
    {
        .name = _("TM120"),
        .itemId = ITEM_TM120_DEFOG,
        .price = 12000,
        .description = sTM120Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

// Charms

    [ITEM_OVAL_CHARM] =
    {
        .name = _("Oval Charm"),
        .itemId = ITEM_OVAL_CHARM,
        .price = 0,
        .importance = 1,
        .description = sOvalCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHINY_CHARM] =
    {
        .name = _("Shiny Charm"),
        .itemId = ITEM_SHINY_CHARM,
        .price = 0,
        .importance = 1,
        .description = sShinyCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CATCHING_CHARM] =
    {
        .name = _("CatchngCharm"),
        .itemId = ITEM_CATCHING_CHARM,
        .price = 0,
        .importance = 1,
        .description = sCatchingCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXP_CHARM] =
    {
        .name = _("Exp. Charm"),
        .itemId = ITEM_EXP_CHARM,
        .price = 0,
        .importance = 1,
        .description = sExpCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Form-changing Key Items

    [ITEM_ROTOM_CATALOG] =
    {
        .name = _("RotomCatalog"),
        .itemId = ITEM_ROTOM_CATALOG,
        .price = 0,
        .importance = 1,
        .description = sRotomCatalogDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_GRACIDEA] =
    {
        .name = _("Gracidea"),
        .itemId = ITEM_GRACIDEA,
        .price = 0,
        .description = sGracideaDesc,
        .pocket = POCKET_KEY_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange,
            .secondaryId = FORM_ITEM_USE_TIME,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_REVEAL_GLASS] =
    {
        .name = _("Reveal Glass"),
        .itemId = ITEM_REVEAL_GLASS,
        .price = 0,
        .description = sRevealGlassDesc,
        .pocket = POCKET_KEY_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_DNA_SPLICERS] =
    {
        .name = _("DNA Splicers"),
        .itemId = ITEM_DNA_SPLICERS,
        .price = 0,
        .description = sDNASplicersDesc,
        .pocket = POCKET_KEY_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_ZYGARDE_CUBE] =
    {
        .name = _("Zygarde Cube"),
        .itemId = ITEM_ZYGARDE_CUBE,
        .price = 0,
        .importance = 1,
        .description = sZygardeCubeDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_PRISON_BOTTLE] =
    {
        .name = _("Prison Bottle"),
        .itemId = ITEM_PRISON_BOTTLE,
        .price = 0,
        .description = sPrisonBottleDesc,
        .pocket = POCKET_KEY_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_N_SOLARIZER] =
    {
        .name = _("N-Solarizer"),
        .itemId = ITEM_N_SOLARIZER,
        .price = 0,
        .description = sNSolarizerDesc,
        .pocket = POCKET_KEY_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_N_LUNARIZER] =
    {
        .name = _("N-Lunarizer"),
        .itemId = ITEM_N_LUNARIZER,
        .price = 0,
        .description = sNLunarizerDesc,
        .pocket = POCKET_KEY_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_REINS_OF_UNITY] =
    {
        .name = _("ReinsOfUnity"),
        .itemId = ITEM_REINS_OF_UNITY,
        .price = 0,
        .description = sReinsOfUnityDesc,
        .pocket = POCKET_KEY_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

// Battle Mechanic Key Items

    [ITEM_MEGA_RING] =
    {
        .name = _("Mega Ring"),
        .itemId = ITEM_MEGA_RING,
        .price = 0,
        .importance = 1,
        .description = sMegaRingDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_Z_POWER_RING] =
    {
        .name = _("Z-Power Ring"),
        .itemId = ITEM_Z_POWER_RING,
        .price = 0,
        .importance = 1,
        .description = sZPowerRingDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DYNAMAX_BAND] =
    {
        .name = _("Dynamax Band"),
        .itemId = ITEM_DYNAMAX_BAND,
        .price = 0,
        .description = sDynamaxBandDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Misc. Key Items

    [ITEM_BICYCLE] =
    {
        .name = _("Bicycle"),
        .itemId = ITEM_BICYCLE,
        .price = 0,
        .description = sBicycleDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MACH_BIKE] =
    {
        .name = _("Mach Bike"),
        .itemId = ITEM_MACH_BIKE,
        .price = 0,
        .description = sMachBikeDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = MACH_BIKE,
    },

    [ITEM_ACRO_BIKE] =
    {
        .name = _("Rydel Bike"),
        .itemId = ITEM_ACRO_BIKE,
        .price = 0,
        .description = sAcroBikeDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = ACRO_BIKE,
    },

    [ITEM_OLD_ROD] =
    {
        .name = _("Old Rod"),
        .itemId = ITEM_OLD_ROD,
        .price = 0,
        .description = sOldRodDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
    },

    [ITEM_GOOD_ROD] =
    {
        .name = _("Good Rod"),
        .itemId = ITEM_GOOD_ROD,
        .price = 0,
        .description = sGoodRodDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
    },

    [ITEM_SUPER_ROD] =
    {
        .name = _("Super Rod"),
        .itemId = ITEM_SUPER_ROD,
        .price = 0,
        .description = sSuperRodDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
    },

    [ITEM_DOWSING_MACHINE] =
    {
        .name = _("Itemfinder"),
        .itemId = ITEM_DOWSING_MACHINE,
        .price = 0,
        .description = sDowsingMachineDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
    },

    [ITEM_TOWN_MAP] =
    {
        .name = _("Town Map"),
        .itemId = ITEM_TOWN_MAP,
        .price = 0,
        .description = sTownMapDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_VS_SEEKER] =
    {
        .name = _("Vs. Seeker"),
        .itemId = ITEM_VS_SEEKER,
        .price = 0,
        .description = sVsSeekerDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TM_CASE] =
    {
        .name = _("TM Case"),
        .itemId = ITEM_TM_CASE,
        .price = 0,
        .description = sTMCaseDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BERRY_POUCH] =
    {
        .name = _("Berry Pouch"),
        .itemId = ITEM_BERRY_POUCH,
        .price = 0,
        .description = sBerryPouchDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKEMON_BOX_LINK] =
    {
        .name = _("{PKMN} Box Link"),
        .itemId = ITEM_POKEMON_BOX_LINK,
        .price = 0,
        .description = sPokemonBoxLinkDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_COIN_CASE] =
    {
        .name = _("Coin Case"),
        .itemId = ITEM_COIN_CASE,
        .price = 0,
        .description = sCoinCaseDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
    },

    [ITEM_POWDER_JAR] =
    {
        .name = _("Powder Jar"),
        .itemId = ITEM_POWDER_JAR,
        .price = 0,
        .description = sPowderJarDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
    },

    [ITEM_WAILMER_PAIL] =
    {
        .name = _("Wailmer Pail"),
        .itemId = ITEM_WAILMER_PAIL,
        .price = 0,
        .description = sWailmerPailDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
    },

    [ITEM_POKE_RADAR] =
    {
        .name = _("Poké Radar"),
        .itemId = ITEM_POKE_RADAR,
        .price = 0,
        .description = sPokeRadarDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = _("{POKEBLOCK} Case"),
        .itemId = ITEM_POKEBLOCK_CASE,
        .price = 0,
        .description = sPokeblockCaseDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PBLOCK_CASE,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
    },

    [ITEM_SOOT_SACK] =
    {
        .name = _("Soot Sack"),
        .itemId = ITEM_SOOT_SACK,
        .price = 0,
        .description = sSootSackDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = _("Poké Flute"),
        .itemId = ITEM_POKE_FLUTE,
        .price = 0,
        .description = sPokeFluteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = _("Fame Checker"),
        .itemId = ITEM_FAME_CHECKER,
        .price = 0,
        .description = sFameCheckerDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEACHY_TV] =
    {
        .name = _("Teachy TV"),
        .itemId = ITEM_TEACHY_TV,
        .price = 0,
        .description = sTeachyTVDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Story Key Items

    [ITEM_SS_TICKET] =
    {
        .name = _("S.S. Ticket"),
        .itemId = ITEM_SS_TICKET,
        .price = 0,
        .description = sSSTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EON_TICKET] =
    {
        .name = _("Eon Ticket"),
        .itemId = ITEM_EON_TICKET,
        .price = 0,
        .description = sEonTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = _("Mystic Ticket"),
        .itemId = ITEM_MYSTIC_TICKET,
        .price = 0,
        .description = sMysticTicketDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = _("Aurora Ticket"),
        .itemId = ITEM_AURORA_TICKET,
        .price = 0,
        .description = sAuroraTicketDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OLD_SEA_MAP] =
    {
        .name = _("Old Sea Map"),
        .itemId = ITEM_OLD_SEA_MAP,
        .price = 0,
        .description = sOldSeaMapDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LETTER] =
    {
        .name = _("Letter"),
        .itemId = ITEM_LETTER,
        .price = 0,
        .description = sLetterDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_PARTS] =
    {
        .name = _("Devon Parts"),
        .itemId = ITEM_DEVON_PARTS,
        .price = 0,
        .description = sDevonPartsDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = _("Go-Goggles"),
        .itemId = ITEM_GO_GOGGLES,
        .price = 0,
        .description = sGoGogglesDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = _("Devon Scope"),
        .itemId = ITEM_DEVON_SCOPE,
        .price = 0,
        .description = sDevonScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = _("Basement Key"),
        .itemId = ITEM_BASEMENT_KEY,
        .price = 0,
        .description = sBasementKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCANNER] =
    {
        .name = _("Scanner"),
        .itemId = ITEM_SCANNER,
        .price = 0,
        .description = sScannerDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = _("Storage Key"),
        .itemId = ITEM_STORAGE_KEY,
        .price = 0,
        .description = sStorageKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_1] =
    {
        .name = _("Key to Room 1"),
        .itemId = ITEM_KEY_TO_ROOM_1,
        .price = 0,
        .description = sKeyToRoom1Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_2] =
    {
        .name = _("Key to Room 2"),
        .itemId = ITEM_KEY_TO_ROOM_2,
        .price = 0,
        .description = sKeyToRoom2Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_4] =
    {
        .name = _("Key to Room 4"),
        .itemId = ITEM_KEY_TO_ROOM_4,
        .price = 0,
        .description = sKeyToRoom4Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_6] =
    {
        .name = _("Key to Room 6"),
        .itemId = ITEM_KEY_TO_ROOM_6,
        .price = 0,
        .description = sKeyToRoom6Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METEORITE] =
    {
        .name = _("Meteorite"),
        .itemId = ITEM_METEORITE,
        .price = 0,
        .description = sMeteoriteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGMA_EMBLEM] =
    {
        .name = _("Magma Emblem"),
        .itemId = ITEM_MAGMA_EMBLEM,
        .price = 0,
        .description = sMagmaEmblemDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = _("Contest Pass"),
        .itemId = ITEM_CONTEST_PASS,
        .price = 0,
        .description = sContestPassDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OAKS_PARCEL] =
    {
        .name = _("Oak's Parcel"),
        .itemId = ITEM_OAKS_PARCEL,
        .price = 0,
        .description = sOaksParcelDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SECRET_KEY] =
    {
        .name = _("Secret Key"),
        .itemId = ITEM_SECRET_KEY,
        .price = 0,
        .description = sSecretKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = _("Bike Voucher"),
        .itemId = ITEM_BIKE_VOUCHER,
        .price = 0,
        .description = sBikeVoucherDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = _("Gold Teeth"),
        .itemId = ITEM_GOLD_TEETH,
        .price = 0,
        .description = sGoldTeethDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CARD_KEY] =
    {
        .name = _("Card Key"),
        .itemId = ITEM_CARD_KEY,
        .price = 0,
        .description = sCardKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIFT_KEY] =
    {
        .name = _("Lift Key"),
        .itemId = ITEM_LIFT_KEY,
        .price = 0,
        .description = sLiftKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = _("Silph Scope"),
        .itemId = ITEM_SILPH_SCOPE,
        .price = 0,
        .description = sSilphScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TRI_PASS] =
    {
        .name = _("Tri-Pass"),
        .itemId = ITEM_TRI_PASS,
        .price = 0,
        .description = sTriPassDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = _("Rainbow Pass"),
        .itemId = ITEM_RAINBOW_PASS,
        .price = 0,
        .description = sRainbowPassDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEA] =
    {
        .name = _("Tea"),
        .itemId = ITEM_TEA,
        .price = 0,
        .description = sTeaDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUBY] =
    {
        .name = _("Ruby"),
        .itemId = ITEM_RUBY,
        .price = 0,
        .description = sRubyDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = _("Sapphire"),
        .itemId = ITEM_SAPPHIRE,
        .price = 0,
        .description = sSapphireDesc,
        .importance = 1,
        //.registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
};
