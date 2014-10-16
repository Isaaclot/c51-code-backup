#include <tube.h>
#include <reg52.h>
#include <delay.h>


sbit dula=P2^6;			 /*����U1�������������*/
sbit wela=P2^7;			 /*����U2�������������*/

uchar smg1[16]={
	0x3f,0x06,0x5b,0x4f,
	0x66,0x6d,0x7d,0x07,
	0x7f,0x5e6f,0x77,0x7c,
	0x39,0x5e,0x79,0x71
	};					 /*����ܱ��붨��*/

uchar smg2[]={
 	0xbf,0x86,0xdb,0xcf,
 	0xe6,0xed,0xfd,0x87,
 	0xff,0xef
 	};				    /*�����С������ܱ��붨��*/


void display(uchar mz,uchar fz,uchar sz)	 /*�������ʾ��ʱ���롱*/
{
   uchar s1,s2,f1,f2,m1,m2;	  /*�����������6λ����*/
   s1=sz/10;				  /*���ʱ������ʾ*/
   s2=sz%10;
   f1=fz/10;
   f2=fz%10;
   m1=mz/10;
   m2=mz%10;
   
   dula=1;				  /*��U1������*/
   P0=smg1[s1];			 /*����������������ѡ�ź�*/
   dula=0;				 /*�ر�U1������*/
   P0=0xff;				  /*����λѡ����ǰ�ر�������ʾ����ֹ��λѡ����ʱ*/
   wela=1;				  /*��U2������*/
   P0=0xfe;				  /*����λ�ź�*/
   wela=0;				  /*�ر�U2������*/
   delay10ms(5);			   /*�ӳ�*/
   
   dula=1;
   P0=smg2[s2];		     /*���������������λѡ�ź�*/
   dula=0;
   P0=0xff;
   wela=1;
   P0=0xfd;
   wela=0;
   delay10ms(5);
   
   dula=1;
   P0=smg1[f1];			 /*���������������λѡ�ź�*/
   dula=0;
   P0=0xff;
   wela=1;
   P0=0xfb;
   wela=0;
   delay10ms(5);
   
   dula=1;
   P0=smg2[f2];			 /*���������������λѡ�ź�*/
   dula=0;
   P0=0xff;
   wela=1;
   P0=0xf7;
   wela=0;
   delay10ms(5);
   
   dula=1;
   P0=smg1[m1];			  /*���������������λѡ�ź�*/
   dula=0;

   P0=0xff;
   wela=1;
   P0=0xef;
   wela=0;
   delay10ms(5);
   
   dula=1;
   P0=smg1[m2];			 /*���������������λѡ�ź�*/
   dula=0;

   P0=0xff;
   wela=1;
   P0=0xdf;
   wela=0;
   delay10ms(5);
}
