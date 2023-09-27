/*计算从1加到n的结果*/
#include<stdio.h>
#include<stdlib.h>
int main()                   //程序从main()开始
{
	int n;                   //程序涉及到的变量之一可设为n
	scanf_s("%d", &n);       //n需要输入
	int i;                   //程序涉及到的变量之一可设为i（i用来确定下面for循环进行的次数）
	int a = 0;               //程序涉及到的变量之一可设为a（a用来进行累加运算）
	for (i = 1;i <= n;i++)   //for循环设定：i初始值为1；当满足i小于等于n时循环进行；每次循环结束i加1
		a = a + i;           //循环主要内容：新的a赋值为原来的a加循环的i（即累加步骤）（也可以写成a+=i）
	printf("结果为%d\n", a); //输出计算结果
	system("pause");         //终止程序
	return 0;                //结束程序
}