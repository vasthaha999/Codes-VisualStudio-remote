/*�žų˷���*/
#include<stdio.h>
#include<stdlib.h>
int main()                                           //�������main()��ʼ
{
	int i, j, result;                                //�ó�����Ҫ�õ����������ֱ���Ϊi��j��result
	for (i = 1;i < 10;i++) {                         //����ѭ����䣺i��ʼֵΪ1��iС��10�����£�ÿ��ѭ��i��1
		for (j = 1;j < 10;j++) {                     //����ѭ����䣺j��ʼֵΪ1��jС��10�����£�ÿ��ѭ��j��1
			result = i * j;                          //ÿ��ѭ����result��ֵ��Ϊi��j�ĳ˻�
			printf(" % d*%d=%-3d", i, j, result);    //���������-3d��ʾ����룬ռ3λ��
		}
		printf("\n");                                //ÿ1��i��ֵ����
	}
	system("pause");                                 //��ֹ����
	return 0;                                        //��������
}