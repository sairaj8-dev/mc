#include <REG51.h>
sbit A = P1^0;
void Timer0_ISR(void) interrupt 1 {
 A = ~A;   
}	
void main() {
    TMOD = 0x01;
    TH0 = 0x00;
    TL0 = 0x00;
    IE = 0x82;
    TR0 = 1;
    while (1);
}
