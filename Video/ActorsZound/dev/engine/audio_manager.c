#include "audio_manager.h"
#include "../devkit/_snd_manager.h"
#include "../psg.h"

// IMPORTANT disable compiler warning 110
#ifdef _CONSOLE
#else
#pragma disable_warning 196
#endif

#define sfx_cheat_psg			sfx_cheat_psg
#define sfx_right_psg			sfx_right_psg
#define sfx_wrong_psg			sfx_wrong_psg

// Private helper functions.
//static void play_music( unsigned char *mus, unsigned char bank );
//static void play_music_norepeat( unsigned char *mus, unsigned char bank );
static void play_sound( unsigned char *sfx );


void engine_audio_manager_cheat()
{
	play_sound( ( unsigned char* ) sfx_cheat_psg );
}
void engine_audio_manager_right()
{
	play_sound( ( unsigned char* ) sfx_right_psg );
}
void engine_audio_manager_wrong()
{
	play_sound( ( unsigned char* ) sfx_wrong_psg );
}


static void play_sound( unsigned char *sfx )
{
	//struct_hack_object *ho = &global_hack_object;
	//if( !ho->hack_sound )
	//{
	//	return;
	//}

	devkit_PSGSFXPlay( sfx, devkit_SFX_CHANNEL2() );
}