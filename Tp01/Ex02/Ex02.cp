#line 1 "C:/Users/mathw/Documents/Github Projects/MicroC/Tp01/Ex02/Ex02.c"
#line 16 "C:/Users/mathw/Documents/Github Projects/MicroC/Tp01/Ex02/Ex02.c"
void main() {
 TRISD = 0X00;
 PORTD = 0X00;
 TRISA = 0X00;
 PORTA = 0X00;

 PORTA.RB2 = 1;
 while(1){
 PORTD = 0b00111111;
 DELAY_MS(1000);
 PORTD = 0b00000110;
 DELAY_MS(1000);
 PORTD = 0b01011011;
 DELAY_MS(1000);
 PORTD = 0b01001111;
 DELAY_MS(1000);
 PORTD = 0b01100110;
 DELAY_MS(1000);
 PORTD = 0b01101101;
 DELAY_MS(1000);
 PORTD = 0b01111101;
 DELAY_MS(1000);
 PORTD = 0b00000111;
 DELAY_MS(1000);
 PORTD = 0b01111111;
 DELAY_MS(1000);
 PORTD = 0b01100111;
 DELAY_MS(1000);
 PORTD = 0b01110111;
 DELAY_MS(1000);
 PORTD = 0b01111100;
 DELAY_MS(1000);
 PORTD = 0b00111001;
 DELAY_MS(1000);
 PORTD = 0b01011110;
 DELAY_MS(1000);
 PORTD = 0b01111001;
 DELAY_MS(1000);
 PORTD = 0b01110001;
 DELAY_MS(1000);
 }
}
