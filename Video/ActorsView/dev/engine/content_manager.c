#include "content_manager.h"
#include "../devkit/_sms_manager.h"
#include "../gfx.h"

#define FONT_TILES_OFFSET		0

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
