#include <reg52.h>
#include <delay.h>
#include <intconfig.h>
#include <tube.h>

sbit K3=P3^2;		   //�����ⲿ�жϵ�I/O��
sbit K4=P3^3;
unsigned char KeyValue = 0;

uchar n=0,s=0,f=0,m=0;			/*����ʱ������ʾ���ֵ���ʼ״̬*/

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
						m=m+1;		   		/*�����ۼ�*/
						if (m==60)		 	/*�����ۼӵ�60ֹͣ*/
							{
								m=0;
								f=f+1;	    /*�����ۼ�*/
								if (f==60)	/*�����ۼӵ�60ֹͣ*/
									{
										f=0;
								  		s++;	 /*ʱ���ۼ�*/
									}
							}	
			  				display(m,f,s);
					}	
				else
					display (m,f,s);   //�������ʾ�������ʱ��ֱ����ʾ������

			}  	
			if (KeyValue=0)
			  	s=0,f=0,m=0;  //��ʱ��������
			  	display (m,f,s);	//��ʾ����K4ʱ��״̬
							
		}
	
}