/*
 程序名称：7
 程序功能：利用函数（在调用函数内部）实现两个整数的交换
*/
#include<stdio.h>
#include<stdlib.h>
void swap(int x, int y);                 //不输出返回值地调用swap函数
int main()                               //主程序从main()开始
{
	int a, b;                            //需要用到a、b两个数（不包括swap函数内部）
	scanf_s("%d%d", & a, & b);           //a和b需要从外界输入
	printf("调用函数之前：\n");
	printf("a=%d,b=%d\n", a, b);         //对调用函数之前的数据进行确定
	swap(a, b);                          //利用swap函数对于a、b进行交换
	printf("调用函数之后：\n");                        
	printf("a=%d,b=%d\n", a, b);         //输出调用函数之后的的a、b
	system("pause");                     //终止程序
	return 0;                            //结束程序
}
void swap(int x, int y)                  //定义swap函数
{
	int t;                               //函数内部需要用到变量t
	t = x;                               //x赋值给t
	x = y;                               //y赋值给x
	y = t;                               //y赋值给t
	printf("调用函数内部：\n");
	printf("x=%d,y=%d\n", x, y);         //输出
}