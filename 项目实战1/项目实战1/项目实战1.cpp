//程序框架 头文件
#include<stdio.h>//库 重复不停的发送消息的过程
#include<Windows.h>//库 API接口 （复制、粘贴、发送）消息机制SendMessage
int main() {//主函数 入口
	//第一步 轰炸的消息次数
	int Num = 100;
	//第二步 轰炸的对象/目标 函数（参数要求：2个）
	FindWindow(NULL,"Lionel Messi");//从桌面链接QQ窗口 NULL：空值
	//第五步 重复粘贴和发送执行100次 循环语句：while for do-while
	while (Num>0)//只要成立100次就执行100次
	{
		//第三步 粘贴消息100次
		SendMessage(FindWindow(NULL, "Lionel Messi"),WM_PASTE,NULL,NULL);
		//第四步 发送消息100次
		SendMessage(FindWindow(NULL, "Lionel Messi"),WM_KEYDOWN,VK_RETURN,NULL);//虚拟键
		Num--;//自减1

	}






	return 0;//返回 出口
}