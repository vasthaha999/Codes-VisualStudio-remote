//����
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	std::cout << "���������������ߣ�";
	std::cin >> a >> b >> c;
	if (a + b <= c || b + c <= a || a + c <= b) {
		std::cout << "���������Σ�";
	}
	else if (a == b && b == c) {
		std::cout << "�ǵȱ������Ρ�";
	}
	else if (a == b || b == c || c == a) {
		std::cout << "�ǵ��������Ρ�";
	}
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
		std::cout << "��ֱ�������ε����ǵ��������Ρ�";
	}
	else {
		std::cout << "���������Ρ�";
	}
	std::cout << endl;
	return 0;
}