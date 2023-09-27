/*测试转义字符*/
#include<stdio.h>
int main()
{
	printf("请输入数字：");
	int a, b, x, y, z;
	int m;
	char ch;
	scanf_s("%d%d", &a, &b);
	scanf_s("%d%d%d", &x, &y, &z);
	scanf_s("%d %c", &m, &ch);                                                  //该处%d和%c之间需要空格以识别输入m和ch的值时二者之间的空格
	printf("a=%d,b=%d,\nx=%d,y=%d,z=%d,\nm=%d,ch=%c\n", a, b, x, y, z, m, ch);
	system("pause");
	return 0;
}