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

	question_value = quiz_questions[ question_index ];
	option1_value = quiz_options[ question_value ][ 0 ];
	option2_value = quiz_options[ question_value ][ 1 ];
	option3_value = quiz_options[ question_value ][ 2 ];
	option4_value = quiz_options[ question_value ][ 3 ];

	engine_select_manager_base();
	engine_quiz_manager_load( question_index, question_value, option1_value, option2_value, option3_value, option4_value );

	engine_quiz_manager_answer( question_value );
	engine_quiz_manager_cheat( answer_index );
}

void screen_play_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_play;
}