#define led1 PORTD.RD0
#define led2 PORTD.RD1
#define led3 PORTD.RD2
#define led4 PORTD.RD3

#define btn1 PORTB.RB0
#define btn2 PORTB.RB1
#define btn3 PORTB.RB2


void main() {
    TRISD = 0x00;
    PORTD = 0x02;

    TRISB = 0xFF;

    while(1){
                if(!btn1) led1 = 1;
                else led1 = 0;

                if(!btn2) led2 = 0;
                else led2 = 1;

                if(!btn3) {
                          led3 = 1;
                          led4 = 1;
                }else {
                          led3 = 0;
                          led4 = 0;
                }
    }
}