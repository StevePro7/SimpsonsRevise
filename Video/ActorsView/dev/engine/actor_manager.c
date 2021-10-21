#include "actor_manager.h"
#include "../devkit/_sms_manager.h"
#include "../object/actor_object.h"
#include "../gfx.h"

#define ACTOR_TILES_OFFSET		64

void engine_actor_manager_draw()
{
	const char index = 0;
	const unsigned char *tileset = actor_tileset[ index ];
	const unsigned char *tilemap = actor_tilemap[ index ];
	const unsigned char *palette= actor_palette[ index ];
	const unsigned char banking = actor_banking[ index ];

	devkit_SMS_mapROMBank( banking );
	devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
	devkit_SMS_loadBGPalette( ( void * ) palette );
}