#include "actor_object.h"

#include "../banks/bank2.h"
//#include "../banks/bank3.h"
//#include "../banks/bank4.h"
//#include "../banks/bank5.h"

const unsigned char *actor_tileset[] =
{
	actor00__tiles__psgcompr,
	actor01__tiles__psgcompr,
	actor02__tiles__psgcompr,
};

const unsigned char *actor_tilemap[] =
{
	actor00__tilemap__stmcompr,
	actor01__tilemap__stmcompr,
	actor02__tilemap__stmcompr,
};

const unsigned char *actor_palette[] =
{
	actor00__palette__bin,
	actor01__palette__bin,
	actor02__palette__bin,
};

const unsigned char actor_banking[] =
{
	actor00__tiles__psgcompr_bank,
	actor01__tiles__psgcompr_bank,
	actor02__tiles__psgcompr_bank,
};