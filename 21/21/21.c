/*getchar()������Ӧ��*/
#include<stdio.h>          //���ں�����׼�������������ʹ��
#include<stdlib.h>
int main()                 //�������main()��ʼ
{
	char ch;               //�����ַ�����ch
	ch = getchar();        //��ch��ֵΪ�Ӽ���������ַ�
	putchar(ch);           //��ch��ֵ���
	printf("%d\n", ch);    //���A��ASCIIʮ���ƴ�ӡ�ַ�
	system("pause");       //��ֹ����
	return 0;              //��������
}

