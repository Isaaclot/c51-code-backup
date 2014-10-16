#include <reg52.h>
#include <keyscan.h>
#include <delay.h>
#include <led.h>
void main ()					  /*主函数*/
{
	while (1)
	{
		scan();	   /*扫面检测按下的键*/
	}	
}