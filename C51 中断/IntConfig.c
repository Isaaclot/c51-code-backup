#include <reg52.h>
#include <delay.h>

void IntConfiguration 
	{
	//设置INT0
	IT0 = 1; 	//打开INT0的中断允许
	//设置INT1	//跳变沿发出方式
	EX0 = 1; 
	IT1 = 1;
	EX1 = 1;

	EA = 1;     //打开总中断
	}
																					3
void Int0 interrupt 0   //外部中断0的中断函数

{
	Delay10ms (10)	  //延迟消抖
	if ( K3 = 0 )
		KeyValue = 1;

		
}

void Int1 interrupt 2   //外部中断1的中断函数
{
	Delay10ms (10)
	if (K4 = 0)
		KeyValue = 0;
}