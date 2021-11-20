#include "font_manager.h"
#include "global_manager.h"
#include "gfx_tiles.h"

#define TEXT_ROOT	32		// 32 is " " in ASCII.
#define DATA_ROOT	16		// 16 is "0" (48=16+32)
#define UNIT_ROOT	10		// 10 is decimal
#define DATA_LONG	3		// 7 placeholder

#ifdef _CONSOLE
#include "_genesis.h"
#else
#include <genesis.h>
#endif

//#define MAX_CHAR	3
//char str_data[ MAX_CHAR ] = "0";
//char str_char[ 1 ] = "0";

void engine_font_manager_init()
{
	unsigned short *data = NULL;
	unsigned char palette = NULL;

	VDP_loadTileSet( gfx_font.tileset, FONT_TILES, TRUE );
	if( NULL != gfx_font.palette )
	{
		data = gfx_font.palette->data;
	}

	VDP_setPalette( palette, data );
}

void engine_font_manager_char( const unsigned char ch, unsigned char x, unsigned char y )
{
	unsigned char tile = ch - TEXT_ROOT;
	VDP_setMapEx( BG_A, gfx_font.tilemap, TILE_ATTR_FULL( PAL0, FALSE, FALSE, FALSE, FONT_TILES ), x, y, tile, 0, 1, 1 );
}

void engine_font_manager_text( char *text, unsigned char x, unsigned char y )
{
	unsigned char idx = 0;
	while( '\0' != text[ idx ] )
	{
		signed char tile = text[ idx ] - TEXT_ROOT;
		VDP_setMapEx( BG_A, gfx_font.tilemap, TILE_ATTR_FULL( PAL0, FALSE, FALSE, FALSE, FONT_TILES ), x++, y, tile, 0, 1, 1 );
		idx++;
	}
}

void engine_font_manager_load()
{
	u16 x = 10;
	u16 y = 10;
	u16 xm = 7;
	const u16 ym = 0;
	const u16 wm = 1;
	const u16 hm = 1;
	VDP_setMapEx( BG_A, gfx_font.tilemap, TILE_ATTR_FULL( PAL0, FALSE, FALSE, FALSE, FONT_TILES ), x, y, xm, ym, wm, hm );
}

//void engine_font_manager_clear( unsigned short x, unsigned short y, unsigned short w )
//{
//	VDP_clearText( x, y, w );
//}
//
//// http://gendev.spritesmind.net/forum/viewtopic.php?t=3093
//void engine_font_manager_data( unsigned short value, unsigned short x, unsigned short y )
//{
//	// Set '3' = to get right aligned.
//	sprintf( str_data, "%3d", value );
//	VDP_clearText( x, y, MAX_CHAR );
//	VDP_drawText( str_data, x, y );
//}
//
//void engine_font_manager_zero( unsigned short value, unsigned short x, unsigned short y )
//{
//	// Set '3' = to have padded zeros.
//	sprintf( str_data, "%03d", value );
//	VDP_clearText( x, y, 3 );
//	VDP_drawText( str_data, x, y );
//}
//
//void engine_font_manager_char( const char ch, unsigned short x, unsigned short y )
//{
//	sprintf( str_char, "%c", ch );
//	VDP_drawText( str_char, x, y );
//}
//
//void engine_font_manager_text( const char *str, unsigned short x, unsigned short y )
//{
//	VDP_drawText( str, x, y );
//}