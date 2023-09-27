/*利用函数求和*/
#include<stdio.h>
#include<stdlib.h>
int calculate_sum(int start, int end) {                   //定义函数calculate_sum，返回值为整型变量的值，start和end为两个整型变量需要后续输入，计算从start开始end结束
	int ans = 0;                                          //定义一个整型变量ans的初始值为0
	int i;                                                //定义一个整型变量i
	for (i = start;i <= end;i++) {                        //条件循环语句：i的值赋为start的值，在满足i小于等于end的条件下，i的值每次循环加1
		ans += i;                                         //循环的主体内容：新的ans的值赋为旧的ans的值加上该循环时i的值的和的值
	}
	return ans;                                           //函数输出值为最终的ans的值
}
int main()                                                //主程序从main()开始
{
	int a, b, c, d, e, f;                                 //定义6个整型变量a、b、c、d、e、f
	scanf_s("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);      //a、b、c、d、e、f的值需要从外界输入
	int ans1 = calculate_sum(a, b);                       //定义一个整型变量ans1的值赋为calculate_sum(a, b)的输出值
	int ans2 = calculate_sum(c, d);                       //定义一个整型变量ans2的值赋为calculate_sum(c, d)的输出值
	int ans3 = calculate_sum(e, f);                       //定义一个整型变量ans3的值赋为calculate_sum(e, f)的输出值
	printf("结果分别为%d、%d、%d\n", ans1, ans2, ans3);   //输出结果
	system("pause");                                      //终止程序
	return 0;                                             //结束程序
}