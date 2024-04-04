static const u16 sTilesetPalOverride_Petalburg06[] = INCBIN_U16("data/tilesets/secondary/petalburg/palettes/06_over.gbapal");
static const u16 sTilesetPalOverride_Petalburg08[] = INCBIN_U16("data/tilesets/secondary/petalburg/palettes/08_over.gbapal");
static const u16 sTilesetPalOverride_Rustboro09[]  = INCBIN_U16("data/tilesets/secondary/rustboro/palettes/09_over.gbapal");
static const u16 sTilesetPalOverride_Lavaridge06[] = INCBIN_U16("data/tilesets/secondary/lavaridge/palettes/06_over.gbapal");
static const u16 sTilesetPalOverride_Lavaridge10[] = INCBIN_U16("data/tilesets/secondary/lavaridge/palettes/10_over.gbapal");

#define OVERRIDES_END { .slot = 0xFF, }

const struct PaletteOverride gTilesetPalOverrides_Petalburg[] =
{
    {
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Petalburg06,
    },
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Petalburg08,
    },
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_Rustboro[] =
{
    {
        .slot = 9,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Rustboro09,
    },
    OVERRIDES_END
};

const struct PaletteOverride gTilesetPalOverrides_Lavaridge[] =
{
    {
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Lavaridge06,
    },
    {
        .slot = 10,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = sTilesetPalOverride_Lavaridge10,
    },
    OVERRIDES_END
};