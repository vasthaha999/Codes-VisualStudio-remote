//解一元二次方程
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c, delta, p, q;
	cout << "Please input the coefficient of the equation:";
	cin >> a >> b >> c;
	if (a == 0) {
		cout << "It is not a quadratic equation!" << endl;
	}
	else if ((delta = b * b - 4 * a * c) == 0) {
		cout << "x1 = x2 = " << -b / (2 * a);
	}
	else if (delta > 0) {
		p = -b / (2 * a);
		q = sqrt(delta) / (2 * a);
		cout << "x1 = " << p + q << "x2 = " << p - q << endl;
	}
	else {
		p = -b / (2 * a);
		q = sqrt(-delta) / (2 * a);
		cout << "x1 = " << p << "+" << q << "i, " << "x2 = " << p << "+" << q << "i" << endl;
	}
	return 0;
}