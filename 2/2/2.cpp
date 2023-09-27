/*求两个整数的乘积*/
#include <stdio.h>
#include <stdlib.h>
int product(int, int);//声明后面将要使用函数product()
int main(void)
{
	int x, y, s;      //声名后面使用的变量x,y,s都是整型的
	scanf("%d%d", &x, &y);//从键盘上输入两个整数x,y
	s = product(x, y);//调用product()进行计算，并赋给变量s
	printf("The mul is:%d", s);//输出s的值
	system("pause");  //暂停
	return 0;
}
int product(int a, int b)//函数product()的定义
{
	int mul;             //定义一个整型变量mul，用于存放积
	mul = a*b;           //将a和b求乘积，并将结果赋给mul
	return mul;          //返回mul的值到调用者
}