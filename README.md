# Supervision-52-in-1-Menu-Disassemble

A disassemble and analysis of the NES multicart Supervision 52-in-1



## Files

* `Supervision 52-in-1.txt`:
Description of mapper, how the menu works and differences between original game ROM and 52-in-1 variants

* `make.bat`:
Customizable makefile for the project. Change `@set ca65="D:\NESDev\cc65\bin"` to the location of your ca65 bin folder and create directories `.\tmp` and `.\dist\` in the root folder of the project.

* `run.bat`:
Customizable runfile for the project. Change `@set mesen=D:\Emulators\Mesen` to the location of your emulator.


### Patches
* `.\patches\`:
Patches to turn the original games to the 52-in-1 variants and a "restoration" patch for the `Supervision 52-in-1 [p1].nes` ROM (`MD5: 9c23d89727a49a61d5aea3d7cd299b7a`).
Filenames and MD5 of original files are described in `Supervision 52-in-1.txt`.
Patches for `20.1989GALAXIAN` and `40.GALAXIAN` Needs to be applied to `52 Games (Menu) (U) [p1].nes` (`MD5: 130bfe84387010b74e1a4217cbc6bb39`).


### PCB
* `.\pcb\`:
Contains traced pictures of the 1024kB version of the 110-in-1 cart (taken from NESDEV Forums thread `Mapper 255`, pictures by `nesrocks`).


### Source code and extras
* `.\src\52-in-1 Menu.asm`:
Commented disassemble of the Supervision 52-in-1 Menu. Compiles to a 1/1 copy of the original.

* `.\src\52-in-1 Menu.chr`:
CHR file. This is CHR bank 2 of 05.GOONIES, and resides in the CHR ROM at $1E000 - $1FFFF.

* `.\src\52-in-1 Menu.cfg`:
Configuration file for NROM-128/52-in-1 Menu.

* `.\src\52-in-1 Menu.tbl`:
Table file for the rom


### Included binaries

#### 4 Nin Uchi Mahjong leftover code. Not needed for 52-in-1 or Galaxian.
* `.\src\includes\4 Nin Uchi Mahjong 01 0000-0002.bin`:
Data between $0000 - $0002.

* `.\src\includes\4 Nin Uchi Mahjong 02 0006-0016.bin`:
Data between $0006 - $0016.

* `.\src\includes\4 Nin Uchi Mahjong 03 001A-0186.bin`:
Data between $001A - $0186.

* `.\src\includes\4 Nin Uchi Mahjong 04 018A-025A.binn`:
Data between $018A - $025A.

* `.\src\includes\4 Nin Uchi Mahjong 05 025E-064B.bin`:
Data between $025E - $064B.

* `.\src\includes\4 Nin Uchi Mahjong 06 064F-0670.bin`:
Data between $064F - $0670.

* `.\src\includes\4 Nin Uchi Mahjong 07 0674-07A0.bin`:
Data between $0674 - $07A0.

* `.\src\includes\4 Nin Uchi Mahjong 08 07A4-0A45.bin`:
Data between $07A4 - $0A45.

* `.\src\includes\4 Nin Uchi Mahjong 09 0A49-0FFF.bin`:
Data between $0A49 - $0FFF.

* `.\src\includes\4 Nin Uchi Mahjong 10 1099-10A2.bin`:
Data between $1099 - $10A2.

* `.\src\includes\4 Nin Uchi Mahjong 11 1D41-1FFF.bin`:
Data between $1D41 - $1FFF.

#### Galaxian code
* `.\src\includes\Galaxian 01 1000-107A.asm`:
Contains data between $1000 - $107A. Galaxian - Extra code

* `.\src\includes\Galaxian 02 2000-3FF1.bin`
Contains data between $2000 - $3FF1. Galaxian - Main code.



### Included libraries
* `.\src\libs\iNES-header.inc`:
iNES header code with description on how to use it

* `.\src\libs\IO-definitions.inc`:
I\O Definitions.
