#include <reg52.h>
#define uchar unsigned char 
#define uint unsigned int 
sbit led1 = P1^0;
uchar num;
void main ()
	{
		TMOD = 0x01;
		TH0 = (65535-45872)/256;
		TH1 = (65535-45872)%256;
		EA = 1;
		ET0 = 1;
		TR0 = 1;
		while (1);
	}

void T0_timer() interrupt 1
{
	TH0 = (65535-45872)/256;
	TH1 = (65535-45872)%256;
	num ++;
	if (num = 20)
	{
		num = 0 ;
		led1 = ~led1;
	}
}