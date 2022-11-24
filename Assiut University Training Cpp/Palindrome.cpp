#include <iostream>
using namespace std;

int main() {

	int Num, Num2, Reverse = 0, mod = 0;

	cin >> Num;

	Num2 = Num;

	do {

		mod = Num % 10; //To get the last digit

		Reverse = (Reverse * 10) + mod; //To reverse the Num

		Num = Num / 10; // to delete last digit

	} while (Num != 0);

	if (Num2 == Reverse) {

		cout << Reverse << endl;
		cout << "YES";
	}
	else

		cout << Reverse << endl;
	cout << "NO";
}