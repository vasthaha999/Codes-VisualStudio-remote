/*�ж����ֵ���ż*/
#include<stdio.h>
#include<stdlib.h>
int main()                       //�����main()��ʼ
{
	int a;                       //������Ҫ�õ�һ��������Ϊa
	scanf_s("%d", &a);           //a��ֵ��Ҫ���������
	if (a % 2 == 0)              //�����䣺���a����2������Ϊ0
		printf("����Ϊż��\n");  //���������Ϊż��
	else                         //����
		printf("����Ϊ����\n");  //���������Ϊ����
	system("pause");             //��ֹ����
	return 0;                    //��������
}