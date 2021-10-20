echo start
:: Setup.
cd ../banks/bank4/raw
pcmenc -rto 1 -dt1 12 -dt2 12 -dt3 423 right03.wav
mv right03.wav.pcmenc ../

:: Convert.
cd ../..
folder2c bank4 bank4 4

:: Compile
sdcc --debug -c --no-std-crt0 -mz80 --Werror --opt-code-speed --constseg BANK4 bank4.c

:: Cleanup
if exist "*.asm" del "*.asm" > nul; 
if exist "*.lst" del "*.lst" > nul; 
if exist "*.sym" del "*.sym" > nul

cd ../scripts
echo -end-