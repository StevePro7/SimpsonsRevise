#include "actor_manager.h"
#include "../devkit/_sms_manager.h"
#include "../object/actor_object.h"
#include "../gfx.h"

#define ACTOR_TILES_OFFSET		64
#define ACTOR_TILES_TOTALS		4
#define ACTOR_TILES_BANKED		2

//void engine_actor_manager_draw( const unsigned char index )
void engine_actor_manager_draw()
{
	const unsigned char index = 15;

	const unsigned char *tileset = ( const unsigned char * ) actor_tileset[ index ];
	const unsigned char *tilemap = ( const unsigned char * ) actor_tilemap[ index ];
	const unsigned char *palette = ( const unsigned char * ) actor_palette[ index ];
	unsigned char banking = index / ACTOR_TILES_TOTALS + ACTOR_TILES_BANKED;

	devkit_SMS_mapROMBank( banking );
	devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
	devkit_SMS_loadBGPalette( ( void * ) palette );
}