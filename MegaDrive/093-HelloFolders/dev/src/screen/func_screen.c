#include "func_screen.h"
#include "../engine/audio_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/input_manager.h"
#include "../engine/sprite_manager.h"

//static unsigned char index = 0;
//static void draw_screen( unsigned char index );

void screen_func_screen_load()
{
	engine_audio_manager_init();
	engine_font_manager_text( "FUNC SCREEN!!", 10, 2 );

	engine_sprite_manager_init();
	//engine_actor_manager_init();

	//draw_screen( index );
}

void screen_func_screen_update( unsigned char *screen_type )
{
	unsigned char input = engine_input_manager_hold_right();
	if( input )
	{
		engine_font_manager_text( "D'OH!!", 10, 4 );
		//engine_audio_manager_play_effect( 3 );
		//engine_audio_manager_play_music( 1 );
		engine_audio_manager_play_result( 5 );
	}
	else
	//{
	//	input = engine_input_manager_hold_left();
	//	if( input )
	//	{
	//		if( index <= 0 )
	//		{
	//			index = MAX_ACTORS - 1;
	//		}
	//		else
	//		{
	//			index--;
	//		}
	//		draw_screen( index );
	//	}
	//}

	*screen_type = screen_type_func;
}

//static void draw_screen( unsigned char index )
//{
//	//devkit_SMS_displayOff();
//	//engine_actor_manager_draw( index );
//	//devkit_SMS_displayOn();
//}