#include "actor_object.h"

#include "../banks/bank2.h"
#include "../banks/bank3.h"
#include "../banks/bank4.h"
#include "../banks/bank5.h"

const unsigned char *actor_tileset[] =
{
	actor00__tiles__psgcompr,
	actor01__tiles__psgcompr,
	actor02__tiles__psgcompr,
	actor03__tiles__psgcompr,
	actor04__tiles__psgcompr,
	actor05__tiles__psgcompr,
	actor06__tiles__psgcompr,
	actor07__tiles__psgcompr,
	actor08__tiles__psgcompr,
	actor09__tiles__psgcompr,
	actor10__tiles__psgcompr,
	actor11__tiles__psgcompr,
	actor12__tiles__psgcompr,
	actor13__tiles__psgcompr,
	actor14__tiles__psgcompr,
	actor15__tiles__psgcompr,
};

const unsigned char *actor_tilemap[] =
{
	actor00__tilemap__stmcompr,
	actor01__tilemap__stmcompr,
	actor02__tilemap__stmcompr,
	actor03__tilemap__stmcompr,
	actor04__tilemap__stmcompr,
	actor05__tilemap__stmcompr,
	actor06__tilemap__stmcompr,
	actor07__tilemap__stmcompr,
	actor08__tilemap__stmcompr,
	actor09__tilemap__stmcompr,
	actor10__tilemap__stmcompr,
	actor11__tilemap__stmcompr,
	actor12__tilemap__stmcompr,
	actor13__tilemap__stmcompr,
	actor14__tilemap__stmcompr,
	actor15__tilemap__stmcompr,
};

const unsigned char *actor_palette[] =
{
	actor00__palette__bin,
	actor01__palette__bin,
	actor02__palette__bin,
	actor03__palette__bin,
	actor04__palette__bin,
	actor05__palette__bin,
	actor06__palette__bin,
	actor07__palette__bin,
	actor08__palette__bin,
	actor09__palette__bin,
	actor10__palette__bin,
	actor11__palette__bin,
	actor12__palette__bin,
	actor13__palette__bin,
	actor14__palette__bin,
	actor15__palette__bin,
};

const unsigned char actor_banking[] =
{
	actor00__tiles__psgcompr_bank,
	actor01__tiles__psgcompr_bank,
	actor02__tiles__psgcompr_bank,
	actor03__tiles__psgcompr_bank,
	actor04__tiles__psgcompr_bank,
	actor05__tiles__psgcompr_bank,
	actor06__tiles__psgcompr_bank,
	actor07__tiles__psgcompr_bank,
	actor08__tiles__psgcompr_bank,
	actor09__tiles__psgcompr_bank,
	actor10__tiles__psgcompr_bank,
	actor11__tiles__psgcompr_bank,
	actor12__tiles__psgcompr_bank,
	actor13__tiles__psgcompr_bank,
	actor14__tiles__psgcompr_bank,
	actor15__tiles__psgcompr_bank,
};