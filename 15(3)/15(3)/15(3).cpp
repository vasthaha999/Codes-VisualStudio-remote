/*�����϶�ת��Ϊ���϶�*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a, b;
	printf("�����뻪�϶ȣ�");
	scanf_s("%f", &a);
	b = 5*(a - 32)/ 9;
	printf("���϶�Ϊ��%f", b);
	return 0;
}