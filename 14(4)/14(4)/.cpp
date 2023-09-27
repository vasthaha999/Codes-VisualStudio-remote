/*判断101到200之间有多少素数，并输出所有素数*/
#include<stdio.h>
#include<stdlib.h>
#include<cmath>                          //调用cmath库以识别sqrt（开方）运算
int main()                               //主程序从main()开始
{
	int m, i, k, h = 0, leap = 1;        //主程序需要使用整型变量m、i、k、h且四者皆赋值为0，整型变量leap且赋值为1
	printf("\n");                        //换行输出
	for (m = 101;m <= 200;m++) {         //条件循环语句：m初始值为101，对于m小于等于200，每次循环m加1
		k = sqrt(m + 1);                 //k赋值为(m+1)的平方根
		for(i=2;i<=k;i++)                //条件循环语句：i初始值为2，对于i小于等于k时，每次循环i加1
			if(m%i==0)                   //条件语句：m除以i得到的余数为0
			{
				leap = 0;break;          //此时leap赋值为0，并跳出循环（break）
			}
			if(leap)                     //内循环结束后，leap依然为1，则m是素数
			{
				printf("%-4d", m);h++;   //输出m且左端对齐
				if (h % 10 == 0)         //条件语句：如果h能被10整除
					printf("\n");        //换行输出
			}
		leap = 1;                        //跳出条件循环语句for(i=2;i<=k;i++) 后leap赋值为1
	}
	printf("\nThe total is %d", h);      //输出素数的总个数
	system("pause");                     //中止程序
	return 0;                            //结束程序
}