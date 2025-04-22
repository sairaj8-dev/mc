#include<reg51.h>
void main ()
{
	SCON =0X50;
	TMOD=0X20;
	TH1=-3;
	TR1=1;
	SBUF='I';
	while(TI==0);
	TI=0;
}

