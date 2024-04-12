gText_WouldYouLikeToBuyBerries::
	.string "Hello! Would you care to purchase\n"
	.string "some berries for your Pokémon?\p"
	.string "All profits go towards improving\n"
	.string "Hoenn's Pokémon Centers.$"
	

BerryLady::
	lock
	faceplayer
	message gText_WouldYouLikeToBuyBerries
	waitmessage
	goto_if_set FLAG_BADGE07_GET, BerryShopTwins
	goto_if_set FLAG_BADGE06_GET, BerryShopWinona
	goto_if_set FLAG_BADGE05_GET, BerryShopNorman
	goto_if_set FLAG_BADGE03_GET, BerryShopWattson
	goto_if_set FLAG_BADGE02_GET, BerryShopBrawly
	pokemart BerriesBase
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
	release
	end

BerryShopTwins::
	pokemart BerriesTwins
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
	release
	end
	
BerryShopWinona::
	pokemart BerriesWinona
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
	release
	end
	
BerryShopNorman::
	pokemart BerriesNorman
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
	release
	end

BerryShopWattson::
	pokemart BerriesWattson
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
	release
	end
	
BerryShopBrawly::
	pokemart BerriesBrawly
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
	release
	end
	
.align 2
BerriesTwins:
    .2byte ITEM_SITRUS_BERRY
    .2byte ITEM_LUM_BERRY
    .2byte ITEM_LIECHI_BERRY
    .2byte ITEM_PETAYA_BERRY
    .2byte ITEM_SALAC_BERRY
    .2byte ITEM_CUSTAP_BERRY
    .2byte ITEM_FIGY_BERRY
    .2byte ITEM_WIKI_BERRY
    .2byte ITEM_MAGO_BERRY
    .2byte ITEM_AGUAV_BERRY
    .2byte ITEM_IAPAPA_BERRY
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_CHESTO_BERRY
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_RAWST_BERRY
    .2byte ITEM_ASPEAR_BERRY
    .2byte ITEM_PERSIM_BERRY
    .2byte ITEM_NONE
	release
	end
	
.align 2
BerriesWinona:
    .2byte ITEM_SITRUS_BERRY
    .2byte ITEM_LUM_BERRY
    .2byte ITEM_LIECHI_BERRY
    .2byte ITEM_PETAYA_BERRY
    .2byte ITEM_SALAC_BERRY
    .2byte ITEM_FIGY_BERRY
    .2byte ITEM_WIKI_BERRY
    .2byte ITEM_MAGO_BERRY
    .2byte ITEM_AGUAV_BERRY
    .2byte ITEM_IAPAPA_BERRY
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_CHESTO_BERRY
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_RAWST_BERRY
    .2byte ITEM_ASPEAR_BERRY
    .2byte ITEM_PERSIM_BERRY
    .2byte ITEM_NONE
	release
	end
		
.align 2
BerriesNorman:
    .2byte ITEM_SITRUS_BERRY
    .2byte ITEM_LUM_BERRY
    .2byte ITEM_LIECHI_BERRY
    .2byte ITEM_PETAYA_BERRY
    .2byte ITEM_SALAC_BERRY
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_CHESTO_BERRY
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_RAWST_BERRY
    .2byte ITEM_ASPEAR_BERRY
    .2byte ITEM_PERSIM_BERRY
    .2byte ITEM_NONE
	release
	end
	
.align 2
BerriesWattson:
    .2byte ITEM_SITRUS_BERRY
    .2byte ITEM_LUM_BERRY
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_CHESTO_BERRY
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_RAWST_BERRY
    .2byte ITEM_ASPEAR_BERRY
    .2byte ITEM_PERSIM_BERRY
    .2byte ITEM_NONE
	release
	end
	
.align 2
BerriesBrawly:
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_CHESTO_BERRY
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_RAWST_BERRY
    .2byte ITEM_ASPEAR_BERRY
    .2byte ITEM_PERSIM_BERRY
    .2byte ITEM_NONE
	release
	end
	
.align 2
BerriesBase:
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_CHESTO_BERRY
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_NONE
	release
	end
