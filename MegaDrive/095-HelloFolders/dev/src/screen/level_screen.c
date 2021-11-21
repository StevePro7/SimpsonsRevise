#include "level_screen.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../engine/global_manager.h"
#include "../engine/quiz_manager.h"
#include "../engine/random_manager.h"
#include "../engine/select_manager.h"

void screen_level_screen_load()
{
}

void screen_level_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_number;
}
