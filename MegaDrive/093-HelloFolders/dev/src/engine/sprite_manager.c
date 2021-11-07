#include "sprite_manager.h"
#include "enum_manager.h"
#include "font_manager.h"
#include "global_manager.h"
#include "gfx_sprites.h"

#ifdef _CONSOLE
#include "_genesis.h"
#else
#include <genesis.h>
#endif

// Private fields.
Sprite* sprites[ MAX_SPRITES ] = { NULL, NULL, NULL };
//const SpriteDefinition* spriteDefList[ MAX_SPRITES ] = { &gfx_select, &gfx_right, &gfx_wrong };
const SpriteDefinition* spriteDefList[ MAX_SPRITES ] = { &gfx_right, &gfx_select, &gfx_wrong };

// Private function.
static void init_sprite( const unsigned char index );
//static void palette_sprite();

void engine_sprite_manager_init()
{
	SPR_init( 0, 0, 0 );

	init_sprite( sprite_type_right );
	//init_sprite( sprite_type_select );
	//init_sprite( sprite_type_wrong );

	//palette_sprite();
}

void engine_sprite_manager_draw( const unsigned char index, unsigned char x, unsigned char y )
{
	const SpriteDefinition* spriteDef;
	unsigned short *data = NULL;

	spriteDef = spriteDefList[ index ];
	if( NULL != spriteDef->palette )
	{
		data = spriteDef->palette->data;
	}

	VDP_setPalette( PAL3, data );
	SPR_setPosition( sprites[ index ], x, y );
	//palette_sprite();
	SPR_setVisibility( sprites[ index ], VISIBLE );
}


//#include "global_manager.h"
////#include "../devkit/_sms_manager.h"
//
//// Private helper method.
//static void engine_sprite_manager_draw( unsigned char x, unsigned char y, unsigned int tile );
//
// Public methods DRAW.
void engine_sprite_manager_draw_chose( unsigned char x, unsigned char y )
{
	//engine_sprite_manager_draw( x, y, SPRITE_TILES + 0 );
}
void engine_sprite_manager_draw_right( unsigned char x, unsigned char y )
{
	//engine_sprite_manager_draw( x, y, SPRITE_TILES + 16 );
}
void engine_sprite_manager_draw_wrong( unsigned char x, unsigned char y )
{
	//engine_sprite_manager_draw( x, y, SPRITE_TILES + 32 );
}
//
//static void engine_sprite_manager_draw( unsigned char x, unsigned char y, unsigned int tile )
//{
//	//devkit_SMS_addSprite( x + 0, y + 0, tile + 0 );
//	//devkit_SMS_addSprite( x + 8, y + 0, tile + 1 );
//	//devkit_SMS_addSprite( x + 16, y + 0, tile + 2 );
//	//devkit_SMS_addSprite( x + 24, y + 0, tile + 3 );
//
//	//devkit_SMS_addSprite( x + 0, y + 8, tile + 4 );
//	//devkit_SMS_addSprite( x + 8, y + 8, tile + 5 );
//	//devkit_SMS_addSprite( x + 16, y + 8, tile + 6 );
//	//devkit_SMS_addSprite( x + 24, y + 8, tile + 7 );
//
//	//devkit_SMS_addSprite( x + 0, y + 16, tile + 8 );
//	//devkit_SMS_addSprite( x + 8, y + 16, tile + 9 );
//	//devkit_SMS_addSprite( x + 16, y + 16, tile + 10 );
//	//devkit_SMS_addSprite( x + 24, y + 16, tile + 11 );
//
//	//devkit_SMS_addSprite( x + 0, y + 24, tile + 12 );
//	//devkit_SMS_addSprite( x + 8, y + 24, tile + 13 );
//	//devkit_SMS_addSprite( x + 16, y + 24, tile + 14 );
//	//devkit_SMS_addSprite( x + 24, y + 24, tile + 15 );
//}

static void init_sprite( const unsigned char index )
{
	const SpriteDefinition* spriteDef;
	unsigned short *data = NULL;

	spriteDef = spriteDefList[ index ];
	if( NULL != spriteDef->palette )
	{
		data = spriteDef->palette->data;
	}

	VDP_setPalette( PAL3, data );
	sprites[ index ] = SPR_addSprite( spriteDef, 0, 0, TILE_ATTR( PAL3, 0, FALSE, FALSE ) );
	SPR_setVisibility( sprites[ index ], HIDDEN );
}
//static void palette_sprite()
//{
//	// Sega Genesis deep yellow hex color:
//	unsigned short color = RGB24_TO_VDPCOLOR( 0xFFE57C );
//	VDP_setPaletteColor( PAL3 * 16 + 15, color );
//}