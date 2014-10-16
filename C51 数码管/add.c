#include <add.h>
#include <delay.h>

void add1(uchar m,uchar f,uchar s)			/*定义数码管数字添加函数*/
{
	delay1(1000);
	m=m+1;		   		/*秒钟累加*/
	if (m==60)		 	/*秒钟累加到60停止*/
		{
			m=0;
			f=f+1;	   	/*分钟累加*/
			if (f==60)	/*分钟累加到60停止*/
			{
				f=0;
				s++;	 /*时钟累加*/
			}
		}	
}