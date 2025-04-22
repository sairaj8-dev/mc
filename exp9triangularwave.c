#include<REG51.h>
unsigned int d ;
void main()
{
  P1=0x00;
  while(1)
  {
   for(d=0 ;d<255;d++)
   {
    P1=d;
   }
   for(d=255;d>0;d--)
   {
    P1=d;
   }
  }
}  
