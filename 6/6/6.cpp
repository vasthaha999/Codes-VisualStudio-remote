/*
 程序名称：6
 程序功能：求整数的最大值
*/
#include<stdio.h>
#include<stdlib.h>
int max(int x, int y);                      //整数形势下调用max函数（需要进行定义）
int main()                                  //主程序从main()开始
{
	int a, b, c, d, m;                      //该主程序需要用到5个数字（不包括函数内部）
	scanf_s("%d%d%d%d", &a, &b, &c, &d);    //a、b、c、d需要从外部输入
	m = max(max(max(a, b), c), d);          //求最大值的主要步骤（利用max函数）
	printf("最大值为%d\n", m);              //输出最大值
	system("pause");                        //暂停程序
	return 0;                               //终止程序
}
int max(int x, int y)                       //对于max程序进行定义
{
	int max;                                //max程序中是整数的比较
	if (x > y)                              //利用条件语句对于max函数执行
		max = x;
	else
		max = y;
	return max;
}