/*�ж��������Ƿ����*/
#include<stdio.h>
#include<stdlib.h>
int main()                        //�����main()��ʼ
{
	int a, b;                     //�ó�����Ҫ�õ�2������a��b
	scanf_s("%d%d", &a, &b);      //a��b��ֵ��Ҫ����
	if (a == b)                   //������䣺���a��b���
		printf("�������\n");     //������������
	else                          //�������
		printf("���߲����\n");   //��������߲����
	system("pause");              //��ֹ����
	return 0;                     //��������
}