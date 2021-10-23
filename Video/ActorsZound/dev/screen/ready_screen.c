#include "ready_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"

static unsigned int screen_ready_screen_delay;
static unsigned char screen_ready_screen_delay2;

void screen_ready_screen_init()
{
	screen_ready_screen_delay = TITLE_DELAY * 3;
	screen_ready_screen_delay2 = NORMAL_DELAY;
}

void screen_ready_screen_load()
{
	engine_font_manager_text( "READY SCREEN!!", 10, 2 );
}

void screen_ready_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_ready;
}
