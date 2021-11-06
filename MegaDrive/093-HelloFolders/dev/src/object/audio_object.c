#include "audio_object.h"
#include "sfx_effects.h"
#include "sfx_musics.h"

const unsigned char *audio_effect[ MAX_EFFECTS ] =
{
	sfx_cheat,
	sfx_ready,
	sfx_right,
	sfx_wrong,
};
const unsigned int audio_effect_size[ MAX_EFFECTS ] =
{
	13568,
	15872,
	16384,
	14592,
};

const unsigned char *audio_music[ MAX_MUSICS ] =
{
	sfx_gameover,
	sfx_titlemusic,
};
const unsigned int audio_music_size[ MAX_MUSICS ] =
{
	34816,
	977152,
};