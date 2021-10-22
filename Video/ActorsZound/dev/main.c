#include "main.h"

void main(void)
{
	static unsigned char index = 0;
	devkit_SMS_init();
	devkit_SMS_displayOff();
	engine_asm_manager_clear_VRAM();

	devkit_SMS_setSpriteMode( devkit_SPRITEMODE_NORMAL() );
	devkit_SMS_useFirstHalfTilesforSprites_False();
	devkit_SMS_VDPturnOnFeature( devkit_VDPFEATURE_HIDEFIRSTCOL() );

	//engine_content_manager_load_splash();
	
	engine_actor_manager_init();
	engine_actor_manager_draw( index );
	//engine_content_manager_load_title();

	//index = 3;
	//engine_actor_manager_draw_actor( index );
	//engine_actor_manager_draw_tests01();
	//engine_actor_manager_draw_tests();
	engine_content_manager_load_sprite_palette();

	engine_content_manager_load_font_tiles();
	engine_font_manager_text( "TESTING IS HERE!", 10, 5 );

	devkit_SMS_displayOn();
	for (;;)
	{
		devkit_SMS_waitForVBlank();
	}
}
