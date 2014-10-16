#include <reg52.h>	 /*定义51功能的寄存器*/
#include <intrins.h>  /*移位*/

void main ()
{
	while (1)
	{
		for (i=0 ; i<7 ; i++)
		{
			LED = _crol_ (LED , 1);  /*右移*/
			Delay(50000);
		}			 	
		for ( i=0; i<7 ;i++  )
			{
				LED = _cror_(LED , 1);  /*左移*/
				Delay (50000);
			} 
	} 
}