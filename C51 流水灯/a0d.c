#include <reg52.h>	 /*����51���ܵļĴ���*/
#include <intrins.h>  /*��λ*/
#define uchar unsigned char 

void Delay(int ns)
{
    // int i;
	 while (ns--);

}

void main ()
{
   	uchar LED=0xfe;
	int i;
	while (1)
	{
		for (i=0 ; i<8 ; i++)
		{
				P1 = LED;
			LED = _crol_ (LED , 1);  /*����*/
			
			Delay(50000);
		
		}			 	
		for ( i=0; i<8 ;i++  )
			{
				
				LED = _cror_(LED , 1);  /*����*/
					P1 = LED;
				Delay (50000);
			
			}
		//Delay(5000);
		 
	} 
}