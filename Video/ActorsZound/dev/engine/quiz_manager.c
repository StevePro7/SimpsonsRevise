#include "quiz_manager.h"
#include "font_manager.h"
#include "hack_manager.h"
#include "locale_manager.h"
#include "select_manager.h"
#include "../devkit/_sms_manager.h"

unsigned char quiz_questions[ MAX_QUESTIONS ];
unsigned char quiz_options[ MAX_QUESTIONS ][ MAX_OPTIONS ];
unsigned char option_height[ MAX_OPTIONS ];
unsigned char question_index, question_long, question_count;
unsigned char question_value, option1_value, option2_value, option3_value, option4_value;
unsigned char answer_index, answer_value;

// Private helper method.
static void show_diff( unsigned char x, unsigned char y );

// Public methods.
void engine_quiz_manager_init()
{
	option_height[ 0 ] = OPTA_Y;
	option_height[ 1 ] = OPTB_Y;
	option_height[ 2 ] = OPTC_Y;
	option_height[ 3 ] = OPTD_Y;
}


//void engine_quiz_manager_base()
//{
//	engine_font_manager_draw_text( LOCALE_QUESTION, QUIZ_X, TITLE_Y );
//	if( hacker_extra )
//	{
//		// Display total number of questions.
//		engine_font_manager_draw_text( LOCALE_FSLASH_SYM, QUIZ_X + 13, TITLE_Y );
//		engine_font_manager_draw_data_ZERO( question_long, QUIZ_X + 16, TITLE_Y );
//	}
//}
//
//void engine_quiz_manager_base2()
//{
//	engine_quiz_manager_diff( 26, TITLE_Y - 1 );
//}
//
//void engine_quiz_manager_base3( unsigned char y )
//{
//	engine_quiz_manager_diff( 24, y );
//}

void engine_quiz_manager_bank( unsigned char b )
{
	devkit_SMS_mapROMBank( b );
}


static void show_diff( unsigned char x, unsigned char y )
{
	if( !hacker_extra )
	{
		return;
	}

	// Display difficulty level for quiz.
	engine_font_manager_text( LOCALE_SQUARE_LEFT, x + 0, y );
	engine_font_manager_text( LOCALE_SQUARE_RIGHT, x + 5, y );
	engine_font_manager_text( select_diff_option[ diff_select ], x + 1, y );
}