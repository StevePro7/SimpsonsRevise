#include "actor_manager.h"
//#include "font_manager.h"
#include "../devkit/_sms_manager.h"
#include "../object/actor_object.h"
#include "../banks/bank2.h"
#include "../gfx.h"

#define ACTOR_TILES_OFFSET 64
#define ACTOR_TILES_TOTALS 4
#define ACTOR_TILES_BANKED 2

#define MAX_ACTORS			16
static void( *draw_method[ MAX_ACTORS ] )( );
static void draw_impl( unsigned char n, const unsigned char *tileset, const unsigned char *tilemap, const unsigned char *palette );

static void draw_actor00(); static void draw_actor01(); static void draw_actor02(); static void draw_actor03();


void engine_actor_manager_init()
{
	draw_method[ 0 ] = draw_actor00;
	draw_method[ 1 ] = draw_actor01;
	draw_method[ 2 ] = draw_actor02;
	draw_method[ 3 ] = draw_actor03;
}

void engine_actor_manager_draw( unsigned char index )
{
	draw_method[ index ]();
}

//void engine_actor_manager_draw_tests()
//{
//	unsigned char index = 2;
//	//unsigned int index = tester;
//
//	const unsigned char *tileset = actor_tileset[ index ];
//	const unsigned char *tilemap = actor_tilemap[ index ];
//	const unsigned char *palette = actor_palette[ index ];
//	unsigned char banking = index / ACTOR_TILES_TOTALS + ACTOR_TILES_BANKED;
//	//unsigned char banking = 5;
//	//unsigned char banking = 3;
//
//	//engine_font_manager_draw_data( banking, 10, 18 );
//	//engine_font_manager_draw_data( index, 10, 20 );
//
//	devkit_SMS_mapROMBank( banking );
//	//devkit_SMS_mapROMBank( 2 );
//	devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
//	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
//	devkit_SMS_loadBGPalette( ( void * ) palette );
//
//	//engine_font_manager_draw_data( index, 10, 21 );
//}

static void draw_impl( unsigned char n, const unsigned char *tileset, const unsigned char *tilemap, const unsigned char *palette )
{
	devkit_SMS_mapROMBank( n );
	devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
	devkit_SMS_loadBGPalette( ( void * ) palette );
}

static void draw_actor00()
{
	draw_impl( actor00__tiles__psgcompr_bank, actor00__tiles__psgcompr, actor00__tilemap__stmcompr, actor00__palette__bin );
}
static void draw_actor01()
{
	draw_impl( actor01__tiles__psgcompr_bank, actor01__tiles__psgcompr, actor01__tilemap__stmcompr, actor01__palette__bin );
}
static void draw_actor02()
{
	draw_impl( actor02__tiles__psgcompr_bank, actor02__tiles__psgcompr, actor02__tilemap__stmcompr, actor02__palette__bin );
}
static void draw_actor03()
{
	draw_impl( actor03__tiles__psgcompr_bank, actor03__tiles__psgcompr, actor03__tilemap__stmcompr, actor03__palette__bin );
}

//void engine_actor_manager_draw_actor(unsigned char index)
//{
//	//unsigned char index = 4;
//	//unsigned int index = tester;
//
//	const unsigned char *tileset = actor_tileset[ index ];
//	const unsigned char *tilemap = actor_tilemap[ index ];
//	const unsigned char *palette = actor_palette[ index ];
//	//unsigned char banking = index / ACTOR_TILES_TOTALS + ACTOR_TILES_BANKED;
//	//unsigned char banking = 2;
//	//unsigned char banking = 5;
//	//unsigned char banking = 3;
//
//	//engine_font_manager_draw_data( banking, 10, 18 );
//	//engine_font_manager_draw_data( index, 10, 20 );
//
//	//devkit_SMS_mapROMBank( banking );
//	devkit_SMS_mapROMBank( 2 );
//	devkit_SMS_loadPSGaidencompressedTiles( tileset, ACTOR_TILES_OFFSET );
//	devkit_SMS_loadSTMcompressedTileMap( 0, 0, ( void * ) tilemap );
//	devkit_SMS_loadBGPalette( ( void * ) palette );
//
//	//engine_font_manager_draw_data( index, 10, 21 );
//}