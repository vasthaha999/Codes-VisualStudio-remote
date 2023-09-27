/*
 程序名称：8
 程序功能：利用函数求(n-1)的n次方
*/
#include<stdio.h>
#include<stdlib.h>
int pow(int x, int m);                //声明pow函数，需要用到2个变量
int main()                            //主程序从main()开始
{
	int n, result;                    //2个整数变量n、result
	scanf_s("%d", &n);                //n要从外界输入
	result = pow(n, n--);             //result被赋值为对于n，n-1调用pow函数的输出值
	printf("result=%d\n", result);    //输出结果
	system("pause");                  //终止函数
	return 0;                         //结束函数
}
int pow(int x, int m)                 //定义pow函数
{
	int p;                            //需要用到一个整型变量p
	for (p = 1;m > 0;m--)             //利用for循环语句执行
		p = p * x;                    //p赋值为p和x的乘积
	return p;                         //返回值为p
}