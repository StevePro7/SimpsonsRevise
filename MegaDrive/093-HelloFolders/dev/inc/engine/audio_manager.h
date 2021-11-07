#ifndef __AUDIO_MANAGER__
#define __AUDIO_MANAGER__

void engine_audio_manager_init();
void engine_audio_manager_play_effect( unsigned char index );
void engine_audio_manager_play_music( unsigned char index );
void engine_audio_manager_play_result( unsigned char index );
void engine_audio_manager_stop();

void engine_audio_manager_sound_woohoo();
void engine_audio_manager_sound_doh();


#endif//__AUDIO_MANAGER__

//#ifndef _AUDIO_MANAGER_H_
//#define _AUDIO_MANAGER_H_
//
//void engine_audio_manager_init();
//void engine_audio_manager_start_music();
//void engine_audio_manager_finish_music();
//void engine_audio_manager_stop_music();
//
//void engine_audio_manager_sound_right();
//void engine_audio_manager_sound_wrong();
//void engine_audio_manager_sound_cheat();

//#endif//_AUDIO_MANAGER_H_
