#include "long_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/locale_manager.h"
#include "../engine/select_manager.h"
#include "../engine/timer_manager.h"

static unsigned char screen_long_screen_delay;
static unsigned char screen_long_screen_state;

void screen_long_screen_init()
{
	screen_long_screen_delay = NORMAL_DELAY;
}

void screen_long_screen_load()
{
	screen_bases_screen_init();
	screen_long_screen_state = select_type_before;

	engine_select_manager_clear();
	engine_font_manager_text( LOCALE_QUESTIONS, 2, 6 );

	engine_select_manager_load_long();
	engine_select_manager_base();
}

void screen_long_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_long;
}
