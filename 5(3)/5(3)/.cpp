/*用函数调用的方法求2个整数的最大公约数*/
#include<stdio.h>
#include<stdlib.h>
int gcd(int x, int y)                      //先定义一个函数gcd（做准备工作），其中需要输入2个整数x和y
{
	int r;                                 //引用一个整数r（为函数gcd内部的变量）
	r = x % y;                             //x除以y的余数赋值给r
	while (r != 0)                         //循环条件语句当r不等于0时
	{
		x = y;                             //y赋值给x
		y = r;                             //得到的r赋值给y
		r = x % y;                         //新的x除以新的y得到的余数赋为新的r的值
	}
	return y;                              //最终输出最后一次循环之后r等于0时的y的值
}
int gcd(int, int);                         //确定gcd的调用形式即需输入2个整数（存疑）
int main()                                 //正式的程序从main()开始（前面的为准备工作）
{
	int a, b, m;                           //整个程序中需要用到3个整数（不包括gcd函数内部的“r”）
	scanf_s("%d%d", &a, &b);               //a、b为外界输入的整数值
	m = gcd(a, b);                        //运行函数：a与b
	printf("最大公约数为%d\n", m);         //输出最大公约数
	system("pause");
	return 0;                              //终止程序
}