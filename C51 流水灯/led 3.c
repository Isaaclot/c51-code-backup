#include <reg51.h>	  /*����51���ܼĴ���*/

#define uchar unsigned char	  /*�������*/
#define uint unsigned int
uchar t;
uchar *p=&led[0];
void delay(uint ms)		   /*�����ӳٺ���*/
{
  uchar i,j;
  for(i=ms;i>0;i--)
    for(j=110;j>0;j--);
}
void main()				 /*������*/
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