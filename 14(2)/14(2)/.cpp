/*将1个4*4的数组逆时针旋转90度后输出*/
#include<stdio.h>
#include<stdlib.h>
int main()                             //主程序从main()开始
{
	int a[4][4], b[4][4], i, j;        //该主程序需要用到2个数组a、b；2个整型变量i、j（i和j为确定数组输入顺序所用）
	printf("input 16 numbers:");       //提示输入16个数字
	for (i = 0;i < 4;i++) {            //条件循环语句：i初始值为0，对于i小于4的情况下循环，每次循环i加1
		for (j = 0;j < 4;j++) {        //条件循环语句：j初始值为0，对于j小于4的情况下循环，每次循环j加1
			scanf_s("%d", &a[i][j]);   //输入的16个数字按顺序存入a数组内
			b[3 - j][i] = a[i][j];     //a、b数组中数字的对应的位置关系
		}
	}
	printf("array b:\n");              //输出b数组
	for (i = 0;i < 4;i++) {            //用条件循环语句确定b数组的输出形式
		for (j = 0;j < 4;j++) {
			printf("%6d", b[i][j]);
		}
		printf("\n");                  //每次i循环结束时更换下一行
	}
	system("pause");                   //中止程序
	return 0;                          //结束程序
}