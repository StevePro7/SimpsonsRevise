#include "diff_screen.h"
#include "../engine/actor_manager.h"
#include "../engine/content_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/input_manager.h"
#include "../engine/locale_manager.h"
#include "../engine/select_manager.h"
#include "../engine/timer_manager.h"
#include "../devkit/_sms_manager.h"
#include <stdlib.h>

static unsigned char screen_diff_screen_delay;
static unsigned char screen_diff_screen_state;

void screen_diff_screen_init()
{
	screen_diff_screen_delay = NORMAL_DELAY;
}

void screen_diff_screen_load()
{
	screen_bases_screen_init();
	screen_diff_screen_state = select_type_before;

	engine_select_manager_clear();
	engine_select_manager_base();

	engine_font_manager_text( LOCALE_DIFFICULTY, 2, 6 );
	engine_select_manager_load_diff();
}

void screen_diff_screen_update( unsigned char *screen_type )
{
	unsigned char input = 0;
	rand();

	if( select_type_before == screen_diff_screen_state )
	{
		engine_select_manager_draw_select();
		input = engine_input_manager_hold_up();
		if( input )
		{
			diff_select = engine_select_manager_move_up( diff_select );
		}
		input = engine_input_manager_hold_down();
		if( input )
		{
			diff_select = engine_select_manager_move_down( diff_select );
		}
	}

	*screen_type = screen_type_diff;
}
