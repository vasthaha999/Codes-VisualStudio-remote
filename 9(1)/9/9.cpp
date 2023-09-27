/*判断数字的奇偶*/
#include<stdio.h>
#include<stdlib.h>
int main()                       //程序从main()开始
{
	int a;                       //程序需要用到一个变量设为a
	scanf_s("%d", &a);           //a的值需要从外界输入
	if (a % 2 == 0)              //条件句：如果a除以2的余数为0
		printf("该数为偶数\n");  //输出：该数为偶数
	else                         //否则
		printf("该数为奇数\n");  //输出：该数为奇数
	system("pause");             //终止程序
	return 0;                    //结束程序
}