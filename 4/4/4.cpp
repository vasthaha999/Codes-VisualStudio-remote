/*��������n�Ľ׳�*/
#include<stdio.h>
#include<stdlib.h>
int main()                     //��ʼ������
{
	int i, n, p = 1;           //�������ͱ���i��n��p������p��ֵΪ1
	scanf_s("%d", &n);         //��ñ���n��ֵ
	for (i = 1;i <= n;i++)     //forѭ����䣺i�ĳ�ʼֵΪ1��i������n������£�ÿ��ѭ����i��ֵ��1
		p = p * i;             //ÿ��ѭ��������Ϊ�µ�p��ֵΪǰһ��p��ֵ��i�ĳ˻�
	printf("�׳�=%d\n", p);    //����׳�
	system("pause");
	return 0;
}