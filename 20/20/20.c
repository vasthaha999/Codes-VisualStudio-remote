/*putchar()��������*/
#include<stdio.h>         //���ڵ���putchar()����
#include<stdlib.h>
int main()                //�������main()��ʼ
{
	char  c;              //�����ַ����ͱ���c
	c = 'B';              //�ַ����ͱ���c��ֵΪB
	putchar(c);           //����ַ����ͱ���c��ֵ��putchar()���������õ�ͬ��printf("%c",ch)
	putchar('\x42');      //���16���Ƶ�42����ͬ��
	putchar(0x42);
	system("pause");      //��ֹ����
	return 0;             //��������
}