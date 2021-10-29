#include "main.h"

int main()
{
	VDP_drawText( "Hello ALL content!!", 10, 13 );
	while( 1 )
	{
		VDP_waitVSync();
	}

	return 0;
}