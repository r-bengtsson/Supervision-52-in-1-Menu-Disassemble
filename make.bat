@REM Set some local variables
@set ca65="D:\NESDev\cc65\bin"
@set tmp=.\tmp
@set dist=.\dist
@set source=.\src

@REM Clean
@del /q "%tmp%"
@del /q "%dist%"

@REM Assemble and link
@echo.
@echo Copying files to release
@copy "%source%\52-in-1 Menu.tbl" "%dist%\52-in-1 Menu.tbl"
@echo.
@echo Compiling...
@%ca65%\ca65.exe "%source%\52-in-1 Menu.asm" -g -o "%tmp%\52-in-1 Menu (ASM).o" -t nes
@IF ERRORLEVEL 1 GOTO failure
@echo.
@echo Linking...
@%ca65%\ld65.exe -o "%dist%/52-in-1 Menu (ASM).nes" -C "%source%\52-in-1 Menu.cfg" "%tmp%\52-in-1 Menu (ASM).o" --dbgfile "%dist%\52-in-1 Menu (ASM).dbg"
@IF ERRORLEVEL 1 GOTO failure
@echo.
@echo Success!
@GOTO endbuild
:failure
@echo.
@echo Build error!
:endbuild
