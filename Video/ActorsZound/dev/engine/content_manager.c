#include "content_manager.h"
#include "global_manager.h"
#include "../devkit/_sms_manager.h"
#include "../banks/bank6.h"
#include "../banks/bank7.h"
#include "../banks/bank14.h"
#include "../gfx.h"

#define FONT_TILES_OFFSET		0
#define FULL_TILES_OFFSET		64

void engine_content_manager_load_font()
{
	// Font tiles.
	devkit_SMS_loadPSGaidencompressedTiles( font__tiles__psgcompr, FONT_TILES_OFFSET );
	devkit_SMS_loadBGPalette( ( void * ) font__palette__bin );
}

void engine_content_manager_load_sprites()
{
	// Sprite tiles.
	devkit_SMS_loadPSGaidencompressedTiles( select__tiles__psgcompr, SPRITE_TILES );
	devkit_SMS_loadPSGaidencompressedTiles( right__tiles__psgcompr, SPRITE_TILES + 16 );
	devkit_SMS_loadPSGaidencompressedTiles( wrong__tiles__psgcompr, SPRITE_TILES + 32 );
	devkit_SMS_loadSpritePalette( ( void * ) wrong__palette__bin );
}

void engine_content_manager_load_sprite_palette()
{
	devkit_SMS_setSpritePaletteColor( 0, 3, 3, 3 );
}

void engine_content_manager_splash()
{
	devkit_SMS_mapROMBank( splash__tiles__psgcompr_bank );
	devkit_SMS_loadPSGaidencompressedTiles( splash__tiles__psgcompr, FULL_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) splash__tilemap__stmcompr );
	devkit_SMS_loadBGPalette( ( void * ) splash__palette__bin );
}

void engine_content_manager_title()
{
	devkit_SMS_mapROMBank( simpsons__tiles__psgcompr_bank );
	devkit_SMS_loadPSGaidencompressedTiles( simpsons__tiles__psgcompr, FULL_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) simpsons__tilemap__stmcompr );
	devkit_SMS_loadBGPalette( ( void * ) simpsons__palette__bin );
}
