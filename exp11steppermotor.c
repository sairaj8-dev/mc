#include <reg51.h>

void delay(unsigned int);

void main()
{
    P1 = 0x00;
    delay(1);
    while (1)
    {
        P1 = 0x01;
        delay(0.00001);
        P1 = 0x02;
        delay(0.00001);
        P1 = 0x04;
        delay(0.00001);
        P1 = 0x08;
        delay(0.00001);
    }
}
void delay(unsigned int value)
{
    unsigned int i, j;
    for (i = 0; i <= value; i++)
        for (j = 0; j <= 1275; j++);
}

