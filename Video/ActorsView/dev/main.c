#include "main.h"

void main( void )
{
	devkit_SMS_init();
	devkit_SMS_displayOff();
	engine_asm_manager_clear_VRAM();

	engine_content_manager_load_font_tiles();
	engine_content_manager_load_sprite_palette();
	engine_content_manager_load_splash();

	devkit_SMS_displayOn();
	for( ;; )
	{
		devkit_SMS_waitForVBlank();
	}
}
