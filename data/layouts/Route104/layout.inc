Route104_MapBorder:: @ 829455C
	.incbin "data/layouts/Route104/border.bin"

Route104_MapBlockdata:: @ 8294564
	.incbin "data/layouts/Route104/map.bin"

	.align 2
Route104_Layout:: @ 8295E64
	.4byte 0x28
	.4byte 0x50
	.4byte Route104_MapBorder
	.4byte Route104_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Rustboro
