#include "quiz_manager.h"

unsigned char quiz_questions[ MAX_QUESTIONS ];
unsigned char quiz_options[ MAX_QUESTIONS ][ MAX_OPTIONS ];
unsigned char option_height[ MAX_OPTIONS ];
unsigned char question_index, question_long, question_count;
unsigned char question_value, option1_value, option2_value, option3_value, option4_value;
unsigned char answer_index, answer_value;