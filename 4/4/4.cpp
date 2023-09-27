/*求正整数n的阶乘*/
#include<stdio.h>
#include<stdlib.h>
int main()                     //开始主程序
{
	int i, n, p = 1;           //定义整型变量i、n、p，其中p的值为1
	scanf_s("%d", &n);         //获得变量n的值
	for (i = 1;i <= n;i++)     //for循环语句：i的初始值为1，i不大于n的情况下，每次循环后i的值加1
		p = p * i;             //每次循环的内容为新的p赋值为前一个p的值与i的乘积
	printf("阶乘=%d\n", p);    //输出阶乘
	system("pause");
	return 0;
}