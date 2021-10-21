#include "actor_manager.h"
//#include "font_manager.h"
#include "../devkit/_sms_manager.h"
#include "../object/actor_object.h"
#include "../gfx.h"

#define ACTOR_TILES_OFFSET 64
#define ACTOR_TILES_TOTALS 4
#define ACTOR_TILES_BANKED 2

void engine_actor_manager_draw_tests()
{
	unsigned char index = 12;
	//unsigned int index = tester;

	const unsigned char *tileset = actor_tileset[ index ];
	const unsigned char *tilemap = actor_tilemap[ index ];
	const unsigned char *palette = actor_palette[ index ];
	unsigned char banking = index / ACTOR_TILES_TOTALS + ACTOR_TILES_BANKED;
	//unsigned char banking = 5;
	//unsigned char banking = 3;

	//engine_font_manager_draw_data( banking, 10, 18 );
	//engine_font_manager_draw_data( index, 10, 20 );

	devkit_SMS_mapROMBank( banking );
	//devkit_SMS_mapROMBank( 2 );
	devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
	devkit_SMS_loadBGPalette( ( void * ) palette );

	//engine_font_manager_draw_data( index, 10, 21 );
}

void engine_actor_manager_draw_actor(unsigned char index)
{
	//unsigned char index = 4;
	//unsigned int index = tester;

	const unsigned char *tileset = actor_tileset[ index ];
	const unsigned char *tilemap = actor_tilemap[ index ];
	const unsigned char *palette = actor_palette[ index ];
	//unsigned char banking = index / ACTOR_TILES_TOTALS + ACTOR_TILES_BANKED;
	unsigned char banking = 5;
	//unsigned char banking = 3;

	//engine_font_manager_draw_data( banking, 10, 18 );
	//engine_font_manager_draw_data( index, 10, 20 );

	devkit_SMS_mapROMBank(banking);
	//devkit_SMS_mapROMBank( 2 );
	devkit_SMS_loadPSGaidencompressedTiles(tileset, ACTOR_TILES_OFFSET);
	devkit_SMS_loadSTMcompressedTileMap(0, 0, (void *)tilemap);
	devkit_SMS_loadBGPalette((void *)palette);

	//engine_font_manager_draw_data( index, 10, 21 );
}