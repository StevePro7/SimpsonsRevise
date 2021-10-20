#include "content_manager.h"
#include "global_manager.h"
#include "../devkit/_sms_manager.h"
#include "../gfx.h"

#define FONT_TILES		0
#define OPTION_TILES	64

// Tiles.
void engine_content_manager_load_tiles()
{
	devkit_SMS_loadPSGaidencompressedTiles( font__tiles__psgcompr, FONT_TILES );
	devkit_SMS_loadBGPalette( ( void * ) font__palette__bin );
}
