#include <reg51.h>
#define SWITCH_PORT	P3
 #define LED_PORT		P2
int main()
{

P3 = 0xFF;	
P2 = 0x00;
while(1)
{ if((P3&0x08)==0x08)
{

P2 = 0x92;
}

else
{

P2 = 0x6D;
}

}

}
