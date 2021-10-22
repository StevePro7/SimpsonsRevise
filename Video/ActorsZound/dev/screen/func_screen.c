#include "func_screen.h"
#include "../engine/actor_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"

static unsigned char index = 0;

void screen_func_screen_load()
{
	engine_actor_manager_init();
	engine_actor_manager_draw( index );

	engine_font_manager_text( "FUNC SCREEN!!", 10, 5 );
}

void screen_func_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_func;
}
