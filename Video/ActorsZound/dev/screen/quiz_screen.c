#include "quiz_screen.h"
#include "../engine/audio_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/quiz_manager.h"
#include "../engine/score_manager.h"
#include "../engine/select_manager.h"
#include "../engine/timer_manager.h"

static unsigned char screen_quiz_screen_delay;
static unsigned char screen_quiz_screen_state;

void screen_quiz_screen_init()
{
	screen_quiz_screen_delay = NORMAL_DELAY * 2;
}

void screen_quiz_screen_load()
{
	question_count++;
	screen_bases_screen_init();
	
	if( quiz_select == answer_index )
	{
		screen_quiz_screen_state = answer_type_right;
	}
	else
	{
		screen_quiz_screen_state = answer_type_wrong;
	}

	// TODO - test that we get different sfx and don't repeat
	if( answer_type_right == screen_quiz_screen_state )
	{
		engine_audio_manager_sound_woohoo();
		engine_score_manager_update();
	}
	else
	{
		//engine_audio_manager_sound_wrong();
		engine_audio_manager_sound_doh();
	}
}

void screen_quiz_screen_update( unsigned char *screen_type )
{
	// Logic: display right or wrong sprite for delay.
	// Increment question counter
	// After the delay check this
	// if all questions answered then game over
	// otherwise then resume next question

	unsigned char input = 0;
	unsigned char level = 0;

	if( answer_type_right == screen_quiz_screen_state )
	{
		engine_select_manager_draw_right();
	}
	else
	{
		engine_select_manager_draw_wrong();
	}

	*screen_type = screen_type_quiz;
}
