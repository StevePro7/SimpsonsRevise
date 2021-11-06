#include "main.h"

int main()
{
	//unsigned char open_screen_type = screen_type_splash;
	//unsigned char open_screen_type = screen_type_test;
	unsigned char open_screen_type = screen_type_func;
	//unsigned char open_screen_type = screen_type_number;
	engine_screen_manager_init( open_screen_type );


	// Initialize.
	engine_hack_manager_init();
	engine_hack_manager_invert();

	//engine_actor_manager_init();
	//engine_audio_manager_init();
	//engine_quiz_manager_init();
	//engine_score_manager_init();
	//engine_select_manager_init();
	//engine_sound_manager_init();

	while( 1 )
	{
		engine_input_manager_update();
		engine_screen_manager_update();

		VDP_waitVSync();
	}

//	u16 *data = NULL;
//	int score = screen_play_screen_init();
//
//	// get the palette data of moon
//#ifndef _CONSOLE
//	//if( !score )
//	//{
//	//	data = moon.palette->data;
//	//}
//	//else
//	//{
//	//	data = logo.palette->data;
//	//}
//#endif
//
//	VDP_setPalette( PAL1, data );
//
//	// draw the moon at (12,12)
//	//if( !score )
//	//{
//	//	VDP_drawImageEx( BG_A, &moon, TILE_ATTR_FULL( PAL1, 0, 0, 0, 1 ), 10, 5, 0, CPU );
//	//}
//	//else
//	//{
//	//	VDP_drawImageEx( BG_A, &logo, TILE_ATTR_FULL( PAL1, 0, 0, 0, 1 ), 10, 5, 0, CPU );
//	//}
//
//	if( !score )
//	{
//		VDP_drawText( "ZERO TEXT", 2, 0 );
//	}
//	if( score )
//	{
//		VDP_drawText( "ONE TEXT", 2, 0 );
//	}
//
//	while( 1 )
//	{
//		VDP_waitVSync();
//	}

	return 0;
}