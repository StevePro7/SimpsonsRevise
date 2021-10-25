#include "test_screen.h"
#include "../engine/content_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/input_manager.h"
#include "../engine/locale_manager.h"
#include "../engine/select_manager.h"
#include "../engine/timer_manager.h"

static unsigned char index = 14;

void screen_test_screen_load()
{
	// title
	engine_content_manager_title();
	engine_font_manager_text( LOCALE_VERSION, 25, 23 );

	engine_font_manager_text( LOCALE_PRESS, 2, 13 );
	engine_font_manager_text( LOCALE_START, 2, 14 );

	engine_font_manager_text( LOCALE_CHEAT, 25, 10 );
	engine_font_manager_text( LOCALE_MODE, 25, 11 );

	//engine_font_manager_text( "SOUND TIME OK!!", 10, 3 );
}

void screen_test_screen_update( unsigned char *screen_type )
{
	unsigned char input = engine_input_manager_hold_down();
	if( input )
	{
		engine_font_manager_text( "#01", 7, 0 );

		// diff
		screen_bases_screen_init();
		//engine_select_manager_clear();
		engine_font_manager_text( LOCALE_BLANK5, 2, 13 );
		engine_font_manager_text( LOCALE_BLANK5, 2, 14 );

		engine_select_manager_base();
		engine_font_manager_text( LOCALE_DIFFICULTY, 2, 6 );
		engine_select_manager_load_diff();
	}
	else
	{
		input = engine_input_manager_hold_right();
		if( input )
		{
			engine_font_manager_text( "#02", 7, 0 );

			engine_font_manager_text( LOCALE_QUESTIONS, 2, 6 );
			engine_select_manager_load_long();
		}
		else
		{
			input = engine_input_manager_hold_fire1();
			if( input )
			{
				engine_font_manager_text( "#03", 7, 0 );
			}
		}
	}


	*screen_type = screen_type_test;
}

//void screen_test_screen_update( unsigned char *screen_type )
//{
//	unsigned char input = engine_input_manager_hold_up();
//	if( input )
//	{
//		engine_font_manager_text( "PLAY RIGHT1", 10, 8 );
//		engine_sound_manager_play( 0 );
//	}
//	else
//	{
//		input = engine_input_manager_hold_down();
//		if( input )
//		{
//			engine_font_manager_text( "PLAY RIGHT2", 10, 9 );
//			engine_sound_manager_play( 1 );
//		}
//		else
//		{
//			input = engine_input_manager_hold_left();
//			if( input )
//			{
//				engine_font_manager_text( "PLAY RIGHT3", 10, 10 );
//				engine_sound_manager_play( 2 );
//			}
//			else
//			{
//				input = engine_input_manager_hold_right();
//				if( input )
//				{
//					engine_font_manager_text( "PLAY WRONG1", 10, 12 );
//					engine_sound_manager_play( 3 );
//				}
//				else
//				{
//					input = engine_input_manager_hold_fire1();
//					if( input )
//					{
//						engine_font_manager_text( "PLAY WRONG2", 10, 13 );
//						engine_sound_manager_play( 4 );
//					}
//					else
//					{
//						input = engine_input_manager_hold_fire2();
//						if( input )
//						{
//							engine_font_manager_text( "PLAY WRONG3", 10, 14 );
//							engine_sound_manager_play( 5 );
//						}
//					}
//				}
//			}
//		}
//	}
//
//	*screen_type = screen_type_test;
//}

//void screen_test_screen_update( unsigned char *screen_type )
//{
//	unsigned char input = engine_input_manager_hold_down();
//	if( input )
//	{
//		engine_font_manager_text( "PRESS DOWN", 10, 5 );
//		engine_audio_manager_right();
//	}
//	else
//	{
//		unsigned char input = engine_input_manager_hold_up();
//		if( input )
//		{
//			engine_font_manager_text( "PRESS -UP-", 10, 6 );
//			engine_audio_manager_wrong();
//			//engine_audio_manager_cheat();
//		}
//	}
//
//	*screen_type = screen_type_test;
//}