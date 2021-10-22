cd ..
cd banks
cd bank7

:: Setup.
bmp2tile.exe raw\simpsons.bmp -savetiles "simpsons (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 64 -savetilemap "simpsons (tilemap).stmcompr" -savepalette "simpsons (palette).bin" -fullpalette -exit

:: Convert.
cd ..
folder2c bank7 bank7 7

:: Compile
sdcc --debug -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK7 bank7.c

:: Cleanup
if exist "*.asm" del "*.asm" > nul
if exist "*.lst" del "*.lst" > nul
if exist "*.sym" del "*.sym" > nul

cd ..
cd scripts