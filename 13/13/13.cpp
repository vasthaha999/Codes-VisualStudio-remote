/*½á¹¹Ìå*/
#include<stdio.h>
#include<stdlib.h>
struct student {
	int num;
	int score;
};
int main()
{
	struct student a;
	a.num = 1;
	a.score = 100;
	struct student b;
	b.num = 2;
	b.num = 95;
	struct student x[10];
	x[0] = a;
	x[1] = b;
	printf("%d %d\n", x[0].num, x[0].score);
	system("pause");
	return 0;
}