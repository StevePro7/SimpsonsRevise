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
	engine_font_manager_text( "DIFF SCREEN!!", 10, 4 );
}

void screen_diff_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_diff;
}
