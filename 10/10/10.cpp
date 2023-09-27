/*符号常量的应用*/
#define PRICE 30                   //定义符号常量PRICE的值为30
#include<stdio.h>
#include<stdlib.h>
int main()                         //程序从main()开始
{
	int num, total;                //程序需要用到num、total变量
	num = 10;                      //变量num赋值为10
	total = num * PRICE;           //变量total赋值为num和PRICE的乘积
	printf("total=%d\n", total);   //输出total的值
	system("pause");               //终止程序
	return 0;                      //结束程序
}