#include<reg51.h> sbit MOTOR1 = P1^1; sbit MOTOR2 = P1^2;
void delay (unsigned int time)
{
unsigned int i,j;
for (i=0; i<time; i++) for (j=0; j<2000; j++);
}
void DCMOTOR_stop(void)
{
MOTOR1 = 0;
MOTOR2 = 0;
}

void DCMOTOR_forward(void)
{
MOTOR1 = 1;
MOTOR2 = 0;
}
void DCMOTOR_reverse(void)
{
MOTOR1 = 0;
MOTOR2 = 1;
}
int main ()
{
P1 = 0;
while (1)
{
DCMOTOR_stop(); 
delay(100);
 DCMOTOR_forward(); 
delay(100); 
DCMOTOR_stop();
 delay(100); 
DCMOTOR_reverse();
 delay(100);
}

