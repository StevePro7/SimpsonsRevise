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
		engine_font_manager_draw_text( "PLAY RIFF1", 10, 8 );
		engine_riff_manager_play( 0 );
	}
	else
	{
		input = engine_input_manager_hold( input_type_down );
		if( input )
		{
			engine_font_manager_draw_text( "PLAY RIFF2", 10, 9 );
			engine_riff_manager_play( 1 );
		}
	}

	*screen_type = screen_type_test;
}
