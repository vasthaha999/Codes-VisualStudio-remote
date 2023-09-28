// the maximum divisor and the minimum common multiple
#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter two numbers:";
	int a, b;
	cin >> a >> b;

	int m = (a > b) ? a : b;
	for (int i = m;; i++) {
		if (i % a == 0 && i % b == 0) {
			cout << "The minimum common multiple is " << i << endl;
			break;
		}
	}
	int n = (a < b) ? a : b;
	for (int i = n;; i--) {
		if (a % i == 0 && b % i == 0) {
			cout << "The maximum divisor is " << i << endl;
			break;
		}
	}
	return 0;
}