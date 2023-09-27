/*求4个整数的最大公约数*/
#include<stdio.h>
#include<stdlib.h>
int main()                               //从main()开始
{
	int a, b, c, d, m;                   //确定将涉及5个数
	scanf_s("%d%d%d%d", &a, &b, &c, &d); //输入4个已知整数赋值给a，b，c，d
	m = a % b;                           //m赋值为a和b的余数
	while (m != 0)                       //条件语句：当m不等于0时
	{
		a = b;                           //b赋值给a
		b = m;                           //m赋值给b
		m = a % b;                       //新的a除以b的余数赋值给m
	}                                    //while开始的步骤不断重复至最后一次循环结果m为0为止
	m = b % c;                           //此时b已为最后一次循环的b值，m重新被b除以c的余数赋值
	while (m != 0)                       //条件语句：当m不等于0时
	{
		b = c;                           //c赋值给b 
		c = m;                           //m赋值给c
		m = b % c;                       //新的b除以c的余数赋值给m
	}                                    //同上while语句不断重复至最后一次循环m为0为止
	m = c % d;                           //对于最后一次得到的c与新的d重复上述循环
	while (m != 0)
	{
		c = d;
		d = m;
		m = c % d;
	}                                    //当m等于0时的最后一次循环得到的d即为a，b，c，d的最大公约数
	printf("最大公约数为%d\n", d);       
	system("pause");                     //终止程序
	return 0;                            //结束程序
}