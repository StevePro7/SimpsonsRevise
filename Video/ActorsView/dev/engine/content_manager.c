#include "content_manager.h"
#include "../devkit/_sms_manager.h"
#include "../banks/bank2.h"
//#include "../banks/bank3.h"
#include "../banks/bank6.h"
#include "../banks/bank7.h"
#include "../gfx.h"

#define FONT_TILES_OFFSET		0
#define FULL_TILES_OFFSET		64

void engine_content_manager_load_font_tiles()
{
	// Font tiles.
	devkit_SMS_loadPSGaidencompressedTiles( font_tiles__tiles__psgcompr, FONT_TILES_OFFSET );
	devkit_SMS_loadBGPalette( ( void * ) font_tiles__palette__bin );
}

void engine_content_manager_load_sprite_palette()
{
	devkit_SMS_setSpritePaletteColor( 0, 3, 3, 3 );
}

void engine_content_manager_load_splash()
{
	devkit_SMS_mapROMBank( splash__tiles__psgcompr_bank );
	devkit_SMS_loadPSGaidencompressedTiles( splash__tiles__psgcompr, FULL_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) splash__tilemap__stmcompr );
	devkit_SMS_loadBGPalette( ( void * ) splash__palette__bin );
}

void engine_content_manager_load_title()
{
	devkit_SMS_mapROMBank( simpsons__tiles__psgcompr_bank );
	devkit_SMS_loadPSGaidencompressedTiles( simpsons__tiles__psgcompr, FULL_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) simpsons__tilemap__stmcompr );
	devkit_SMS_loadBGPalette( ( void * ) simpsons__palette__bin );
}

void foo()
{
	//devkit_SMS_mapROMBank( actor01__tiles__psgcompr_bank );
	//devkit_SMS_loadPSGaidencompressedTiles( actor01__tiles__psgcompr, FULL_TILES_OFFSET );
	//devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) actor01__tilemap__stmcompr );
	//devkit_SMS_loadBGPalette( ( void * ) actor01__palette__bin );

	devkit_SMS_mapROMBank( actor00__tiles__psgcompr_bank );
	devkit_SMS_loadPSGaidencompressedTiles( actor00__tiles__psgcompr, FULL_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) actor00__tilemap__stmcompr );
	devkit_SMS_loadBGPalette( ( void * ) actor00__palette__bin );
}