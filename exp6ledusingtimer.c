#include <reg51.h>
sbit A=P1^0;

void Timer0_ISR(void) interrupt 1 {
    P1 = ~P1;    
}

void main() {
P1=0XFF;
    TMOD = 0x01;   
    TH0 = 0x3C;    
    TL0 = 0xB0;
    IE = 0x82;     
    TR0 = 1;       
    while(1);      
}
