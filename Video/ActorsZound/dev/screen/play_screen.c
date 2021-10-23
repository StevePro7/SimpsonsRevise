#include "play_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/quiz_manager.h"
#include "../engine/score_manager.h"
#include "../engine/select_manager.h"

static unsigned char screen_cheat_screen_delay;

void screen_play_screen_init()
{
	screen_cheat_screen_delay = TITLE_DELAY * 2 / 5;
}

void screen_play_screen_load()
{
	engine_quiz_manager_base();
	engine_quiz_manager_base2();
	engine_score_manager_base();

	question_value = quiz_questions[ question_index ];
	option1_value = quiz_options[ question_value ][ 0 ];
	option2_value = quiz_options[ question_value ][ 1 ];
	option3_value = quiz_options[ question_value ][ 2 ];
	option4_value = quiz_options[ question_value ][ 3 ];

	engine_select_manager_base();

	//engine_font_manager_text( "PLAY SCREEN..!!", 10, 2 );
}

void screen_play_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_play;
}
