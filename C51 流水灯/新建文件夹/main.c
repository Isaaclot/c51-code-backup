/*通过左右位移函数实现流水灯的移动*/


#include <reg52.h>	 /*定义51功能的寄存器*/
#include <intrins.h>  /*移位*/

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
			LED = _crol_ (LED , 1);  //左移语句(左移７次就到)，把LED的位循环左移，每次搜索左移一位，LED = _cror_(LED,1)则为右移
			Delay(50000);
		}			 	
		for( i=0; i<7 ;i++  )
			{
				LED = _cror_(LED , 1);  //右移语句，把LED的位循环右移，每次搜索右移一位，LED = _crol_(LED,1)则为右移
				Delay (50000);
			} 
	} 
}
void Delay (unsigned int ms)			 //ms为输入的参数，表示延迟的时间（单位ｍｓ）
{
	unsigned int i;
	unsigned char j;					//j为成程序运行的时间参数　，　通过调整Ｊ使得一次循环为１MS   
	for ( i=0 ; i<ms ; i++ )
			for ( j=0 ; j<200 ; j++)
			for ( j=0 ; j<200 ; j++);     	//ｆｏｒ循环的时候，最后需要添加分号才完整
		
}