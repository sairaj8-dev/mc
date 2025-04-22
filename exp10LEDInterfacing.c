#include <reg51.h>                                                                                                            
sbit rs = P3^2;  
sbit en = P3^3;  
void lcdcmd(unsigned char value);  
void lcddata(unsigned char value);  
void msdelay(unsigned int itime);  
void main(void)
{
 
    P0 = 0x00;
    P1 = 0x00;
    P2 = 0x00;
    P3 = 0x00;
    msdelay(1000) 
    lcdcmd(0x38);  
    msdelay(250);
    lcdcmd(0x0E);  
    msdelay(250);
    lcdcmd(0x01);  
    msdelay(250);
    lcdcmd(0x06);  
    msdelay(250)
    lcdcmd(0x80);  
    msdelay(250);

    lcddata('P');
    msdelay(250);
    lcddata('C');
    msdelay(250);
    lcddata('E');
    msdelay(250);
    lcddata('T');
    msdelay(250);
    lcddata('"');
    msdelay(250);
     lcddata('s');	
    msdelay(250);
   lcdcmd(0x08);  
    msdelay(250);
    lcddata('P');
    msdelay(250);
    lcddata('C');
    msdelay(250);
    lcddata('C');
    msdelay(250);
    lcddata('O');
    msdelay(250);
    lcddata('E');
    msdelay(250);
}
void lcdcmd(unsigned char value)
{
    P0 = value;  
    rs = 0;      
    en = 1;      
    msdelay(1);
    en = 0;      
}

void lcddata(unsigned char value)
{
    P0 = value;  
    rs = 1;      
    en = 1;      
    msdelay(1);
    en = 0;      
}
void msdelay(unsigned int itime)
{
    unsigned int i, j;
    for (i = 0; i <= itime; i++)
        for (j = 0; j <= 120; j++);  
}
