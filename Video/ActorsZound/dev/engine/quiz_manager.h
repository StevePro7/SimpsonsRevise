#ifndef _QUIZ_MANAGER_H_
#define _QUIZ_MANAGER_H_

#include "global_manager.h"

#define QUIZ_X	2
#define QUIZ_Y	5

#define TITLE_X	23
#define TITLE_Y	3

#define OPTN_X	4
#define OPTA_Y	9
#define OPTB_Y	13
#define OPTC_Y	17
#define OPTD_Y	21

#define QUIZ_BANK	2

extern unsigned char quiz_questions[ MAX_QUESTIONS ];
extern unsigned char quiz_options[ MAX_QUESTIONS ][ MAX_OPTIONS ];
extern unsigned char option_height[ MAX_OPTIONS ];
extern unsigned char question_index, question_long, question_count;
extern unsigned char question_value, option1_value, option2_value, option3_value, option4_value;
extern unsigned char answer_index, answer_value;

// Public methods.
void engine_quiz_manager_init();

//void engine_quiz_manager_base();
//void engine_quiz_manager_base2();
//void engine_quiz_manager_base3( unsigned char y );

void engine_quiz_manager_bank( unsigned char b );

#endif//_QUIZ_MANAGER_H_
