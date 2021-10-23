#include "title_screen.h"
#include "../engine/content_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/locale_manager.h"
#include "../devkit/_sms_manager.h"
#include <stdlib.h>

static unsigned char screen_title_screen_delay;

void screen_title_screen_init()
{
	screen_title_screen_delay = NORMAL_DELAY;
}

void screen_title_screen_load()
{
	devkit_SMS_displayOff();
	engine_content_manager_title();
	engine_font_manager_text( LOCALE_VERSION, 25, 23 );
	devkit_SMS_displayOn();
}

void screen_title_screen_update( unsigned char *screen_type )
{
	rand();
	*screen_type = screen_type_title;
}
