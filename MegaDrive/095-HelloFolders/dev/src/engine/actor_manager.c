#include "actor_manager.h"
#include "../engine/global_manager.h"
#include "../engine/image_manager.h"
#include "../engine/quiz_manager.h"
#include "../engine/random_manager.h"

static unsigned char prevActor;
static unsigned char currActor;

void engine_actor_manager_init()
{
	prevActor = 0;
	currActor = 0;
}

void engine_actor_manager_load()
{
	if( 0 == question_index )
	{
		currActor = 8;
	}
	else if ( 1 == question_index )
	{
		currActor = 13;
	}
	else if( 2 == question_index )
	{
		currActor = 1;
	}
	else if( 3 == question_index )
	{
		currActor = 10;
	}
	else if( 4 == question_index )
	{
		currActor = 12;
	}
	//while( 1 )
	//{
	//	currActor = 13; // engine_random_manager_data( MAX_ACTORS );
	//	//if( 11 != currActor && 10 != currActor && currActor != prevActor )
	//	//{
	//		break;
	//	//}
	//}

	engine_image_manager_draw_actor( currActor );
	prevActor = currActor;
}

void engine_actor_manager_draw( unsigned char index )
{
	engine_image_manager_draw_actor( index );
}