echo start
:: Setup.
cd ../banks/bank8/raw
pcmenc -rto 1 -dt1 12 -dt2 12 -dt3 423 right01.wav
mv right01.wav.pcmenc ../

:: Convert.
cd ../..
folder2c bank8 bank8 8

:: Compile
sdcc --debug -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK8 bank8.c

:: Cleanup
if exist "*.asm" del "*.asm" > nul; 
if exist "*.lst" del "*.lst" > nul; 
if exist "*.sym" del "*.sym" > nul

cd ../scripts
echo -end-