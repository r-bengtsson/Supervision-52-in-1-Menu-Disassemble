; NES I/O definitions

; ---------------------------
; PPU
; ---------------------------

PPUControl_2000		= $2000		; | VPHB SINN | NMI enable (V), PPU master/slave (P), sprite height (H), background tile select (B), sprite tile select (S), increment mode (I), nametable select (NN) 
PPUMask_2001		= $2001		; | BGRs bMmG | color emphasis (BGR), sprite enable (s), background enable (b), sprite left column enable (M), background left column enable (m), greyscale (G) 
PPUStatus_2002		= $2002 	; | VSO- ---- | vblank (V), sprite 0 hit (S), sprite overflow (O); read resets write pair for $2005/$2006 
OAMAddr_2003		= $2003 	; | aaaa aaaa | OAM read/write address
OAMData_2004		= $2004		; | dddd dddd | OAM data read/write, Don't worry about $2004; let OAM_DMA do the work for you.
PPUScroll_2005		= $2005 	; | xxxx xxxx | fine scroll position (two writes: X scroll, Y scroll)
PPUAddr_2006		= $2006 	; | aaaa aaaa | PPU read/write address (two writes: most significant byte, least significant byte) 
PPUData_2007		= $2007 	; | dddd dddd | PPU data read/write 
OAMDMA_4014			= $4014 	; | aaaa aaaa | OAM DMA high address, Writing $xx copies 256 bytes by reading from $xx00-$xxFF and writing to OAMDATA ($2004)



; ---------------------------
; APU
; ---------------------------

; Square 0
SQ0Duty_4000		= $4000		; Duty and volume for square wave 1
SQ0Sweep_4001		= $4001		; Sweep control register for square wave 1 
SQ0Timer_4002		= $4002		; Low byte of period for square wave 1 
SQ0Length_4003		= $4003		; High byte of period and length counter value for square wave 1 

; Square 1
SQ1Duty_4004		= $4004		; Duty and volume for square wave 2
SQ1Sweep_4005		= $4005		; Sweep control register for square wave 2 
SQ1Timer_4006		= $4006		; Low byte of period for square wave 2 
SQ1Length_4007		= $4007		; High byte of period and length counter value for square wave 2 

; Triangle
TRGLinear_4008		= $4008		; Triangle wave linear counter 
								; Nothing at $4009, Unused, but is eventually accessed in memory-clearing loops 
TRGTimer_400A		= $400A 	; Low byte of period for triangle wave 
TRGLength_400B		= $400B 	; High byte of period and length counter value for triangle wave 

; Noise
NoiseVolume_400C    = $400C 	; Volume for noise generator
								; Nothing at $400D, Unused, but is eventually accessed in memory-clearing loops 
NoisePeriod_400E	= $400E 	; Period and waveform shape for noise generator 
NoiseLength_400F	= $400F 	; Length counter value for noise generator 

; DMC
DMCFreq_4010		= $4010		; Play mode and frequency for DMC samples
DMCCounter_4011		= $4011 	; 7-bit DAC
DMCAddress_4012		= $4012 	; Start of DMC waveform is at address $C000 + $40*$xx 
DMCLength_4013		= $4013 	; Length of DMC waveform is $10*$xx + 1 bytes (128*$xx + 8 samples)
; $4014 is handled above
APUStatus_4015			= $4015 	; Sound channels enable and status



; ---------------------------
; Controllers
; ---------------------------

; Controller
CTRL1_4016			= $4016		; when reading, Joystick 1 data (R) and joystick strobe (W)
CTRL1Strobe_4016	= $4016		; when writing
CTRL2_4017			= $4017		; when reading, Joystick 2 data (R) and frame counter control (W) 
APUIRQ				= $4017		; when writing

; Controller buttons
JOYPAD_A			= $80		; %10000000
JOYPAD_B			= $40		; %01000000
JOYPAD_SELECT		= $20		; %00100000
JOYPAD_START		= $10		; %00010000
JOYPAD_UP			= $08		; %00001000
JOYPAD_DOWN			= $04		; %00000100
JOYPAD_LEFT			= $02		; %00000010
JOYPAD_RIGHT		= $01		; %00000001


; $4018-$401F, APU and I/O functionality that is normally disabled. See CPU Test Mode.