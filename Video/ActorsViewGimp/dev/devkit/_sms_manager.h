#ifndef _SMS_MANAGER_H_
#define _SMS_MANAGER_H_

void devkit_SMS_init();
void devkit_SMS_displayOn();
void devkit_SMS_displayOff();
void devkit_SMS_mapROMBank( unsigned char n );

void devkit_SMS_setBGScrollX( unsigned char scrollX );
void devkit_SMS_setBGScrollY( unsigned char scrollY );

void devkit_SMS_enableSRAM();
void devkit_SMS_enableSRAMBank( unsigned char n );
void devkit_SMS_disableSRAM();

void devkit_SMS_setSpriteMode( unsigned char mode );
void devkit_SMS_useFirstHalfTilesforSprites_False();
void devkit_SMS_useFirstHalfTilesforSprites_True();
void devkit_SMS_VDPturnOnFeature( unsigned int feature );

void devkit_SMS_loadPSGaidencompressedTiles( const void *src, unsigned int tilefrom );
void devkit_SMS_loadSTMcompressedTileMap( unsigned char x, unsigned char y, unsigned char *src );

void devkit_SMS_loadBGPalette( void *palette );
void devkit_SMS_loadSpritePalette( void *palette );
void devkit_SMS_setBGPaletteColor( const unsigned char entry, const unsigned char r, const unsigned char g, const unsigned char b );
void devkit_SMS_setSpritePaletteColor( const unsigned char entry, const unsigned char r, const unsigned char g, const unsigned char b );

void devkit_SMS_setNextTileatXY( unsigned char x, unsigned char y );
void devkit_SMS_setTile( const unsigned char tile );
void devkit_SMS_loadTileMap( unsigned char x, unsigned char y, unsigned char *src, int size );

void devkit_SMS_addSprite( unsigned char x, unsigned char y, int tile );
void devkit_SMS_addSprite_bulk8( unsigned char x, unsigned char y, int tile );
void devkit_SMS_addSprite_bulk12( unsigned char x, unsigned char y, int tile );

void devkit_SMS_initSprites();
void devkit_SMS_finalizeSprites();
void devkit_SMS_waitForVBlank();
void devkit_SMS_copySpritestoSAT();
void devkit_UNSAFE_SMS_copySpritestoSAT();

unsigned char devkit_SMS_queryPauseRequested();
void devkit_SMS_resetPauseRequest();

// collision
unsigned char devkit_isCollisionDetected();

// input
unsigned int devkit_SMS_getKeysStatus();
unsigned int devkit_PORT_A_KEY_UP();
unsigned int devkit_PORT_A_KEY_DOWN();
unsigned int devkit_PORT_A_KEY_LEFT();
unsigned int devkit_PORT_A_KEY_RIGHT();
unsigned int devkit_PORT_A_KEY_1();
unsigned int devkit_PORT_A_KEY_2();

// #defines
unsigned char devkit_SPRITEMODE_NORMAL();
unsigned int devkit_VDPFEATURE_HIDEFIRSTCOL();

#endif//_SMS_MANAGER_H_