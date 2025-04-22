#include <reg51.h>

unsigned char receive(void)
{
    unsigned char rec;
    while (RI == 0);
    rec = SBUF;
    RI = 0;
    return rec;
}

void trans(unsigned char ch)
{
    SBUF = ch;
    while (TI == 0);
    TI = 0;
}

void main(void)
{
    TMOD = 0x20;
    TH1 = 0xFD;
    SCON = 0x50;
    TR1 = 1;
    IE = 0x90;
    while (1)
    {
        trans(receive());
    }
}
