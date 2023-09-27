/*输出已输入两个数的和、差、积、商*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("请输入两个数：");
	float a, b;
	scanf_s("%f%f", &a, &b);
	printf("和为：%3.2f\n", a + b);
	printf("差为：%3.2f\n", a - b);
	printf("积为：%3.2f\n", a * b);
	printf("商为：%3.2f\n", a / b);
	system("pause");
	return 0;
}