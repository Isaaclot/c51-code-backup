//#include <reg52.h>
#include <delay.h>

void delay1(uint ms)	   /*�β��ӳٺ���*/
{
  uchar i,j;
  for(i=ms;i>0;i--)
    for(j=110;j>0;j--);
}