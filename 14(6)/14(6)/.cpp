/*���ֱ�����������*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, a[10][10];
	for (i = 0;i <= 9;i++) {
		a[i][i] = 1;a[i][0] = 1;
	}
	for (i = 2;i <=9;i++) {
		for (j = 1;j <= i - 1;j++) {
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (i = 0;i <= 9;i++) {
		for (j = 0;j <= i;j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}