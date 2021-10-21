#include "actor_manager.h"
#include "../devkit/_sms_manager.h"
//#include "../object/actor_object.h"
#include "../banks/bank2.h"
#include "../banks/bank3.h"
#include "../gfx.h"

#define ACTOR_TILES_OFFSET 64
#define ACTOR_TILES_TOTALS 4
#define ACTOR_TILES_BANKED 2

#define MAX_ACTORS			16
static void( *draw_method[ MAX_ACTORS ] )( );
static void draw_impl( unsigned char n, const unsigned char *tileset, const unsigned char *tilemap, const unsigned char *palette );

static void draw_actor00(); static void draw_actor01(); static void draw_actor02(); static void draw_actor03();
static void draw_actor04(); static void draw_actor05(); static void draw_actor06(); static void draw_actor07();

void engine_actor_manager_init()
{
	draw_method[ 0 ] = draw_actor00;
	draw_method[ 1 ] = draw_actor01;
	draw_method[ 2 ] = draw_actor02;
	draw_method[ 3 ] = draw_actor03;
	draw_method[ 4 ] = draw_actor04;
	draw_method[ 5 ] = draw_actor05;
	draw_method[ 6 ] = draw_actor06;
	draw_method[ 7 ] = draw_actor07;
}

void engine_actor_manager_draw( unsigned char index )
{
	draw_method[ index ]();
}

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
static void draw_actor04()
{
	draw_impl( actor04__tiles__psgcompr_bank, actor04__tiles__psgcompr, actor04__tilemap__stmcompr, actor04__palette__bin );
}
static void draw_actor05()
{
	draw_impl( actor05__tiles__psgcompr_bank, actor05__tiles__psgcompr, actor05__tilemap__stmcompr, actor05__palette__bin );
}
static void draw_actor06()
{
	draw_impl( actor06__tiles__psgcompr_bank, actor06__tiles__psgcompr, actor06__tilemap__stmcompr, actor06__palette__bin );
}
static void draw_actor07()
{
	draw_impl( actor07__tiles__psgcompr_bank, actor07__tiles__psgcompr, actor07__tilemap__stmcompr, actor07__palette__bin );
}
