#include "title_screen.h"
#include "../engine/content_manager.h"
#include "../engine/enum_manager.h"
#include "../engine/font_manager.h"
#include "../devkit/_sms_manager.h"

void screen_title_screen_load()
{
	devkit_SMS_displayOff();
	//engine_content_manager_title();
	devkit_SMS_displayOn();

}

void screen_title_screen_update( unsigned char *screen_type )
{
	*screen_type = screen_type_title;
}
