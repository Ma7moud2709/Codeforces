
#include <iostream>
using namespace std;

int main() {
	long long num1, num2, sum, multi, subt;

	sum = num1 + num2;
	multi = num1 * num2;
	subt = num1 - num2;
	cin >> num1 >> num2;
	cout << num1 << " + " << num2 << " = " << sum << endl;
	cout << num1 << " * " << num2 << " = " << multi << endl;
	cout << num1 << " - " << num2 << " = " << subt << endl;
	return 0;
}
