#include "main.h"

int main()
{
	unsigned short bgcolor = RGB24_TO_VDPCOLOR( 0xFFFFFF );
	unsigned short fgcolor = RGB24_TO_VDPCOLOR( 0x000000 );
	VDP_setPaletteColor( PAL0 * 16 + 0, bgcolor );
	VDP_setPaletteColor( PAL0 * 16 + 15, fgcolor );

	VDP_drawText( "Hello Genny World!", 10, 13 );
	while( 1 )
	{
		VDP_waitVSync();
	}

	return 0;
}