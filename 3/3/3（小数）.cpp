/*求两个小数相除的商*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x, y, s;         //声明后面使用的变量是浮点型的
	scanf("%f%f", &x, &y);
	s = x / y;
	printf("商是：%f", s);
	system("pause");
	return 0;
}