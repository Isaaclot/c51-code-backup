#include <reg51.h>		  /*����51���ܵļĴ���*/
#define uchar unsigned char	  /*�궨��*/
#define uint unsigned int
uchar a;
void delay(uint ms)	   /*�����ӳٺ���*/
{
  uchar i,j;
  for(i=ms;i>0;i--)
    for(j=110;j>0;j--);		  /*ѭ��*/
}
void main()						  /*������*/
{
  a=0x01;
  while(1)
  {
	P1=~a;
	delay(200);							  /*�����ӳٺ���*/
	a=a<<1;
	if(a==0x00)
	a=0x01;
   }
}