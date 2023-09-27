/*读取n（该程序中为10，可自行修改）个成绩，并求其平均分*/
#include<stdio.h>
#include<stdlib.h>
int main()                           //程序从main()开始
{
	int n = 10;                      //定义一个整型变量n的值为10
	int i,a[10];                     //定义一个整型变量i和一个整型数组a，a含有10个整型元素（i用于控制循环的次数）
	for (i = 0;i < n;i++) {          //条件循环语句：i初始值为0，当i小于n时每个循环后i加1
		scanf_s("%d", &a[i]);        //循环主体内容：a数组中的10个值需要从外界输入
	}
	float total = 0;                 //设置浮点型变量total的初始值为0 
	for (i = 0;i < n;i++) {          //条件循环语句：i初始值为0，当i小于n时每个循环后i加1
		total += a[i];               //循环主体内容；每次循环新的total值为旧的total值加上a数列中的对应次序的数字的值
	}
	float avg = total / n;           //定义浮点型变量avg的值为total除以n的值
	printf("平均分为%.2f\n", avg);   //输出平均数的值为avg的值
	system("pause");                 //终止程序
	return 0;                        //结束程序
}