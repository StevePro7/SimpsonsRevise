#include "splash_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/timer_manager.h"

void screen_splash_screen_load()
{
	screen_bases_screen_init();
	engine_font_manager_text( "SPLASH SCREEN..!!", 10, 2 );
}

void screen_splash_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_splash;
}
