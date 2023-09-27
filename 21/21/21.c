/*getchar()函数的应用*/
#include<stdio.h>          //便于后续标准输入输出函数的使用
#include<stdlib.h>
int main()                 //主程序从main()开始
{
	char ch;               //定义字符变量ch
	ch = getchar();        //将ch赋值为从键盘输入的字符
	putchar(ch);           //将ch的值输出
	printf("%d\n", ch);    //输出A的ASCII十进制打印字符
	system("pause");       //中止程序
	return 0;              //结束程序
}

