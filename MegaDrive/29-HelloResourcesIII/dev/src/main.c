#include "main.h"

int main()
{
	engine_font_manager_init();
	//engine_image_manager_draw_splash();
	engine_image_manager_draw_title();
	engine_font_manager_text( "PRESS", 4, 12 );
	engine_font_manager_text( "START", 4, 13 );

	while( 1 )
	{
		VDP_waitVSync();
	}

	return 0;

}
