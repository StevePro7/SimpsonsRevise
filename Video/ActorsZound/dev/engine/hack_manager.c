#include "hack_manager.h"

unsigned char hacker_debug;
unsigned char hacker_cheat, hacker_random;
unsigned char hacker_music, hacker_sound;
unsigned char hacker_extra;

#define PEEK( addr)			(* ( unsigned char *)( addr ) )
#define POKE( addr, data )	(* ( unsigned char *)( addr ) = ( data ) )

#define HACKER_START		0x0050

void engine_hack_manager_init()
{
	hacker_debug = PEEK( HACKER_START - 1 );	// 0x004F		// 0=debug on otherwise off.

	hacker_cheat = PEEK( HACKER_START + 0 );	// 0x0050		// 0=there's no help at all.
	hacker_random = PEEK( HACKER_START + 1 );	// 0x0051		// 0=randomly ask questions.
	hacker_music = PEEK( HACKER_START + 2 );	// 0x0052		// 0=music on otherwise off.
	hacker_sound = PEEK( HACKER_START + 3 );	// 0x0053		// 0=sound on otherwise off.
	hacker_extra = PEEK( HACKER_START + 4 );	// 0x0054		// 0=display all extra text.
}

void engine_hack_manager_invert()
{
	hacker_music = !hacker_music;
	hacker_sound = !hacker_sound;
	hacker_extra = !hacker_extra;
}