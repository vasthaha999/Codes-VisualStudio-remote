//������ ͷ�ļ�
#include<stdio.h>//�� �ظ���ͣ�ķ�����Ϣ�Ĺ���
#include<Windows.h>//�� API�ӿ� �����ơ�ճ�������ͣ���Ϣ����SendMessage
int main() {//������ ���
	//��һ�� ��ը����Ϣ����
	int Num = 100;
	//�ڶ��� ��ը�Ķ���/Ŀ�� ����������Ҫ��2����
	FindWindow(NULL,"Lionel Messi");//����������QQ���� NULL����ֵ
	//���岽 �ظ�ճ���ͷ���ִ��100�� ѭ����䣺while for do-while
	while (Num>0)//ֻҪ����100�ξ�ִ��100��
	{
		//������ ճ����Ϣ100��
		SendMessage(FindWindow(NULL, "Lionel Messi"),WM_PASTE,NULL,NULL);
		//���Ĳ� ������Ϣ100��
		SendMessage(FindWindow(NULL, "Lionel Messi"),WM_KEYDOWN,VK_RETURN,NULL);//�����
		Num--;//�Լ�1

	}






	return 0;//���� ����
}