/*
RE2 Pulso de comando (RS)
RE1 Pulso de ENABLE (EN)
RD0 DATA0 do display
RD1 DATA1 do display
RD2 DATA2 do display
RD3 DATA3 do display
RD4 DATA4 do display
RD5 DATA5 do display
RD6 DATA6 do display
RD7 DATA7 do display
*/

sbit LCD_RS at RE2_bit;
sbit LCD_EN at RE1_bit;
sbit LCD_D4 at RD4_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D7 at RD7_bit;
sbit LCD_RS_Direction at TRISE2_bit;
sbit LCD_EN_Direction at TRISE1_bit;
sbit LCD_D4_Direction at TRISD4_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D7_Direction at TRISD7_bit;
char mensagem1[] = "Matheus!";
char mensagem2[] = "148632";
char mensagem3[] = "Wellcome";

#define btn1 PORTB.rb0
#define btn2 PORTB.rb1

void main() {
     TRISB = 0b00000011;

     Lcd_Init();
     Lcd_Cmd(_LCD_CLEAR);
     Lcd_Cmd(_LCD_CURSOR_OFF);
     
     Lcd_Out(1,5, mensagem3);
     
     while(1){
              if(!btn1){
                   Lcd_Cmd(_LCD_CLEAR);
                   Lcd_Out(1,5, mensagem1);
              }
              if(!btn2) Lcd_Out(2,6, mensagem2);
     }
     

}