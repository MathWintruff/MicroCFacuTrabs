
_main:

;Ex03.c,33 :: 		void main() {
;Ex03.c,34 :: 		TRISB = 0b00000011;
	MOVLW      3
	MOVWF      TRISB+0
;Ex03.c,36 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;Ex03.c,37 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Ex03.c,38 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Ex03.c,40 :: 		Lcd_Out(1,5, mensagem3);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _mensagem3+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;Ex03.c,42 :: 		while(1){
L_main0:
;Ex03.c,43 :: 		if(!btn1){
	BTFSC      PORTB+0, 0
	GOTO       L_main2
;Ex03.c,44 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;Ex03.c,45 :: 		Lcd_Out(1,5, mensagem1);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _mensagem1+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;Ex03.c,46 :: 		}
L_main2:
;Ex03.c,47 :: 		if(!btn2) Lcd_Out(2,6, mensagem2);
	BTFSC      PORTB+0, 1
	GOTO       L_main3
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      6
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      _mensagem2+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
L_main3:
;Ex03.c,48 :: 		}
	GOTO       L_main0
;Ex03.c,51 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
