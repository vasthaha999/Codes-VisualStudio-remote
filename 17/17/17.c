/*区分i++与++i*/
#include<stdio.h>
int main()                                    //主程序从main()开始
{
	int i = 5;                                //定义变量i的值为5
	int s,S;                                  //定义变量s，S
	s = (++i) + (++i) + (++i);                //运算时由于自增运算符优先级更高，故先自增运算i自增3次为5+3=8，后三个8相加
	S = (i++) + (i++) + (i++);                //运算原理同上
	printf("s和S分别为：%d和%d\n", s,S);      //输出s和S的值
	system("pause");
	return 0;
}