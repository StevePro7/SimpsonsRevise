#include "main.h"

void main(void)
{
	//unsigned char index = 0;
	devkit_SMS_init();
	devkit_SMS_displayOff();
	engine_asm_manager_clear_VRAM();

	devkit_SMS_setSpriteMode( devkit_SPRITEMODE_NORMAL() );
	devkit_SMS_useFirstHalfTilesforSprites_False();
	devkit_SMS_VDPturnOnFeature( devkit_VDPFEATURE_HIDEFIRSTCOL() );

	//engine_content_manager_load_splash();
	//engine_content_manager_load_title();
	//engine_content_manager_load_font_tiles();

	engine_actor_manager_draw();
	engine_content_manager_load_sprite_palette();

	devkit_SMS_displayOn();
	for (;;)
	{
		devkit_SMS_waitForVBlank();
	}
}
