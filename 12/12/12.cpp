/*���ú������*/
#include<stdio.h>
#include<stdlib.h>
int calculate_sum(int start, int end) {                   //���庯��calculate_sum������ֵΪ���ͱ�����ֵ��start��endΪ�������ͱ�����Ҫ�������룬�����start��ʼend����
	int ans = 0;                                          //����һ�����ͱ���ans�ĳ�ʼֵΪ0
	int i;                                                //����һ�����ͱ���i
	for (i = start;i <= end;i++) {                        //����ѭ����䣺i��ֵ��Ϊstart��ֵ��������iС�ڵ���end�������£�i��ֵÿ��ѭ����1
		ans += i;                                         //ѭ�����������ݣ��µ�ans��ֵ��Ϊ�ɵ�ans��ֵ���ϸ�ѭ��ʱi��ֵ�ĺ͵�ֵ
	}
	return ans;                                           //�������ֵΪ���յ�ans��ֵ
}
int main()                                                //�������main()��ʼ
{
	int a, b, c, d, e, f;                                 //����6�����ͱ���a��b��c��d��e��f
	scanf_s("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);      //a��b��c��d��e��f��ֵ��Ҫ���������
	int ans1 = calculate_sum(a, b);                       //����һ�����ͱ���ans1��ֵ��Ϊcalculate_sum(a, b)�����ֵ
	int ans2 = calculate_sum(c, d);                       //����һ�����ͱ���ans2��ֵ��Ϊcalculate_sum(c, d)�����ֵ
	int ans3 = calculate_sum(e, f);                       //����һ�����ͱ���ans3��ֵ��Ϊcalculate_sum(e, f)�����ֵ
	printf("����ֱ�Ϊ%d��%d��%d\n", ans1, ans2, ans3);   //������
	system("pause");                                      //��ֹ����
	return 0;                                             //��������
}