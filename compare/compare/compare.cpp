//输出三个整数，求最大值并输出
#include <iostream>
int main()
{
	int n1, n2, n3, max;
	std::cout << "Please enter three numbers: ";
	std::cin >> n1>> n2>> n3;
	if (n1 > n2) {
		max = n1;
	}
	else {
		max = n2;
	} 
	if (max > n3) {
		std::cout << "The max number is " << max << std::endl;
	}
	else {
		std::cout << "The max number is " << n3 << std::endl;
	}
	return 0;
}