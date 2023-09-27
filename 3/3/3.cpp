/*求两个整数相除的商*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y, s;           //声明后面使用的变量是整型的
	scanf("%d%d", &x, &y); //从键盘上输入两个整数x，y
	s = x / y;             //计算x和y相处的商，并用s接收
	printf("商是：%d", s); //输出商s的值
	system("pause");       //暂停
	return 0;
}