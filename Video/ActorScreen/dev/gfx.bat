cd ..
cd gfx

bmp2tile.exe raw\01.bmp -savetiles "splash (tiles).psgcompr" -removedupes -nomirror -planar -tileoffset 8 -savetilemap "splash (tilemap).stmcompr" -savepalette "splash (palette).bin" -fullpalette -exit

cd ..
cd dev