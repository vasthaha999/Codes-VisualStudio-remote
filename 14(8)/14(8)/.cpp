/*反向输出程序*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>                                 //调用string.h库
int main()                                         //主程序从main()开始
{
	char c[200], c1;                               //定义字符c、c1
	int i, j, k;                                   //定义整型变量i、j、k
	printf("Enter a string:");                     //提示输入字符串
	scanf_s("%s", c);                              //c赋为该字符串
	k = strlen(c);                                 //k赋值为c字符串的长度
	for (i = 0, j = k - 1;i < k / 2;i++, j--) {    //条件循环语句：i初始值为0，j的值赋为k-1的值；当i小于k/2时；每次循环后i加1、j减1
		c1 = c[i];                                 //将c中的各字母交换
		c[i] = c[j];
		c[j] = c1;
	}
	printf("%s\n", c);                             //输出交换后的c
	system("pause");                               //中止程序
	return 0;                                      //结束程序
}