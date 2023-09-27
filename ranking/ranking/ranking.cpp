//排名
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	std::cout << "请输入三角形三边：";
	std::cin >> a >> b >> c;
	if (a + b <= c || b + c <= a || a + c <= b) {
		std::cout << "不是三角形！";
	}
	else if (a == b && b == c) {
		std::cout << "是等边三角形。";
	}
	else if (a == b || b == c || c == a) {
		std::cout << "是等腰三角形。";
	}
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
		std::cout << "是直角三角形但不是等腰三角形。";
	}
	else {
		std::cout << "其他三角形。";
	}
	std::cout << endl;
	return 0;
}