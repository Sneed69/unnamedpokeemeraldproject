	.align 2
gTilesetPalOverrides_Petalburg::
	.byte 6             @ palette index
	.byte 19    @ start hour (inclusive)
	.byte 24  @ end hour (exclusive)
	.byte 0             @ padding
	.4byte gTilesetPalOverride_Petalburg06

	.byte 8             @ palette index
	.byte 19    @ start hour (inclusive)
	.byte 24  @ end hour (exclusive)
	.byte 0             @ padding
	.4byte gTilesetPalOverride_Petalburg08

	.byte 0xFF
	.byte 0
	.byte 0
	.byte 0 @ padding
	.4byte NULL

    .align 2
gTilesetPalOverrides_Rustboro::
	.byte 9             @ palette index
	.byte 19    @ start hour (inclusive)
	.byte 5  @ end hour (exclusive)
	.byte 0             @ padding
	.4byte gTilesetPalOverride_Rustboro09

	.byte 0xFF
	.byte 0
	.byte 0
	.byte 0 @ padding
	.4byte NULL

    .align 2
gTilesetPalOverrides_Lavaridge::
	.byte 6             @ palette index
	.byte 15    @ start hour (inclusive)
	.byte 13  @ end hour (exclusive)
	.byte 0             @ padding
	.4byte gTilesetPalOverride_Lavaridge06

	.byte 10             @ palette index
	.byte 15    @ start hour (inclusive)
	.byte 13  @ end hour (exclusive)
	.byte 0             @ padding
	.4byte gTilesetPalOverride_Lavaridge10

	.byte 0xFF
	.byte 0
	.byte 0
	.byte 0 @ padding
	.4byte NULL
