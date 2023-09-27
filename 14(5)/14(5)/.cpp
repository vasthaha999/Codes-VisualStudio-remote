/*定义：一个数如果等于它的所有因数之和，则该数为“完数”。
试找出1000以内的所有“完数”*/
#include<stdio.h>
#include<stdlib.h>
int main()                                //主程序从main()开始
{
	static int k[10];                     //定义一个静态局部变量k（数组长度为10）
	int i, j, n, s;                       //定义整型变量i、j、n、s
	for (j = 2;j < 1000;j++) {            //条件循环语句：j初始值为2，j小于1000，每次循环j加1
		n = -1;                           //n赋值为-1
		s = j;                            //s赋值为j
		for (i = 1;i < j;i++) {           //条件循环语句：i初始值为1，i小于j的情况下，每次循环i加1
			if ((j % i) == 0) {           //条件语句：如果j能被i整除
				n++;                      //n加1
				s = s - i;                //新的s赋值为旧的s减i的差
				k[n] = i;                 //n长度的变量k赋值为i
			}
		}
		if (s == 0) {                     //如果s等于0
			printf("%d是一个完数", j);    //输出j的值为一个完数
			for (i = 0;i < n;i++)         //条件循环语句：i初始值为0，i小于n，每次循环i加1
				printf("%d,", k[i]);      //输出i长度的k
			printf("%d\n", k[n]);         //换行输出n长度的k 
		}
	}
	system("pause");                      //中止程序
	return 0;                             //结束程序  
}