/*ͨ������λ�ƺ���ʵ����ˮ�Ƶ��ƶ�*/


#include <reg52.h>	 /*����51���ܵļĴ���*/
#include <intrins.h>  /*��λ*/

#define LED P2; 

void Delay (unsigned int ms);

void main ()
{
	unsigned char i;
	LED=0xfe;						//1111_1110->1111_1101
	while (1)
	{
		
		for(i=0 ; i<7 ; i++)
		{
			LED = _crol_ (LED , 1);  //�������(���ƣ��ξ͵�)����LED��λѭ�����ƣ�ÿ����������һλ��LED = _cror_(LED,1)��Ϊ����
			Delay(50000);
		}			 	
		for( i=0; i<7 ;i++  )
			{
				LED = _cror_(LED , 1);  //������䣬��LED��λѭ�����ƣ�ÿ����������һλ��LED = _crol_(LED,1)��Ϊ����
				Delay (50000);
			} 
	} 
}
void Delay (unsigned int ms)			 //msΪ����Ĳ�������ʾ�ӳٵ�ʱ�䣨��λ���
{
	unsigned int i;
	unsigned char j;					//jΪ�ɳ������е�ʱ�����������ͨ��������ʹ��һ��ѭ��Ϊ��MS   
	for ( i=0 ; i<ms ; i++ )
			for ( j=0 ; j<200 ; j++)
			for ( j=0 ; j<200 ; j++);     	//����ѭ����ʱ�������Ҫ��ӷֺŲ�����
		
}