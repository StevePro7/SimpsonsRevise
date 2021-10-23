#include "over_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"

static unsigned char screen_over_screen_delay1;
static unsigned int screen_over_screen_delay2;

void screen_over_screen_init()
{
	screen_over_screen_delay1 = TITLE_DELAY * 2;
	screen_over_screen_delay2 = TITLE_DELAY * 8;
}

void screen_over_screen_load()
{
	engine_font_manager_text( "OVER SCREEN!!", 10, 2 );
}

void screen_over_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_over;
}
