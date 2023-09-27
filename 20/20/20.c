/*putchar()函数测试*/
#include<stdio.h>         //便于调用putchar()函数
#include<stdlib.h>
int main()                //主程序从main()开始
{
	char  c;              //定义字符串型变量c
	c = 'B';              //字符串型变量c的值为B
	putchar(c);           //输出字符串型变量c的值，putchar()函数的作用等同于printf("%c",ch)
	putchar('\x42');      //输出16进制的42（下同）
	putchar(0x42);
	system("pause");      //中止程序
	return 0;             //结束程序
}