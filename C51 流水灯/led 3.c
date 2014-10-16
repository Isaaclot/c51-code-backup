#include <reg51.h>	  /*定义51功能寄存器*/

#define uchar unsigned char	  /*定义参数*/
#define uint unsigned int
uchar t;
uchar *p=&led[0];
void delay(uint ms)		   /*定义延迟函数*/
{
  uchar i,j;
  for(i=ms;i>0;i--)
    for(j=110;j>0;j--);
}
void main()				 /*主函数*/
{
  while(1)
  {
  for(t=0; ;t++)
  {	if(t==8)
    t=0;
    P1=*(p+t);
	delay(200);
	P1=0xff;
	delay(200);
  }
  }
}