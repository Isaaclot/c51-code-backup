#include <reg52.h>
#include <delay.h>

void IntConfiguration 
	{
	//����INT0
	IT0 = 1; 	//��INT0���ж�����
	//����INT1	//�����ط�����ʽ
	EX0 = 1; 
	IT1 = 1;
	EX1 = 1;

	EA = 1;     //�����ж�
	}
																					3
void Int0 interrupt 0   //�ⲿ�ж�0���жϺ���

{
	Delay10ms (10)	  //�ӳ�����
	if ( K3 = 0 )
		KeyValue = 1;

		
}

void Int1 interrupt 2   //�ⲿ�ж�1���жϺ���
{
	Delay10ms (10)
	if (K4 = 0)
		KeyValue = 0;
}