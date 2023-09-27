/*九九乘法表*/
#include<stdio.h>
#include<stdlib.h>
int main()                                           //主程序从main()开始
{
	int i, j, result;                                //该程序需要用到三个变量分别设为i、j、result
	for (i = 1;i < 10;i++) {                         //条件循环语句：i初始值为1，i小于10条件下，每次循环i加1
		for (j = 1;j < 10;j++) {                     //条件循环语句：j初始值为1，j小于10条件下，每次循环j加1
			result = i * j;                          //每次循环中result的值赋为i和j的乘积
			printf(" % d*%d=%-3d", i, j, result);    //输出（其中-3d表示左对齐，占3位）
		}
		printf("\n");                                //每1个i的值后换行
	}
	system("pause");                                 //中止程序
	return 0;                                        //结束程序
}