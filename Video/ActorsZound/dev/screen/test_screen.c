#include "test_screen.h"
#include "../engine/audio_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/input_manager.h"

static unsigned char index = 14;

void screen_test_screen_load()
{
	engine_font_manager_text( "AUDIO TIME OK!!", 10, 3 );
}

void screen_test_screen_update( unsigned char *screen_type )
{
	unsigned char input = engine_input_manager_hold_down();
	if( input )
	{
		engine_font_manager_text( "PRESS DOWN", 10, 5 );
		engine_audio_manager_right();
	}
	else
	{
		unsigned char input = engine_input_manager_hold_up();
		if( input )
		{
			engine_font_manager_text( "PRESS -UP-", 10, 6 );
			engine_audio_manager_wrong();
			//engine_audio_manager_cheat();
		}
	}

	*screen_type = screen_type_test;
}