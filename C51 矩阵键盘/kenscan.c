#include <reg52.h>	  /*52系列单片机头文件*/
#include <LED.h>	   /*引用LED灯运动文件*/
#include <delay.h>	  /*引用延迟函数的外部函数*/
unsigned char temp;
void scan ()		   /*定义矩阵键盘扫描函数*/
{			    
	P1=0x7f;		   /*按键被按下之前，先给P1口赋值0111 1111*/
	temp=P1;		   /**/
	temp=temp&0x0f;		 /*与 赋值*/
	if (temp!=0x0f)
		{
			Delay10ms(5);		  /*延迟防止抖动*/
			temp=P1;
			temp=temp&0x0f;
			if (temp!=0x0f)
				{
					temp=P1;
					switch(temp)		  /*扫描判断哪个按键被按下*/
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