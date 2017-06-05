
#include <reg52.h>
#include <intrins.h>
#define uchar unsigned char
#define uint unsigned int
sbit dula=P2^6;
sbit wela=P2^7;
uchar code table[]={0xc0,0xf9,0xa4,0xb0,//数码显示依次为：0、1、2、3
     0x99,0x92,0x82,0xf8,              //              4、5、6、7
     0x80,0x90,0x88,0x83,             //      8、9、a、b
     0xc6,0xa1,0x86,0x8e,0xff       //              c、d、e、f、全暗
     };
uchar num,temp;
void delay(uint z)   //延时子程序
{
uint x,y;
for(x=z;x>0;x--)
  for(y=110;y>0;y--);
}
uchar keyscan()    //键盘扫描程序，返回uchar型参数
{
uchar i;
for(i=0;i<4;i++)
{
  P3=_crol_(0xfe,i);
  temp=P3;
  temp=temp&0xf0;
  while(temp!=0xf0)
  {
   delay(5);   //延时消抖
   temp=P3;
   temp=temp&0xf0;
   while(temp!=0xf0)
   {
    temp=P3;
    switch(temp)
    {
     case 0xee:num=1;
      break;
     case 0xde:num=2;
      break;
     case 0xbe:num=3;
      break;
     case 0x7e:num=4;
      break;
     case 0xed:num=5;
      break;
     case 0xdd:num=6;
      break;
     case 0xbd:num=7;
      break;
     case 0x7d:num=8;
      break;
     case 0xeb:num=9;
      break;
     case 0xdb:num=10;
      break;
     case 0xbb:num=11;
      break;
     case 0x7b:num=12;
      break;
     case 0xe7:num=13;
      break;
     case 0xd7:num=14;
      break;
     case 0xb7:num=15;
      break;
     case 0x77:num=16;
      break;
    }
    while(temp!=0xf0)  //等待按键释放
    {
     temp=P3;
     temp=temp&0xf0;
    }
   }
  }
}
return num;
}
void display(uchar aa)
{
dula=1;
P0=table[aa-1];
dula=0;
}
main()
{
num=17;
dula=1;
P0=0;
dula=0;
wela=1;
P0=0x20;
wela=0;

while(1)
{
  display(keyscan());
}
}
