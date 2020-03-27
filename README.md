# Supervision-52-in-1-Menu-Disassemble

A disassemble and analysis of the NES multicart Supervision 52-in-1



## Files

* `Supervision 52-in-1.txt`:
Description of mapper, how the menu works and differences between original game ROM and 52-in-1 variant

* `make.bat`:
Customizable makefile for the project. Change `@set ca65="D:\NESDev\cc65\bin"` to the location of your ca65 bin folder and create directories `.\tmp` and `.\dist\` in the root folder of the project.

* `runt.bat`:
Customizable runfile for the project. Change `@set mesen=D:\Emulators\Mesen` to the location of your emulator.


### Patches
* `.\patches\`:
Patches to turn the original games to the 52-in-1 variants and a "restoration" patch for the `Supervision 52-in-1 [p1].nes` ROM.
Filenames and MD5 of original files are described in `Supervision 52-in-1.txt`.
Entries `20.1989GALAXIAN` and `40.GALAXIAN` are missing due to the games integration into the 52-in-1 Menu ROM space.


### Source code and extras
* `.\src\52-in-1 Menu.asm`:
Commented disassemble of the Supervision 52-in-1 Menu. Compiles to a 1/1 copy of the original.

* `.\src\52-in-1 Menu.chr`:
CHR file. This files contains alot of unused tiles.

* `.\src\52-in-1 Menu.cfg`:
Configuration file for NROM-128/52-in-1 Menu.

* `.\src\52-in-1 Menu.tbl`:
Table file for the rom


### Included binaries
* `.\src\includes\01 0000-107A.bin`:
Contains data between $0000 - $107A. Not Menu code.

* `.\src\includes\02 1099-10A2.bin`:
Contains data between $1099 - $10A2. Not Menu code.

* `.\src\includes\03 1D41-1FFF.bin`:
Contains data between $1D41 - $1FFF. Not Menu code.

* `.\src\includes\04 2000-3FF1.bin`:
Contains data between $2000 - $3FF1. Hacked Galaxian.


### Included libraries
* `.\src\libs\iNES-header.inc`:
iNES header code with description on how to use it

* `.\src\libs\IO-definitions.inc`:
I\O Definitions.
