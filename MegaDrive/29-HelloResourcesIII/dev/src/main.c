#include "main.h"

static void draw_image( const Image image, unsigned char palette, unsigned short tiles, unsigned char x, unsigned char y );

int main()
{
	engine_font_manager_init();
	engine_font_manager_load();
	//VDP_drawText( "Hello content!!", 10, 13 );
//	draw_image( gfx_font, PAL1, PALETTE1_TILES, 4, 2 );
	while( 1 )
	{
		VDP_waitVSync();
	}

	return 0;
}

static void draw_image( const Image image, unsigned char palette, unsigned short tiles, unsigned char x, unsigned char y )
{
	unsigned short *data = NULL;
	u16 ind;
	//ind = PALETTE1_TILES ;
	VDP_loadTileSet( image.tileset, ind, TRUE );

	if( NULL != image.palette )
	{
		data = image.palette->data;
	}

	VDP_setPalette( palette, data );
	VDP_setMapEx( BG_A, image.tilemap, TILE_ATTR_FULL( PAL1, FALSE, FALSE, FALSE, ind ), x, y, 2, 0, 1, 1 );
}

//static void draw_image( const Image image, unsigned char palette, unsigned short tiles, unsigned char x, unsigned char y )
//{
//	unsigned short *data = NULL;
//	if( NULL != image.palette )
//	{
//		data = image.palette->data;
//	}
//
//	VDP_setPalette( palette, data );
//	VDP_drawImageEx( BG_A, &image, TILE_ATTR_FULL( palette, 0, 0, 0, tiles ), x, y, 0, CPU );
//}