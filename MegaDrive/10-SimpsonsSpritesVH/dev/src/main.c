#include "main.h"

int main()
{
	Sprite *sprite;
	const SpriteDefinition *spriteDef = &gfx_chose;
	SPR_init( 0, 0, 0 );

	unsigned short *data = NULL;
	if( NULL != spriteDef->palette )
	{
		data = spriteDef->palette->data;
	}
	VDP_setPalette( PAL3, data );
	sprite = SPR_addSprite( spriteDef, 100, 100, TILE_ATTR( PAL3, 0, FALSE, FALSE ) );
	SPR_setPosition( sprite, 200, 100 );

	//VDP_drawText( "Hello Simpsons", 10, 13 );
	while( 1 )
	{
		SPR_update();
		VDP_waitVSync();
	}

	return 0;
}