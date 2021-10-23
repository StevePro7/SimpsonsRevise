#include "diff_screen.h"
#include "../engine/actor_manager.h"
#include "../engine/content_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/sprite_manager.h"
#include "../devkit/_sms_manager.h"

static unsigned char screen_diff_screen_delay;

void screen_diff_screen_init()
{
	screen_diff_screen_delay = NORMAL_DELAY;
}

void screen_diff_screen_load()
{
	engine_actor_manager_init();
	devkit_SMS_displayOff();
	//engine_actor_manager_draw( 15 );
	engine_font_manager_text( "SUZANNE SCREEN!!", 10, 4 );
	engine_content_manager_load_sprite_palette();
	devkit_SMS_displayOn();
}

void screen_diff_screen_update( unsigned char *screen_type )
{
	engine_sprite_manager_draw_select( 64, 80 );
	engine_sprite_manager_draw_right( 64, 120 );
	engine_sprite_manager_draw_wrong( 64, 160 );
	*screen_type = screen_type_diff;
}
