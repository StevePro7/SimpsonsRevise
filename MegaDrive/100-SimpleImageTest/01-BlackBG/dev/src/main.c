#include "main.h"

int main()
{
	unsigned short *data = NULL;
	const Image image = gfx_simpsons;
	unsigned char palette = PAL1;
	unsigned short tiles = 1;
	unsigned short x = 0;
	unsigned short y = 0;
	
	if( NULL != image.palette )
	{
		data = image.palette->data;
	}

	VDP_setPalette( palette, data );
	VDP_drawImageEx( BG_A, &image, TILE_ATTR_FULL( palette, 0, 0, 0, tiles ), x, y, 0, CPU );

	VDP_drawText( "Test", 4, 13 );
	VDP_drawText( "text", 4, 14 );
	while( 1 )
	{
		VDP_waitVSync();
	}

	return 0;
}