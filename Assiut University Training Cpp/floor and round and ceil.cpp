#include <iostream>
using namespace std;

int main() {
	double Num1, Num2;
	cin >> Num1 >> Num2;

	float dev = (Num1 / Num2);
	float i = dev - int(dev);
	int x = dev - i;

	if (i >= 0.5) {

		cout << "floor " << Num1 << " / " << Num2 << " = " << x << endl;
		cout << "ceil " << Num1 << " / " << Num2 << " = " << x + 1 << endl;
		cout << "round " << Num1 << " / " << Num2 << " = " << x + 1;

	}
	else {

		cout << "floor " << Num1 << " / " << Num2 << " = " << x << endl;
		if (Num1 == Num2) {
			cout << "ceil " << Num1 << " / " << Num2 << " = " << x << endl;
		}
		else {
			cout << "ceil " << Num1 << " / " << Num2 << " = " << x + 1 << endl;
		}
		cout << "round " << Num1 << " / " << Num2 << " = " << x;
	}
}