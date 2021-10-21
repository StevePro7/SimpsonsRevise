#include "actor_manager.h"
//#include "font_manager.h"
#include "../devkit/_sms_manager.h"
#include "../object/actor_object.h"
#include "../banks/bank2.h"
#include "../banks/bank3.h"
#include "../gfx.h"

#define ACTOR_TILES_OFFSET		64

//void engine_actor_manager_draw( const unsigned char index )
void engine_actor_manager_draw()
{
	const unsigned char index = 8;
	const unsigned char *tileset = ( const unsigned char * ) actor_tileset[ index ];
	const unsigned char *tilemap = ( const unsigned char * ) actor_tilemap[ index ];
	const unsigned char *palette = ( const unsigned char * ) actor_palette[ index ];
	//unsigned char banking = ( const unsigned char ) actor_banking[ index ];

	// Magic number = 2 : base bank.
	unsigned char banking = index / 4 + 2;
	devkit_SMS_mapROMBank( banking );
	//devkit_SMS_mapROMBank( 2 );
	//////devkit_SMS_loadPSGaidencompressedTiles( actor00__tiles__psgcompr, ACTOR_TILES_OFFSET );
	devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
	//////devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) actor00__tilemap__stmcompr );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
	//////devkit_SMS_loadBGPalette( ( void * ) actor00__palette__bin );
	devkit_SMS_loadBGPalette( ( void * ) palette );

	//engine_font_manager_draw_data( rom, 10, 14 );
	//engine_font_manager_draw_data( banking, 10, 14 );
}