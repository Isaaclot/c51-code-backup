#include <add.h>
#include <delay.h>

void add1(uchar m,uchar f,uchar s)			/*���������������Ӻ���*/
{
	delay1(1000);
	m=m+1;		   		/*�����ۼ�*/
	if (m==60)		 	/*�����ۼӵ�60ֹͣ*/
		{
			m=0;
			f=f+1;	   	/*�����ۼ�*/
			if (f==60)	/*�����ۼӵ�60ֹͣ*/
			{
				f=0;
				s++;	 /*ʱ���ۼ�*/
			}
		}	
}