#include "play_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/input_manager.h"
#include "../engine/quiz_manager.h"
#include "../engine/score_manager.h"
#include "../engine/select_manager.h"
#include "../engine/timer_manager.h"

void screen_play_screen_init()
{
	//return engine_data_manager_test();
}

void screen_play_screen_load()
{
	screen_bases_screen_init();
	engine_quiz_manager_base();
	engine_quiz_manager_base2();
	engine_score_manager_base();
}

void screen_play_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_play;
}