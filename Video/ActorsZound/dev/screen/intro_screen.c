#include "intro_screen.h"
#include "../engine/audio_manager.h"
#include "../engine/content_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/input_manager.h"
#include "../engine/sprite_manager.h"
#include "../devkit/_sms_manager.h"

void screen_intro_screen_load()
{
	engine_font_manager_text( "INTRO SCREEN!!", 10, 2 );
}

void screen_intro_screen_update( unsigned char *screen_type )
{
	unsigned char input = engine_input_manager_hold_up();
	if( input )
	{
		//engine_audio_manager_start_music();
		engine_audio_manager_finish_music();
		engine_font_manager_text( "PLAY MUSIC", 10, 8 );
	}

	*screen_type = screen_type_intro;
}
