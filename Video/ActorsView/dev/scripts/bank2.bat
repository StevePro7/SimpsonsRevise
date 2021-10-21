cd banks
cd bank2

:: Setup.
::bmp2tile.exe raw\actor00.bmp -savetiles "actor00 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor00 (tilemap).stmcompr" -savepalette "actor00 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor01.bmp -savetiles "actor01 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor01 (tilemap).stmcompr" -savepalette "actor01 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor02.bmp -savetiles "actor02 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor02 (tilemap).stmcompr" -savepalette "actor02 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor03.bmp -savetiles "actor03 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor03 (tilemap).stmcompr" -savepalette "actor03 (palette).bin" -fullpalette -exit


bmp2tile.exe raw\actor04.bmp -savetiles "actor04 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor04 (tilemap).stmcompr" -savepalette "actor04 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor05.bmp -savetiles "actor05 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor05 (tilemap).stmcompr" -savepalette "actor05 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor06.bmp -savetiles "actor06 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor06 (tilemap).stmcompr" -savepalette "actor06 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor07.bmp -savetiles "actor07 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor07 (tilemap).stmcompr" -savepalette "actor07 (palette).bin" -fullpalette -exit


bmp2tile.exe raw\actor08.bmp -savetiles "actor08 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor08 (tilemap).stmcompr" -savepalette "actor08 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor09.bmp -savetiles "actor09 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor09 (tilemap).stmcompr" -savepalette "actor09 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor10.bmp -savetiles "actor10 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor10 (tilemap).stmcompr" -savepalette "actor10 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor11.bmp -savetiles "actor11 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor11 (tilemap).stmcompr" -savepalette "actor11 (palette).bin" -fullpalette -exit


bmp2tile.exe raw\actor12.bmp -savetiles "actor12 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor12 (tilemap).stmcompr" -savepalette "actor12 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor13.bmp -savetiles "actor13 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor13 (tilemap).stmcompr" -savepalette "actor13 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor14.bmp -savetiles "actor14 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor14 (tilemap).stmcompr" -savepalette "actor14 (palette).bin" -fullpalette -exit
bmp2tile.exe raw\actor15.bmp -savetiles "actor15 (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 112 -savetilemap "actor15 (tilemap).stmcompr" -savepalette "actor15 (palette).bin" -fullpalette -exit


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