# Supervision-52-in-1-Menu-Disassemble
An disassemble and analysis of the multicart Supervision 52-in-1


Files

bin\0000-107A.bin       - Contains data between $0000 - $107A. Not Menu code.
bin\1099-10A2.bin       - Contains data between $1099 - $10A2. Not Menu code.
bin\1D41-3FF1.bin       - Contains data between $1D41 - $3FF1. Not Menu code.


libs\iNES-header.inc    - iNES header code with description on how to use it

libs\IO-definitions.inc - I\O Definitions.


52-in-1 Menu.asm        - Commented disassemble of the Supervision 52-in-1 Menu. Compiles to a 1/1 copy of original.

52-in-1 Menu.cfg        - Configuration file for NROM-128. Used different segmens to align code to correct adress (perhaps there is a better way do do this?)

52-in-1 Menu.chr        - CHR file.

