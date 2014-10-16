#include <reg52.h>			   /*52系列单片机头文件*/
#include <delay.h>			   /*引用延迟函数的外部函数*/
void LED1 ()				   /*LED灯向左逐个流动*/
{
	int i,a;
	a = 0x01;					  	/*给中间变量赋值*/
	for ( i=0 ; i<8 ; i++ )
		{	
			P2=~a;
			a<<=1;
			Delay10ms(50);
		}
}

void LED2 ()				   /*LED灯向左隔一流动*/
{	
	int i,a;
	a = 0x01;						/*给中间变量赋值*/
	for ( i=0 ; i<4 ; i++ )
	{	
		P2=~a;
		a<<=2;
		Delay10ms(50);
	}
}

void LED3 ()				   /*LED向右逐一流动*/
{
	int i,a;
	a = 0x80;					/*给中间变量赋值*/
	for ( i=0 ; i<8 ; i++ )
	{
		P2=~a;
		a>>=1;
		Delay10ms(50);
	}
}

void LED4 ()				   /*LED灯向右跳动流*/
{
	int i,a;
	a = 0x80;					  	/*给中间变量赋值*/
	for ( i=0 ; i<4 ; i++ )
		{
			P2=~a;
			a>>=2;
			Delay10ms(50);
		}
}