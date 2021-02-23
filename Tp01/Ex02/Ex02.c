/*
RD0 Segmento A
RD1 Segmento B
RD2 Segmento C
RD3 Segmento D
RD4 Segmento E
RD5 Segmento F
RD6 Segmento G
RD7 Segmento Ponto
RA2 Seleção do Display1 (Disp1 - MSB)
RA3 Seleção do Display2 (Disp2)
RA4 Seleção do Display3 (Disp3)
RA5 Seleção do Display4 (Disp4 - LSB)
*/

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