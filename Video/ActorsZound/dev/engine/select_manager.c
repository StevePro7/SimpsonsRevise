#include "select_manager.h"
#include "font_manager.h"
#include "global_manager.h"
#include "locale_manager.h"
#include "sprite_manager.h"

unsigned char diff_select, long_select, quiz_select;
unsigned char select_choice, select_height;
unsigned char select_option[ MAX_OPTIONS ];

unsigned char select_high_option[ MAX_OPTIONS ] = { OPTA_Y, OPTB_Y, OPTC_Y, OPTD_Y };
unsigned char select_text_option[ MAX_OPTIONS ][ 3 ] = { LOCALE_OPTA, LOCALE_OPTB, LOCALE_OPTC, LOCALE_OPTD };
unsigned char select_diff_option[ MAX_OPTIONS ][ 6 ] = { LOCALE_DIFF_OPT1, LOCALE_DIFF_OPT2, LOCALE_DIFF_OPT3, LOCALE_DIFF_OPT4 };
unsigned char select_long_option[ MAX_OPTIONS ] = { LOCALE_LONG_OPT1, LOCALE_LONG_OPT2, LOCALE_LONG_OPT3, LOCALE_LONG_OPT4 };


#define ANSWER_X		0
#define SELECT_X		4
#define SELECT_Y		60
#define SELECT_DELTA	32


void engine_select_manager_init()
{}
void engine_select_manager_base()
{
	unsigned char idx;
	for( idx = 0; idx < MAX_OPTIONS; idx++ )
	{
		engine_font_manager_text( select_text_option[ idx ], QUIZ_X, select_high_option[ idx ] );
	}
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

void engine_select_manager_clear2()
{}
void engine_select_manager_load_diff()
{}
void engine_select_manager_load_long()
{
}

void engine_select_manager_load_quiz()
{
	quiz_select = 0;
	select_choice = quiz_select;
	select_height = select_option[ select_choice ];
}


//unsigned char engine_select_manager_move_up( unsigned char select_choice );
//unsigned char engine_select_manager_move_down( unsigned char select_choice );


void engine_select_manager_draw_select()
{
	engine_sprite_manager_draw_select( SELECT_X, select_height );
}
void engine_select_manager_draw_right()
{
	engine_sprite_manager_draw_right( ANSWER_X, select_height + 4 );
}
void engine_select_manager_draw_wrong()
{
	engine_sprite_manager_draw_wrong( ANSWER_X, select_height + 4 );
}
