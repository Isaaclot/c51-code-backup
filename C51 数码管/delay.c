//#include <reg52.h>
#include <delay.h>

void delay1(uint ms)	   /*ÐÎ²ÎÑÓ³Ùº¯Êý*/
{
  uchar i,j;
  for(i=ms;i>0;i--)
    for(j=110;j>0;j--);
}