#include "level_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/quiz_manager.h"
#include "../engine/random_manager.h"
#include "../engine/select_manager.h"

void screen_level_screen_load()
{
	unsigned char bank;

	// Process this here just before quiz starts
	// Why?  Otherwise may cause music to "drag"
	engine_random_manager_init();

	bank = diff_select + QUIZ_BANK;
	engine_quiz_manager_bank( bank );

	engine_font_manager_text( "LEVEL SCREEN!!", 10, 2 );
}

void screen_level_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_level;
	//*screen_type = screen_type_play;
}
