#include <reg52.h>	  /*52ϵ�е�Ƭ��ͷ�ļ�*/
#include <LED.h>	   /*����LED���˶��ļ�*/
#include <delay.h>	  /*�����ӳٺ������ⲿ����*/
unsigned char temp;
void scan ()		   /*����������ɨ�躯��*/
{			    
	P1=0x7f;		   /*����������֮ǰ���ȸ�P1�ڸ�ֵ0111 1111*/
	temp=P1;		   /**/
	temp=temp&0x0f;		 /*�� ��ֵ*/
	if (temp!=0x0f)
		{
			Delay10ms(5);		  /*�ӳٷ�ֹ����*/
			temp=P1;
			temp=temp&0x0f;
			if (temp!=0x0f)
				{
					temp=P1;
					switch(temp)		  /*ɨ���ж��ĸ�����������*/
						{
							case(0x77):	LED1();break;
							case(0x7b): LED2();break;
							case(0x7d): LED3();break;
							case(0x7e):	LED4();break;
						}
					while (temp!=0x0f)
						{
							temp=P1;
							temp=temp&0x0f;
						}
					
				}
		}
}