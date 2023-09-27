/*用while语句求1加到n的结果*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int i = 0;
	int a = 0;
	while (i <= n) {
		a += i;
		i += 1;
}
	printf("结果为%d\n", a);
	system("pause");
	return 0;
}