/*�����������ĳ˻�*/
#include <stdio.h>
#include <stdlib.h>
int product(int, int);//�������潫Ҫʹ�ú���product()
int main(void)
{
	int x, y, s;      //��������ʹ�õı���x,y,s�������͵�
	scanf("%d%d", &x, &y);//�Ӽ�����������������x,y
	s = product(x, y);//����product()���м��㣬����������s
	printf("The mul is:%d", s);//���s��ֵ
	system("pause");  //��ͣ
	return 0;
}
int product(int a, int b)//����product()�Ķ���
{
	int mul;             //����һ�����ͱ���mul�����ڴ�Ż�
	mul = a*b;           //��a��b��˻��������������mul
	return mul;          //����mul��ֵ��������
}