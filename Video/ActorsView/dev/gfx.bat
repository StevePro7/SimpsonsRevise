cd ..
cd gfx

bmp2tile.exe raw\font.bmp -savetiles "font (tiles).psgcompr" -removedupes -tileoffset 0 -savetilemap "font (tilemap).bin" -savepalette "font (palette).bin" -exit

folder2c ..\gfx gfx
sdcc -c -mz80 --opt-code-speed --peep-file peep-rules.txt --std-c99 gfx.c

cd ..
cd dev