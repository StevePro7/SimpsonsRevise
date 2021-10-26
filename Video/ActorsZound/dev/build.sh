#!/bin/sh

# Content
#folder2c ../gfx gfx
sdcc --debug -c -mz80 --opt-code-speed --peep-file peep-rules.txt --std-c99 gfx.c

# Compile
cd devkit
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 _sms_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 _snd_manager.c
cd ..

cd engine
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 actor_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 asm_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 audio_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 content_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 debug_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 enum_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 font_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 global_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 hack_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 input_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 locale_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 quiz_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 random_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 sample_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 score_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 screen_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 select_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 sound_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 sprite_manager.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 timer_manager.c
cd ..

cd object
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 sound_object.c
cd ..

cd screen
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 diff_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 func_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 intro_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 level_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 long_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 none_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 number_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 over_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 play_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 quiz_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 ready_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 score_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 splash_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 test_screen.c
sdcc --debug -c -mz80 --opt-code-speed --peep-file ../peep-rules.txt --std-c99 title_screen.c
cd ..

sdcc --debug -c -mz80 --opt-code-speed --peep-file peep-rules.txt --std-c99 main.c

# Link
sdcc --debug -o output.ihx --Werror --opt-code-speed -mz80 --no-std-crt0 --data-loc 0xC000 \
../crt0/crt0_sms.rel main.rel \
-Wl-b_BANK2=0x8000 -Wl-b_BANK3=0x8000 -Wl-b_BANK4=0x8000 -Wl-b_BANK5=0x8000 \
-Wl-b_BANK6=0x8000 -Wl-b_BANK7=0x8000 -Wl-b_BANK8=0x8000 -Wl-b_BANK9=0x8000 \
-Wl-b_BANK10=0x8000 -Wl-b_BANK11=0x8000 -Wl-b_BANK12=0x8000 -Wl-b_BANK13=0x8000 \
-Wl-b_BANK14=0x8000 -Wl-b_BANK15=0x8000 \
../lib/SMSlib.lib \
../lib/PSGlib.rel \
devkit/_sms_manager.rel devkit/_snd_manager.rel \
engine/actor_manager.rel \
engine/asm_manager.rel engine/audio_manager.rel engine/content_manager.rel engine/debug_manager.rel \
engine/enum_manager.rel engine/font_manager.rel \
engine/global_manager.rel engine/hack_manager.rel engine/input_manager.rel engine/locale_manager.rel \
engine/quiz_manager.rel engine/random_manager.rel engine/sample_manager.rel engine/score_manager.rel engine/select_manager.rel \
engine/screen_manager.rel engine/sound_manager.rel engine/sprite_manager.rel engine/timer_manager.rel \
object/sound_object.rel \
screen/diff_screen.rel screen/func_screen.rel screen/intro_screen.rel screen/level_screen.rel screen/long_screen.rel \
screen/none_screen.rel screen/number_screen.rel screen/over_screen.rel screen/play_screen.rel screen/quiz_screen.rel \
screen/ready_screen.rel screen/score_screen.rel screen/splash_screen.rel screen/test_screen.rel screen/title_screen.rel \
gfx.rel psg.rel

# Execute
ihx2sms output.ihx output.sms

cd devkit
rm -f *.asm 2> /dev/null
rm -f *.lst 2> /dev/null
rm -f *.sym 2> /dev/null
cd ..

cd engine
rm -f *.asm 2> /dev/null
rm -f *.lst 2> /dev/null
rm -f *.sym 2> /dev/null
cd ..

cd object
rm -f *.asm 2> /dev/null
rm -f *.lst 2> /dev/null
rm -f *.sym 2> /dev/null
cd ..

cd screen
rm -f *.asm 2> /dev/null
rm -f *.lst 2> /dev/null
rm -f *.sym 2> /dev/null
cd ..

rm -f *.asm 2> /dev/null
rm -f *.ihx 2> /dev/null
rm -f *.lk  2> /dev/null
rm -f *.lst 2> /dev/null
rm -f *.noi 2> /dev/null
rm -f *.sym 2> /dev/null

# Run
java -jar ~/Sega/Emulicious/Emulicious.jar output.sms