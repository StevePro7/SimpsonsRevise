#include "test_screen.h"
#include "../engine/actor_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"

static unsigned char index = 14;

void screen_test_screen_load()
{
	engine_actor_manager_init();
	engine_actor_manager_draw( index );

	engine_font_manager_text( "TEST SCREEN!!", 10, 3 );
}

void screen_test_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_test;
}
