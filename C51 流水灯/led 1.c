#include <reg52.h>	 /*����51���ܵļĴ���*/
#include <intrins.h>  /*��λ*/

void main ()
{
	while (1)
	{
		for (i=0 ; i<7 ; i++)
		{
			LED = _crol_ (LED , 1);  /*����*/
			Delay(50000);
		}			 	
		for ( i=0; i<7 ;i++  )
			{
				LED = _cror_(LED , 1);  /*����*/
				Delay (50000);
			} 
	} 
}