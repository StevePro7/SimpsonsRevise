#include "splash_screen.h"
#include "../engine/content_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/graphics_manager.h"
#include "../engine/image_manager.h"
#include "../engine/input_manager.h"
#include "../engine/timer_manager.h"
//#include "../devkit/_sms_manager.h"

static unsigned char screen_splash_screen_delay;

void screen_splash_screen_init()
{
	screen_splash_screen_delay = SPLASH_DELAY;
}

void screen_splash_screen_load()
{
	engine_graphics_manager_clear_full();
	engine_image_manager_draw_splash();
	//engine_font_manager_text( "SPLASH SCREEN!!", 10, 2 );

	//screen_bases_screen_init();
	//devkit_SMS_displayOff();
	//engine_content_manager_load_sprite_palette( COLOR_BLACK );
	//engine_content_manager_splash();
	//devkit_SMS_displayOn();
}

void screen_splash_screen_update( unsigned char *screen_type )
{
	//unsigned char input = 0;
	//unsigned char level = 0;

	//input = engine_input_manager_hold_fire1();
	//if( input )
	//{
	//	level = 1;
	//}

	//screen_bases_screen_timer++;
	//if( screen_bases_screen_timer >= screen_splash_screen_delay )
	//{
	//	level = 1;
	//}

	//if( level )
	//{
	//	*screen_type = screen_type_title;
	//	return;
	//}

	*screen_type = screen_type_splash;
}
