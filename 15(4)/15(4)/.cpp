/*����������������ĺ͡��������*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("��������������");
	float a, b;
	scanf_s("%f%f", &a, &b);
	printf("��Ϊ��%3.2f\n", a + b);
	printf("��Ϊ��%3.2f\n", a - b);
	printf("��Ϊ��%3.2f\n", a * b);
	printf("��Ϊ��%3.2f\n", a / b);
	system("pause");
	return 0;
}