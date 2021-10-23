#include "content_manager.h"
#include "../devkit/_sms_manager.h"
#include "../banks/bank6.h"
//#include "../banks/bank7.h"
#include "../banks/bank6.h"
#include "../banks/bank7.h"
#include "../gfx.h"

#define FONT_TILES_OFFSET		0
#define FULL_TILES_OFFSET		64

void engine_content_manager_load_font()
{
	// Font tiles.
	devkit_SMS_loadPSGaidencompressedTiles( font__tiles__psgcompr, FONT_TILES_OFFSET );
	devkit_SMS_loadBGPalette( ( void * ) font__palette__bin );		// TODO - comment out when loading title or actor
}

void engine_content_manager_load_sprites()
{
	// TODO - load simpsons sprites...!
}

void engine_content_manager_load_sprite_palette()
{
	devkit_SMS_setSpritePaletteColor( 0, 3, 3, 3 );
//	devkit_SMS_setBGPaletteColor( 15, 3, 3, 3 );		// TODO - do I want to implement in SMSLib?
}

//void engine_content_manager_load_splash()
//{
//	devkit_SMS_mapROMBank( splash__tiles__psgcompr_bank );
//	devkit_SMS_loadPSGaidencompressedTiles( splash__tiles__psgcompr, FULL_TILES_OFFSET );
//	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) splash__tilemap__stmcompr );
//	devkit_SMS_loadBGPalette( ( void * ) splash__palette__bin );
//}

//void engine_content_manager_load_title()
//{
//	devkit_SMS_mapROMBank( simpsons__tiles__psgcompr_bank );
//	devkit_SMS_loadPSGaidencompressedTiles( simpsons__tiles__psgcompr, FULL_TILES_OFFSET );
//	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) simpsons__tilemap__stmcompr );
//	devkit_SMS_loadBGPalette( ( void * ) simpsons__palette__bin );
//}
