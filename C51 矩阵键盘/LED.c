#include <reg52.h>			   /*52ϵ�е�Ƭ��ͷ�ļ�*/
#include <delay.h>			   /*�����ӳٺ������ⲿ����*/
void LED1 ()				   /*LED�������������*/
{
	int i,a;
	a = 0x01;					  	/*���м������ֵ*/
	for ( i=0 ; i<8 ; i++ )
		{	
			P2=~a;
			a<<=1;
			Delay10ms(50);
		}
}

void LED2 ()				   /*LED�������һ����*/
{	
	int i,a;
	a = 0x01;						/*���м������ֵ*/
	for ( i=0 ; i<4 ; i++ )
	{	
		P2=~a;
		a<<=2;
		Delay10ms(50);
	}
}

void LED3 ()				   /*LED������һ����*/
{
	int i,a;
	a = 0x80;					/*���м������ֵ*/
	for ( i=0 ; i<8 ; i++ )
	{
		P2=~a;
		a>>=1;
		Delay10ms(50);
	}
}

void LED4 ()				   /*LED������������*/
{
	int i,a;
	a = 0x80;					  	/*���м������ֵ*/
	for ( i=0 ; i<4 ; i++ )
		{
			P2=~a;
			a>>=2;
			Delay10ms(50);
		}
}