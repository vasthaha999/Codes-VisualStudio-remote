/*
 �������ƣ�7
 �����ܣ����ú������ڵ��ú����ڲ���ʵ�����������Ľ���
*/
#include<stdio.h>
#include<stdlib.h>
void swap(int x, int y);                 //���������ֵ�ص���swap����
int main()                               //�������main()��ʼ
{
	int a, b;                            //��Ҫ�õ�a��b��������������swap�����ڲ���
	scanf_s("%d%d", & a, & b);           //a��b��Ҫ���������
	printf("���ú���֮ǰ��\n");
	printf("a=%d,b=%d\n", a, b);         //�Ե��ú���֮ǰ�����ݽ���ȷ��
	swap(a, b);                          //����swap��������a��b���н���
	printf("���ú���֮��\n");                        
	printf("a=%d,b=%d\n", a, b);         //������ú���֮��ĵ�a��b
	system("pause");                     //��ֹ����
	return 0;                            //��������
}
void swap(int x, int y)                  //����swap����
{
	int t;                               //�����ڲ���Ҫ�õ�����t
	t = x;                               //x��ֵ��t
	x = y;                               //y��ֵ��x
	y = t;                               //y��ֵ��t
	printf("���ú����ڲ���\n");
	printf("x=%d,y=%d\n", x, y);         //���
}