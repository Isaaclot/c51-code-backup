#include <reg51.h>		  /*定义51功能的寄存器*/
#define uchar unsigned char	  /*宏定义*/
#define uint unsigned int
uchar a;
void delay(uint ms)	   /*定义延迟函数*/
{
  uchar i,j;
  for(i=ms;i>0;i--)
    for(j=110;j>0;j--);		  /*循环*/
}
void main()						  /*主函数*/
{
  a=0x01;
  while(1)
  {
	P1=~a;
	delay(200);							  /*调用延迟函数*/
	a=a<<1;
	if(a==0x00)
	a=0x01;
   }
}