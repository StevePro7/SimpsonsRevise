#include "actor_manager.h"
#include "../devkit/_sms_manager.h"
#include "../object/actor_object.h"
#include "../banks/bank2.h"
#include "../banks/bank3.h"
#include "../gfx.h"

#define ACTOR_TILES_OFFSET		64

void engine_actor_manager_draw()
{
	const unsigned char index = 14;
	const unsigned char *tileset = actor_tileset[ index ];
	const unsigned char *tilemap = actor_tilemap[ index ];
	const unsigned char *palette = actor_palette[ index ];
	unsigned char banking = actor_banking[ index ];

	//devkit_SMS_mapROMBank( banking );
	//devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
	//devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
	//devkit_SMS_loadBGPalette( ( void * ) palette );

	//devkit_SMS_mapROMBank( actor04__tiles__psgcompr_bank );
	//devkit_SMS_loadPSGaidencompressedTiles( actor04__tiles__psgcompr, ACTOR_TILES_OFFSET );
	//devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) actor04__tilemap__stmcompr );
	//devkit_SMS_loadBGPalette( ( void * ) actor04__palette__bin );


	//devkit_SMS_mapROMBank( 5 );
	devkit_SMS_mapROMBank( banking );

	//devkit_SMS_loadPSGaidencompressedTiles( actor00__tiles__psgcompr, ACTOR_TILES_OFFSET );
	devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
	//devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) actor00__tilemap__stmcompr );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
	//devkit_SMS_loadBGPalette( ( void * ) actor00__palette__bin );
	devkit_SMS_loadBGPalette( ( void * ) palette );
}