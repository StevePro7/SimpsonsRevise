#ifndef _SELECT_MANAGER_H_
#define _SELECT_MANAGER_H_

#include "global_manager.h"

extern unsigned char diff_select, long_select, quiz_select;
extern unsigned char select_choice, select_height;
extern unsigned char select_option[ MAX_OPTIONS ];
extern unsigned char select_high_option[ MAX_OPTIONS ];
extern unsigned char select_text_option[ MAX_OPTIONS ][ 3 ];
extern unsigned char select_diff_option[ MAX_OPTIONS ][ 6 ];


void engine_select_manager_load_quiz();


// Public methods.
void engine_select_manager_init();
void engine_select_manager_base();
void engine_select_manager_clear();
void engine_select_manager_clear2();
void engine_select_manager_load_diff();
void engine_select_manager_load_long();
void engine_select_manager_load_quiz();
unsigned char engine_select_manager_move_up( unsigned char select_choice );
unsigned char engine_select_manager_move_down( unsigned char select_choice );
void engine_select_manager_draw_select1();
void engine_select_manager_draw_right1();
void engine_select_manager_draw_wrong1();
void engine_select_manager_draw_select2();
void engine_select_manager_draw_right2();
void engine_select_manager_draw_wrong2();


#endif//_SELECT_MANAGER_H_
