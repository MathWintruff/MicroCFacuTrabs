
_main:

;Ex01.c,11 :: 		void main() {
;Ex01.c,12 :: 		TRISD = 0x00;
	CLRF       TRISD+0
;Ex01.c,13 :: 		PORTD = 0x02;
	MOVLW      2
	MOVWF      PORTD+0
;Ex01.c,15 :: 		TRISB = 0xFF;
	MOVLW      255
	MOVWF      TRISB+0
;Ex01.c,17 :: 		while(1){
L_main0:
;Ex01.c,18 :: 		if(!btn1) led1 = 1;
	BTFSC      PORTB+0, 0
	GOTO       L_main2
	BSF        PORTD+0, 0
	GOTO       L_main3
L_main2:
;Ex01.c,19 :: 		else led1 = 0;
	BCF        PORTD+0, 0
L_main3:
;Ex01.c,21 :: 		if(!btn2) led2 = 0;
	BTFSC      PORTB+0, 1
	GOTO       L_main4
	BCF        PORTD+0, 1
	GOTO       L_main5
L_main4:
;Ex01.c,22 :: 		else led2 = 1;
	BSF        PORTD+0, 1
L_main5:
;Ex01.c,24 :: 		if(!btn3) {
	BTFSC      PORTB+0, 2
	GOTO       L_main6
;Ex01.c,25 :: 		led3 = 1;
	BSF        PORTD+0, 2
;Ex01.c,26 :: 		led4 = 1;
	BSF        PORTD+0, 3
;Ex01.c,27 :: 		}else {
	GOTO       L_main7
L_main6:
;Ex01.c,28 :: 		led3 = 0;
	BCF        PORTD+0, 2
;Ex01.c,29 :: 		led4 = 0;
	BCF        PORTD+0, 3
;Ex01.c,30 :: 		}
L_main7:
;Ex01.c,31 :: 		}
	GOTO       L_main0
;Ex01.c,32 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
