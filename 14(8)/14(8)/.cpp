/*�����������*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>                                 //����string.h��
int main()                                         //�������main()��ʼ
{
	char c[200], c1;                               //�����ַ�c��c1
	int i, j, k;                                   //�������ͱ���i��j��k
	printf("Enter a string:");                     //��ʾ�����ַ���
	scanf_s("%s", c);                              //c��Ϊ���ַ���
	k = strlen(c);                                 //k��ֵΪc�ַ����ĳ���
	for (i = 0, j = k - 1;i < k / 2;i++, j--) {    //����ѭ����䣺i��ʼֵΪ0��j��ֵ��Ϊk-1��ֵ����iС��k/2ʱ��ÿ��ѭ����i��1��j��1
		c1 = c[i];                                 //��c�еĸ���ĸ����
		c[i] = c[j];
		c[j] = c1;
	}
	printf("%s\n", c);                             //����������c
	system("pause");                               //��ֹ����
	return 0;                                      //��������
}