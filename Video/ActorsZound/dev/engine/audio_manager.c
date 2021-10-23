#include "audio_manager.h"
#include "../devkit/_sms_manager.h"
#include "../devkit/_snd_manager.h"
#include "../banks/bank15.h"
#include "../psg.h"

// IMPORTANT disable compiler warning 110
#ifdef _CONSOLE
#else
#pragma disable_warning 196
#endif

#define music_psg				music_psg
#define finish_psg				finish_psg

#define sfx_cheat_psg			sfx_cheat_psg
#define sfx_right_psg			sfx_right_psg
#define sfx_wrong_psg			sfx_wrong_psg

// Private helper functions.
static void play_music( unsigned char *music, unsigned char bank );
static void play_sound( unsigned char *sfx );


void engine_audio_manager_start_music()
{
	play_music( ( unsigned char* ) music_psg, music_psg_bank );
}

void engine_audio_manager_finish_music()
{
	play_music( ( unsigned char* ) finish_psg, finish_psg_bank );
}

void engine_audio_manager_stop_music()
{
	devkit_PSGStop();
}


void engine_audio_manager_sound_right()
{
	play_sound( ( unsigned char* ) sfx_right_psg );
}
void engine_audio_manager_sound_wrong()
{
	play_sound( ( unsigned char* ) sfx_wrong_psg );
}
void engine_audio_manager_sound_cheat()
{
	play_sound( ( unsigned char* ) sfx_cheat_psg );
}

static void play_music( unsigned char *music, unsigned char bank )
{
	devkit_SMS_mapROMBank( music_psg_bank );
	devkit_PSGPlayNoRepeat( music );
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