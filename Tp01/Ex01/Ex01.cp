#line 1 "C:/Users/mathw/Documents/Github Projects/MicroC/Tp01/Ex01/Ex01.c"










void main() {
 TRISD = 0x00;
 PORTD = 0x02;

 TRISB = 0xFF;

 while(1){
 if(! PORTB.RB0 )  PORTD.RD0  = 1;
 else  PORTD.RD0  = 0;

 if(! PORTB.RB1 )  PORTD.RD1  = 0;
 else  PORTD.RD1  = 1;

 if(! PORTB.RB2 ) {
  PORTD.RD2  = 1;
  PORTD.RD3  = 1;
 }else {
  PORTD.RD2  = 0;
  PORTD.RD3  = 0;
 }
 }
}
