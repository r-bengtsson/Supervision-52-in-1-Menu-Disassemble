; Header Segment borrowed from example.s by Brad Smith (rainwarrior),
; 4/06/2014 [http://rainwarrior.ca]

; USAGE:
; put this before the inclusion of this file

;    INES_MAPPER	= 0 				; 0 = NROM
;    INES_PRG		= 2					; Size of PRG ROM in 16 KB units (2 * 16KB PRG ROM)
;    INES_CHR		= 1					; Size of CHR ROM in 8 KB units (Value 0 means the board uses CHR RAM) (1 * 8KB CHR ROM)
;    INES_MIRROR	= 1 				; 0 = horizontal mirroring, 1 = vertical mirroring
;    INES_SRAM		= 0 				; 1 = battery backed SRAM at $6000-7FFF

.segment "HEADER"						; iNES header https://wiki.nesdev.com/w/index.php/INES

    .byte 'N', 'E', 'S', $1A			; ID
;    .byte $02							; 4: Size of PRG ROM in 16 KB units (2 * 16KB PRG ROM)
    .byte INES_PRG
;    .byte $01							; 5: Size of CHR ROM in 8 KB units (Value 0 means the board uses CHR RAM) (1 * 8KB CHR ROM)
    .byte INES_CHR
    .byte INES_MIRROR | (INES_SRAM << 1) | ((INES_MAPPER & $f) << 4)
    .byte (INES_MAPPER & %11110000)
    .byte $00							; 8: Flags 8 - PRG-RAM size (rarely used extension)
    .byte $00							; 9: Flags 9 - TV system (rarely used extension)
    .byte $00							; 10: Flags 10 - TV system, PRG-RAM presence (unofficial, rarely used extension)
    .byte $00, $00, $00, $00, $00		; 11-15: Unused padding (should be filled with zero, but some rippers put their name across bytes 7-15)
