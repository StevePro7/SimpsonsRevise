#include "test_screen.h"
#include "../engine/actor_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/function_manager.h"
#include "../engine/graphics_manager.h"
#include "../engine/input_manager.h"
#include "../engine/locale_manager.h"
#include "../engine/quiz_manager.h"
#include "../engine/select_manager.h"
#include "../engine/sprite_manager.h"
#include "../engine/timer_manager.h"


void screen_test_screen_load()
{
	unsigned short percent = engine_function_manager_calculate_percentage( 4, 5 );
	engine_graphics_manager_clear_full();
	engine_actor_manager_load();

	engine_font_manager_text( LOCALE_BLANK, 2, 4 );
	engine_font_manager_text( LOCALE_OVER_MSG1, 4, 23 );
	engine_font_manager_text( LOCALE_OVER_MSG2, 4, 24 );

	engine_font_manager_text( LOCALE_UNDERLINED, INFO_SUMMARY_X, TITLE_Y - 1 );
	engine_font_manager_text( LOCALE_COMPLETION, INFO_SUMMARY_X, TITLE_Y + 0 );
	engine_font_manager_text( LOCALE_UNDERLINED, INFO_SUMMARY_X, TITLE_Y + 1 );

	engine_font_manager_text( LOCALE_QUIZ_TOTAL, SUMMARY_TEXT_X, 7 );
	engine_font_manager_zero( 5, SUMMARY_DATA_X, 8 );

	engine_font_manager_text( LOCALE_QUIZ_SOLVE, SUMMARY_TEXT_X, 11 );
	engine_font_manager_zero( 5, SUMMARY_DATA_X, 12 );

	engine_font_manager_text( LOCALE_QUIZ_RIGHT, SUMMARY_TEXT_X, 15 );
	engine_font_manager_zero( 4, SUMMARY_DATA_X, 16 );

	// Allow for potential division by zero error.
	engine_font_manager_text( LOCALE_CURR_PERCENT, SUMMARY_TEXT_X, 19 );
	engine_font_manager_zero( percent, SUMMARY_DATA_X, 20 );
	engine_font_manager_text( LOCALE_PERCENT_SYM, SUMMARY_DATA_X + 1, 20 );
}

void screen_test_screen_update( unsigned char *screen_type )
{
	engine_sprite_manager_update();
	*screen_type = screen_type_test;
}
