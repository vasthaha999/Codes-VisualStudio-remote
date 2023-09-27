/*求2个整数的最大公约数*/
#include<stdio.h>
#include<stdlib.h>
int main()                               //从main()开始
{
	int a, b, m;                         //将涉及3个数
	scanf_s("%d%d", &a, &b);             //输入2个已知整数赋值给a，b
	m = a % b;                           //m赋值为a和b的余数
	while (m != 0)                       //条件语句：当m不等于0时
	{
		a = b;                           //b赋值给a
		b = m;                           //m赋值给b
		m = a % b;                       //新的a除以b的余数赋值给m
	}                                    //while开始的步骤不断重复至最后一次循环结果m为0为止
	printf("最大公约数为%d\n", b);
	system("pause");                     //终止程序
	return 0;                            //结束程序
}