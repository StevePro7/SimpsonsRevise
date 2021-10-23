#include "long_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"

static unsigned char screen_long_screen_delay;

void screen_long_screen_init()
{
	screen_long_screen_delay = NORMAL_DELAY;
}

void screen_long_screen_load()
{
	engine_font_manager_text( "LONG SCREEN!!", 10, 2 );
}

void screen_long_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_long;
}
