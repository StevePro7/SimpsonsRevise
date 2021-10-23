#include "diff_screen.h"
#include "../engine/actor_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/sprite_manager.h"
#include "../devkit/_sms_manager.h"

void screen_diff_screen_load()
{
	engine_actor_manager_init();
	//devkit_SMS_displayOff();
	engine_font_manager_text( "DIFF SCREEN!!", 10, 2 );
	//engine_actor_manager_draw( 2 );
	//devkit_SMS_displayOn();
}

void screen_diff_screen_update( unsigned char *screen_type )
{
	engine_sprite_manager_draw_select( 64, 96 );
	//engine_sprite_manager_draw_right( 64, 96 );
	//engine_sprite_manager_draw_wrong( 64, 96 );
	*screen_type = screen_type_diff;
}
