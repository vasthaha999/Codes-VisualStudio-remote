/*
 �������ƣ�6
 �����ܣ������������ֵ
*/
#include<stdio.h>
#include<stdlib.h>
int max(int x, int y);                      //���������µ���max��������Ҫ���ж��壩
int main()                                  //�������main()��ʼ
{
	int a, b, c, d, m;                      //����������Ҫ�õ�5�����֣������������ڲ���
	scanf_s("%d%d%d%d", &a, &b, &c, &d);    //a��b��c��d��Ҫ���ⲿ����
	m = max(max(max(a, b), c), d);          //�����ֵ����Ҫ���裨����max������
	printf("���ֵΪ%d\n", m);              //������ֵ
	system("pause");                        //��ͣ����
	return 0;                               //��ֹ����
}
int max(int x, int y)                       //����max������ж���
{
	int max;                                //max�������������ıȽ�
	if (x > y)                              //��������������max����ִ��
		max = x;
	else
		max = y;
	return max;
}