#include "main.h"

int main()
{
	engine_font_manager_init();
	//engine_font_manager_char( 'A', 10, 12 );
	//engine_font_manager_text( "STEVEPRO STUDIOS", 0, 0 );
	engine_font_manager_data( 123, 10, 0 );
	//engine_font_manager_load();
	while( 1 )
	{
		VDP_waitVSync();
	}

	return 0;
}
