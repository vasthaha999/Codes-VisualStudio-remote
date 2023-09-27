/*将华氏度转化为摄氏度*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a, b;
	printf("请输入华氏度：");
	scanf_s("%f", &a);
	b = 5*(a - 32)/ 9;
	printf("摄氏度为：%f", b);
	return 0;
}