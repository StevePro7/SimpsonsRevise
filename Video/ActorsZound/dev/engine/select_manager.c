#include "select_manager.h"
#include "font_manager.h"
#include "locale_manager.h"

unsigned char diff_select, long_select, quiz_select;
unsigned char select_choice, select_height;
unsigned char select_option[ MAX_OPTIONS ];
unsigned char select_high_option[ MAX_OPTIONS ];
unsigned char select_text_option[ MAX_OPTIONS ][ 3 ];
unsigned char select_diff_option[ MAX_OPTIONS ][ 6 ];

#define ANSWER_X		0
#define SELECT_X		4
#define SELECT_Y		60
#define SELECT_DELTA	32


void engine_select_manager_load_quiz()
{
	quiz_select = 0;
	select_choice = quiz_select;
	select_height = select_option[ select_choice ];
}

void engine_select_manager_clear()
{
	unsigned char high;
	for( high = 5; high < 7; high++ )
	{
		engine_font_manager_text( LOCALE_BLANK12, 0, high );
	}
	for( high = 7; high < 12; high++ )
	{
		engine_font_manager_text( LOCALE_BLANK11, 0, high );
	}
	for( high = 12; high < 24; high++ )
	{
		engine_font_manager_text( LOCALE_BLANK8, 0, high );
	}
	engine_font_manager_text( LOCALE_BLANK3, DOTS_X + 1, DOTS_Y );
}