#include <reg51.h>
#define ADCPORT P2
#define LEDPORT P0

sbit SEL_A = P1^0;
sbit SEL_B = P1^1;
sbit SEL_C = P1^2;
sbit ALE = P1^3;
sbit START = P1^4;
sbit EOC = P1^5;
sbit OE = P1^6;
unsigned char ADC_read(unsigned char channel)
{
    unsigned char result;
    SEL_A = SEL_B = SEL_C = 0;  
    P1=P1|(channel & 0X07);
ALE = 1;  
    START = 1;
ALE = 0;
    START = 0;
    while (EOC == 1);  
    while (EOC == 0);  
    OE = 1;
    result = ADCPORT;  
    OE = 0;
    return result;
}
void main() {
    ADCPORT = 0xFF;  
    EOC = 1;  
    ALE = 0;
    OE = 0;  
    START = 0;  
     
    while (1) {
        LEDPORT = ADC_read(0);
    }
}

