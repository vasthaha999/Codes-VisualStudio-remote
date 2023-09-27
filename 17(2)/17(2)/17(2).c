/*前置和后置运算*/
#include<stdio.h>
int main()                                  //主程序从main()开始
{
	int i, j, m, n;                         //定义四个变量i、j、m、n
	i = 8;                                  //i的值被赋为8
	j = 10;                                 //j的值被赋为10
	m = ++i;                                //m赋值为i前置自增运算的结果
	n = j++;                                //n赋值为j后置自增运算的结果
	printf("%d,%d,%d,%d\n", i, j, m, n);    //输出i、j、m、n的值
	return 0;
}