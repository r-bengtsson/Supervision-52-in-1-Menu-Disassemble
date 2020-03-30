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
Patches for `20.1989GALAXIAN` and `40.GALAXIAN` Needs to be applied to `52 Games (Menu) (U) [p1].nes` (`MD5: 130bfe84387010b74e1a4217cbc6bb39`).


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
* `.\src\includes\01 0006-0013.bin`:
Contains data between $0006 - $0013. Not Menu code.

* `.\src\includes\02 001A-0183.bin`:
Contains data between $001A - $0183. Not Menu code.

* `.\src\includes\03 018A-0257.bin`:
Contains data between $018A - $0257. Not Menu code.

* `.\src\includes\04 025E-0648.bin`:
Contains data between $025E - $0648. Not Menu code.

* `.\src\includes\05 064F-066D.bin`:
Contains data between $064F - $066D. Not Menu code.

* `.\src\includes\06 0674-079D.bin`:
Contains data between $0674 - $079D. Not Menu code.

* `.\src\includes\07 07A4-0A42.bin`:
Contains data between $07A4 - $0A42. Not Menu code.

* `.\src\includes\08 0A49-107A.bin`:
Contains data between $0A49 - $107A. Not Menu code.

* `.\src\includes\09 1099-10A2.bin`:
Contains data between $1099 - $10A2. Not Menu code.

* `.\src\includes\10 1D41-1FFF.bin`:
Contains data between $1D41 - $1FFF. Not Menu code.

* `.\src\includes\11 2000-3FF1.bin`:
Contains data between $2000 - $3FF1. Hacked version of Galaxian.


### Included libraries
* `.\src\libs\iNES-header.inc`:
iNES header code with description on how to use it

* `.\src\libs\IO-definitions.inc`:
I\O Definitions.



## TODO List
  - [ ] Analyse and complete uncommented parts in .asm
  - [ ] Analyse and compare 08.BROS. II/52.FANCY BROS. CHR-ROM
