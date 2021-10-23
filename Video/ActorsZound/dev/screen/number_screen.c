#include "number_screen.h"
#include "../engine/actor_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../devkit/_sms_manager.h"

void screen_number_screen_load()
{
	// TODO implement the logic to change actors
	//engine_font_manager_text( "NUMBER SCREEN!!", 10, 2 );

	devkit_SMS_displayOff();
	engine_actor_manager_draw( 7 );
	devkit_SMS_displayOn();
}

void screen_number_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_number;
}
