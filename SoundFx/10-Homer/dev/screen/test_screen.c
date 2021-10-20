#include "test_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/input_manager.h"
#include "../engine/riff_manager.h"

void screen_test_screen_load()
{
	engine_font_manager_draw_text( "PRESS UP OR", 10, 5 );
	engine_font_manager_draw_text( "PRESS DOWN!", 10, 6 );
}

void screen_test_screen_update( unsigned char *screen_type )
{	
	unsigned char input = engine_input_manager_hold( input_type_up );
	if( input )
	{
		engine_font_manager_draw_text( "PLAY RIGHT1", 10, 8 );
		engine_riff_manager_play( 0 );
	}
	else
	{
		input = engine_input_manager_hold( input_type_down );
		if( input )
		{
			engine_font_manager_draw_text( "PLAY RIGHT2", 10, 9 );
			engine_riff_manager_play( 1 );
		}
		else
		{
			input = engine_input_manager_hold( input_type_left );
			if( input )
			{
				engine_font_manager_draw_text( "PLAY RIGHT3", 10, 10 );
				engine_riff_manager_play( 2 );
			}
			else
			{
				input = engine_input_manager_hold( input_type_right );
				if( input )
				{
					engine_font_manager_draw_text( "PLAY WRONG1", 10, 12 );
					engine_riff_manager_play( 3 );
				}
				else
				{
					input = engine_input_manager_hold( input_type_fire1 );
					if( input )
					{
						engine_font_manager_draw_text( "PLAY WRONG2", 10, 13 );
						engine_riff_manager_play( 4 );
					}
					else
					{
						input = engine_input_manager_hold( input_type_fire2 );
						if( input )
						{
							engine_font_manager_draw_text( "PLAY WRONG3", 10, 14 );
							engine_riff_manager_play( 5 );
						}
					}
				}
			}
		}
	}

	*screen_type = screen_type_test;
}
