#include "test_screen.h"
//#include "../engine/actor_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/input_manager.h"

static unsigned char index = 14;

void screen_test_screen_load()
{
	//engine_actor_manager_init();
	//engine_actor_manager_draw( index );

	engine_font_manager_text( "TEST SCREEN...!!", 10, 3 );
}

void screen_test_screen_update( unsigned char *screen_type )
{
	unsigned char input = engine_input_manager_hold_down();
	if( input )
	{
		engine_font_manager_text( "PRESS DOWN", 10, 5 );
	}

	*screen_type = screen_type_test;
}
