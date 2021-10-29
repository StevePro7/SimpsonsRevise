#include "main.h"

int main()
{
	VDP_drawText( "Hello gfx_sprites", 10, 13 );
	while( 1 )
	{
		VDP_waitVSync();
	}

	return 0;
}