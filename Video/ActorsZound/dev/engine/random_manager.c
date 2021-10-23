#include "random_manager.h"
#include "enum_manager.h"
#include "hack_manager.h"
#include <stdlib.h>

unsigned char quiz_questions[ MAX_QUESTIONS ];
unsigned char quiz_options[ MAX_QUESTIONS ][ MAX_OPTIONS ];

// Private helper methods.
static void load_random();
static void load_normal();
static void load_mixed();

// Public methods.
void engine_random_manager_init()
{
	unsigned char idx, opt;

	for( idx = 0; idx < MAX_QUESTIONS; idx++ )
	{
		quiz_questions[ idx ] = 0;
	}

	for( idx = 0; idx < MAX_QUESTIONS; idx++ )
	{
		for( opt = 0; opt < MAX_OPTIONS; opt++ )
		{
			quiz_options[ idx ][ opt ] = 0;
		}
	}
}

void engine_random_manager_load()
{
	if( rand_type_normal == hacker_random )
	{
		load_normal();
	}
	else if( rand_type_mixed == hacker_random )
	{
		load_mixed();
	}
	else
	{
		load_random();
	}
}

// Private helper methods.
static void load_random()
{
	unsigned char idx, opt;
	for( idx = 0; idx < MAX_QUESTIONS; idx++ )
	{
		while( 1 )
		{
			unsigned char rnd = rand() % MAX_QUESTIONS;
			if( 0 == quiz_questions[ rnd ] )
			{
				quiz_questions[ rnd ] = idx;
				break;
			}
		}
	}

	for( idx = 0; idx < MAX_QUESTIONS; idx++ )
	{
		for( opt = 0; opt < MAX_OPTIONS; opt++ )
		{
			while( 1 )
			{
				unsigned char rnd = rand() % MAX_OPTIONS;
				if( 0 == quiz_options[ idx ][ rnd ] )
				{
					quiz_options[ idx ][ rnd ] = opt;
					break;
				}
			}
		}
	}
}

static void load_normal()
{
	unsigned char idx, opt;
	for( idx = 0; idx < MAX_QUESTIONS; idx++ )
	{
		quiz_questions[ idx ] = idx;
	}

	for( idx = 0; idx < MAX_QUESTIONS; idx++ )
	{
		for( opt = 0; opt < MAX_OPTIONS; opt++ )
		{
			quiz_options[ idx ][ opt ] = opt;
		}
	}
}

static void load_mixed()
{
	unsigned char idx, opt;
	for( idx = 0; idx < MAX_QUESTIONS; idx++ )
	{
		quiz_questions[ idx ] = idx;
	}

	for( idx = 0; idx < MAX_QUESTIONS; idx++ )
	{
		for( opt = 0; opt < MAX_OPTIONS; opt++ )
		{
			while( 1 )
			{
				unsigned char rnd = rand() % MAX_OPTIONS;
				if( 0 == quiz_options[ idx ][ rnd ] )
				{
					quiz_options[ idx ][ rnd ] = opt;
					break;
				}
			}
		}
	}
}