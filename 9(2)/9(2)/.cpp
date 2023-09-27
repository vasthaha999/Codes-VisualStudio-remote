/*判断两个数是否相等*/
#include<stdio.h>
#include<stdlib.h>
int main()                        //程序从main()开始
{
	int a, b;                     //该程序需要用到2个变量a、b
	scanf_s("%d%d", &a, &b);      //a和b的值需要输入
	if (a == b)                   //条件语句：如果a和b相等
		printf("二者相等\n");     //输出：二者相等
	else                          //其他情况
		printf("二者不相等\n");   //输出：二者不相等
	system("pause");              //终止程序
	return 0;                     //结束程序
}