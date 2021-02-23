#line 1 "C:/Users/mathw/Documents/Github Projects/MicroC/Tp01/Ex03/Ex03.c"
#line 14 "C:/Users/mathw/Documents/Github Projects/MicroC/Tp01/Ex03/Ex03.c"
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




void main() {
 TRISB = 0b00000011;

 Lcd_Init();
 Lcd_Cmd(_LCD_CLEAR);
 Lcd_Cmd(_LCD_CURSOR_OFF);

 Lcd_Out(1,5, mensagem3);

 while(1){
 if(! PORTB.rb0 ){
 Lcd_Cmd(_LCD_CLEAR);
 Lcd_Out(1,5, mensagem1);
 }
 if(! PORTB.rb1 ) Lcd_Out(2,6, mensagem2);
 }


}
