#include<REG51.h>
void msdelay(unsigned int);
void main()
{
P1 = 0X00;
while(1)
{
P1 = 0XFF;
msdelay(250); 
P1 = 0X00;
msdelay(250);
}
}
void msdelay(unsigned int delay)
{
int x,y;
for(x=0 ; x<delay ; x++)
 for(y=0 ; y<1275 ; y++);
}
