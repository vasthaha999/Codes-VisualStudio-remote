/*���ų�����Ӧ��*/
#define PRICE 30                   //������ų���PRICE��ֵΪ30
#include<stdio.h>
#include<stdlib.h>
int main()                         //�����main()��ʼ
{
	int num, total;                //������Ҫ�õ�num��total����
	num = 10;                      //����num��ֵΪ10
	total = num * PRICE;           //����total��ֵΪnum��PRICE�ĳ˻�
	printf("total=%d\n", total);   //���total��ֵ
	system("pause");               //��ֹ����
	return 0;                      //��������
}