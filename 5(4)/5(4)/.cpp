/*��2�����������Լ��*/
#include<stdio.h>
#include<stdlib.h>
int main()                               //��main()��ʼ
{
	int a, b, m;                         //���漰3����
	scanf_s("%d%d", &a, &b);             //����2����֪������ֵ��a��b
	m = a % b;                           //m��ֵΪa��b������
	while (m != 0)                       //������䣺��m������0ʱ
	{
		a = b;                           //b��ֵ��a
		b = m;                           //m��ֵ��b
		m = a % b;                       //�µ�a����b��������ֵ��m
	}                                    //while��ʼ�Ĳ��費���ظ������һ��ѭ�����mΪ0Ϊֹ
	printf("���Լ��Ϊ%d\n", b);
	system("pause");                     //��ֹ����
	return 0;                            //��������
}