#ifndef _FONT_MANAGER_H_
#define _FONT_MANAGER_H_

void engine_font_manager_init();
void engine_font_manager_char( const unsigned char ch, unsigned char x, unsigned char y );
void engine_font_manager_text( char *text, unsigned char x, unsigned char y );
void engine_font_manager_load();
//void engine_font_manager_clear( unsigned short x, unsigned short y, unsigned short w );
//void engine_font_manager_data( unsigned short value, unsigned short x, unsigned short y );
//void engine_font_manager_zero( unsigned short value, unsigned short x, unsigned short y );
//void engine_font_manager_text( const char *str, unsigned short x, unsigned short y );

#endif//_FONT_MANAGER_H_