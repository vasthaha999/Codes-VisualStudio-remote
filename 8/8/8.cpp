/*
 �������ƣ�8
 �����ܣ����ú�����(n-1)��n�η�
*/
#include<stdio.h>
#include<stdlib.h>
int pow(int x, int m);                //����pow��������Ҫ�õ�2������
int main()                            //�������main()��ʼ
{
	int n, result;                    //2����������n��result
	scanf_s("%d", &n);                //nҪ���������
	result = pow(n, n--);             //result����ֵΪ����n��n-1����pow���������ֵ
	printf("result=%d\n", result);    //������
	system("pause");                  //��ֹ����
	return 0;                         //��������
}
int pow(int x, int m)                 //����pow����
{
	int p;                            //��Ҫ�õ�һ�����ͱ���p
	for (p = 1;m > 0;m--)             //����forѭ�����ִ��
		p = p * x;                    //p��ֵΪp��x�ĳ˻�
	return p;                         //����ֵΪp
}