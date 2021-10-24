#include "quiz_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/quiz_manager.h"

static unsigned char screen_quiz_screen_delay;

void screen_quiz_screen_init()
{
	screen_quiz_screen_delay = NORMAL_DELAY * 2;
}

void screen_quiz_screen_load()
{
	question_count++;
	engine_font_manager_text( "QUIZ SCREEN!!", 10, 2 );
}

void screen_quiz_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_quiz;
}
