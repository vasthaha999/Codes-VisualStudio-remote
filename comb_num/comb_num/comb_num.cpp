// 求组合数
#include <iostream>
using namespace std;

int Factorial(int i);

int main()
{
	int a, b;
	cout << "Please enter 2 numbers:";
	cin >> a >> b;

	if (a == 0)
	{
		cout << 1 << endl;
	}
	else {
		int f = Factorial(a) * Factorial(b - a);
		double result = Factorial(b) / f;
		cout << result;
	}
	return 0;
}
int Factorial(int i) {
	int p = 1;
	for (int j = 1; j <= i; j++) {
		p *= j;
	}
	return p;
}