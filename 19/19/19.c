/*����ת���ַ�*/
#include<stdio.h>
int main()
{
	printf("���������֣�");
	int a, b, x, y, z;
	int m;
	char ch;
	scanf_s("%d%d", &a, &b);
	scanf_s("%d%d%d", &x, &y, &z);
	scanf_s("%d %c", &m, &ch);                                                  //�ô�%d��%c֮����Ҫ�ո���ʶ������m��ch��ֵʱ����֮��Ŀո�
	printf("a=%d,b=%d,\nx=%d,y=%d,z=%d,\nm=%d,ch=%c\n", a, b, x, y, z, m, ch);
	system("pause");
	return 0;
}