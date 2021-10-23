#ifndef _RANDOM_MANAGER_H_
#define _RANDOM_MANAGER_H_

#include "global_manager.h"

extern unsigned char quiz_questions[ MAX_QUESTIONS ];
extern unsigned char quiz_options[ MAX_QUESTIONS ][ MAX_OPTIONS ];

// Public methods.
void engine_random_manager_init();
void engine_random_manager_load();
void engine_random_manager_load_normal();
void engine_random_manager_load_mixed();

#endif//_RANDOM_MANAGER_H_
