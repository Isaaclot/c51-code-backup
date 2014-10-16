#include <tube.h>
#include <reg52.h>
#include <delay.h>


sbit dula=P2^6;			 /*申明U1锁存器的锁存端*/
sbit wela=P2^7;			 /*申明U2锁存器的锁存端*/

uchar smg1[16]={
	0x3f,0x06,0x5b,0x4f,
	0x66,0x6d,0x7d,0x07,
	0x7f,0x5e6f,0x77,0x7c,
	0x39,0x5e,0x79,0x71
	};					 /*数码管编码定义*/

uchar smg2[]={
 	0xbf,0x86,0xdb,0xcf,
 	0xe6,0xed,0xfd,0x87,
 	0xff,0xef
 	};				    /*后面带小数点码管编码定义*/


void display(uchar mz,uchar fz,uchar sz)	 /*数码管显示“时分秒”*/
{
   uchar s1,s2,f1,f2,m1,m2;	  /*定义数码管上6位数字*/
   s1=sz/10;				  /*拆分时分秒显示*/
   s2=sz%10;
   f1=fz/10;
   f2=fz%10;
   m1=mz/10;
   m2=mz%10;
   
   dula=1;				  /*打开U1锁存器*/
   P0=smg1[s1];			 /*调用数组编码送入段选信号*/
   dula=0;				 /*关闭U1锁存器*/
   P0=0xff;				  /*送入位选数据前关闭所有显示，防止打开位选锁存时*/
   wela=1;				  /*打开U2锁存器*/
   P0=0xfe;				  /*送入位信号*/
   wela=0;				  /*关闭U2锁存器*/
   delay10ms(5);			   /*延迟*/
   
   dula=1;
   P0=smg2[s2];		     /*调用数组编码送入位选信号*/
   dula=0;
   P0=0xff;
   wela=1;
   P0=0xfd;
   wela=0;
   delay10ms(5);
   
   dula=1;
   P0=smg1[f1];			 /*调用数组编码送入位选信号*/
   dula=0;
   P0=0xff;
   wela=1;
   P0=0xfb;
   wela=0;
   delay10ms(5);
   
   dula=1;
   P0=smg2[f2];			 /*调用数组编码送入位选信号*/
   dula=0;
   P0=0xff;
   wela=1;
   P0=0xf7;
   wela=0;
   delay10ms(5);
   
   dula=1;
   P0=smg1[m1];			  /*调用数组编码送入位选信号*/
   dula=0;

   P0=0xff;
   wela=1;
   P0=0xef;
   wela=0;
   delay10ms(5);
   
   dula=1;
   P0=smg1[m2];			 /*调用数组编码送入位选信号*/
   dula=0;

   P0=0xff;
   wela=1;
   P0=0xdf;
   wela=0;
   delay10ms(5);
}
