#include "number_screen.h"
#include "../engine/actor_manager.h"
#include "../engine/content_manager.h"
#include "../engine/debug_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/graphics_manager.h"
#include "../engine/random_manager.h"
#include "../engine/select_manager.h"

void screen_number_screen_load()
{
	engine_graphics_manager_clear_full();
	engine_actor_manager_load();
	//engine_content_manager_load_sprites();


	// TODO should be in level_screen.c
	// Process this here just before quiz starts
	// Why?  Otherwise may cause music to "drag"
	engine_random_manager_init();

	//bank = diff_select + QUIZ_BANK;
	//engine_quiz_manager_bank( bank );

	engine_random_manager_load();
	engine_select_manager_load_quiz();

	engine_debug_manager_init();
}

void screen_number_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_play;
}
