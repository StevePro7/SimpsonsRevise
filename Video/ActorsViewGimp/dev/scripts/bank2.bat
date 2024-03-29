cd ..
cd banks
cd bank2

:: Setup.
bmp2tile.exe raw\actor00.bmp -savetiles "actor00 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 64 -savetilemap "actor00 (tilemap).stmcompr" -savepalette "actor00 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor01.bmp -savetiles "actor01 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 64 -savetilemap "actor01 (tilemap).stmcompr" -savepalette "actor01 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor02.bmp -savetiles "actor02 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 64 -savetilemap "actor02 (tilemap).stmcompr" -savepalette "actor02 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor03.bmp -savetiles "actor03 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 64 -savetilemap "actor03 (tilemap).stmcompr" -savepalette "actor03 (palette).bin" -fullpalette -exit

:: Convert.
cd ..
folder2c bank2 bank2 2

:: Compile
sdcc --debug -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK2 bank2.c

:: Cleanup
if exist "*.asm" del "*.asm" > nul
if exist "*.lst" del "*.lst" > nul
if exist "*.sym" del "*.sym" > nul

cd ..
cd scripts