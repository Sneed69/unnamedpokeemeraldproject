#include "global.h"
#include "event_data.h"
#include "field_message_box.h"
#include "pokedex.h"
#include "strings.h"

bool16 ScriptGetPokedexInfo(void)
{
    if (gSpecialVar_0x8004 == 0) // is national dex not present?
    {
        gSpecialVar_0x8005 = GetHoennPokedexCount(FLAG_GET_SEEN);
        gSpecialVar_0x8006 = GetHoennPokedexCount(FLAG_GET_CAUGHT);
    }
    else
    {
        gSpecialVar_0x8005 = GetNationalPokedexCount(FLAG_GET_SEEN);
        gSpecialVar_0x8006 = GetNationalPokedexCount(FLAG_GET_CAUGHT);
    }

    return IsNationalPokedexEnabled();
}

// This shows your Hoenn Pokedex rating and not your National Dex.
const u8 *GetPokedexRatingText(u16 count)
{
    if (count < 10)
        return gBirchDexRatingText_LessThan10;
    if (count < 20)
        return gBirchDexRatingText_LessThan20;
    if (count < 30)
        return gBirchDexRatingText_LessThan30;
    if (count < 40)
        return gBirchDexRatingText_LessThan40;
    if (count < 50)
        return gBirchDexRatingText_LessThan50;
    if (count < 75)
        return gBirchDexRatingText_LessThan60;
    if (count < 120)
        return gBirchDexRatingText_LessThan70;
    if (count < 140)
        return gBirchDexRatingText_LessThan80;
    if (count < 160)
        return gBirchDexRatingText_LessThan90;
    if (count < 180)
        return gBirchDexRatingText_LessThan100;
    if (count < 200)
        return gBirchDexRatingText_LessThan110;
    if (count < 230)
        return gBirchDexRatingText_LessThan120;
    if (count < 240)
        return gBirchDexRatingText_LessThan130;
    if (count < 250)
        return gBirchDexRatingText_LessThan140;
    if (count < 300)
        return gBirchDexRatingText_LessThan160;
    if (count < 325)
        return gBirchDexRatingText_LessThan150;
    if (count < MY_DEX_COUNT - 65)
        return gBirchDexRatingText_LessThan170;
    if (count < MY_DEX_COUNT - 40)
        return gBirchDexRatingText_LessThan180;
    if (count < MY_DEX_COUNT - 15)
        return gBirchDexRatingText_LessThan190;
    if (count < MY_DEX_COUNT)
        return gBirchDexRatingText_LessThan200;
    if (count == MY_DEX_COUNT)
        return gBirchDexRatingText_DexCompleted;
    return gBirchDexRatingText_LessThan10;
}

void ShowPokedexRatingMessage(void)
{
    ShowFieldMessage(GetPokedexRatingText(gSpecialVar_0x8004));
}
