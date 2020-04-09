; Galaxian - Extra code
; $9000
___F1000:
    LDX #$20
    LDY #$00
    TYA
; $9005
___L1005:
    STA $00, X
    INX
    BNE ___L1005                    ; $9005
    LDX #$00
    TXA
    RTS

;--------------

; $900E
___F100E:
    PHA
    LDA $1A
    BNE ___L1018                    ; $9018
    PLA
    SEC
    SBC #$04
    RTS

;--------------

; $9018
___L1018:
    PLA
    SEC
    SBC #$08
    RTS

;--------------


; $901D
___L101D:
    LDA $1A
    BNE ___L1033                    ; $9033
    LDA $4C
    AND $E5A0, X
    BNE ___L102C                    ; $902C
    LDA #$03
    STA $44, X
; $902C
___L102C:
    DEC $44, X
    BEQ ___L1032                    ; $9032
    PLA
    PLA
; $9032
___L1032:
    RTS

;--------------

; $9033
___L1033:
    LDA $4C
    AND $E5A0, X
    BNE ___L1044                    ; $9044
    LDA #$03
    STA $44, X
    DEC $44, X
    BEQ ___L1044                    ; $9044
    PLA
    PLA
___L1044:
    RTS

;--------------

; $9045
___F1045:
    LDA $1A
    BNE ___L104D                    ; $904D
    LDA $E1B4, Y
    RTS

;--------------

; $904D
___L104D:
    LDA $D05B, Y
    RTS

;--------------

; $9051
___L1051:
    LDA $01
    LSR A
    LSR A
    LSR A
    AND #$1E
    JMP $FF93                       ; Jump to main code

;--------------

; $905B
; Data, not sure what it is
.byte $0F, $16, $30, $2C, $0F, $16, $11, $27, $0F, $23, $16, $27, $0F, $1A, $11, $27, $0F, $30, $11, $27, $0F, $16, $11, $27, $0F, $23, $11, $27, $0F, $1A, $11, $27
