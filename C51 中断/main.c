#include <reg52.h>
#include <delay.h>
#include <intconfig.h>
#include <tube.h>

sbit K3=P3^2;		   //定义外部中断的I/O口
sbit K4=P3^3;
unsigned char KeyValue = 0;

uchar n=0,s=0,f=0,m=0;			/*定义时分秒显示数字的起始状态*/

void main ()
{
	IntConfiguration();
	while (1)
		{
			if (KeyValue=1)
			{
				if (m=0&&f=0&&s=0)
					{
			  			delay10ms(100);
						m=m+1;		   		/*秒钟累加*/
						if (m==60)		 	/*秒钟累加到60停止*/
							{
								m=0;
								f=f+1;	    /*分钟累加*/
								if (f==60)	/*分钟累加到60停止*/
									{
										f=0;
								  		s++;	 /*时钟累加*/
									}
							}	
			  				display(m,f,s);
					}	
				else
					display (m,f,s);   //数码管显示数非零的时候，直接显示该数字

			}  	
			if (KeyValue=0)
			  	s=0,f=0,m=0;  //将时分秒清零
			  	display (m,f,s);	//显示按下K4时的状态
							
		}
	
}