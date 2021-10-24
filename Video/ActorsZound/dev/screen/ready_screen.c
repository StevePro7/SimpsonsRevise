#include "ready_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/locale_manager.h"
#include "../engine/quiz_manager.h"
#include "../engine/score_manager.h"
#include "../engine/select_manager.h"
#include "../engine/timer_manager.h"

static unsigned int screen_ready_screen_delay;
static unsigned char screen_ready_screen_delay2;
static unsigned char screen_bases_screen_timer2;
static unsigned char screen_ready_screen_dots;

void screen_ready_screen_init()
{
	screen_ready_screen_delay = TITLE_DELAY * 3;
	screen_ready_screen_delay2 = NORMAL_DELAY;
}

void screen_ready_screen_load()
{
	screen_bases_screen_init();

	// Clear space.
	engine_select_manager_clear();

	engine_font_manager_text( LOCALE_DIFFICULTY, 2, 6 );
	engine_font_manager_text( LOCALE_ARROW_LEFT, 1, 7 );
	engine_font_manager_text( select_diff_option[ diff_select ], 2, 7 );

	engine_font_manager_text( LOCALE_QUESTIONS, 2, 11 );
	engine_font_manager_text( LOCALE_ARROW_LEFT, 1, 12 );
	engine_font_manager_data( question_long, 4, 12 );

	engine_font_manager_text( LOCALE_GET, 2, 17 );
	engine_font_manager_text( LOCALE_READY, 2, 18 );

	// Initialize all relevant variables before quiz starts...
	question_index = 0;
	question_value = 0;
	question_count = 0;
	engine_score_manager_init();

	screen_bases_screen_timer2 = 0;
	screen_ready_screen_dots = 0;
}

void screen_ready_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_ready;
}
