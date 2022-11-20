#include <iostream>
using namespace std;

int main() {

	int Num;
	cin >> Num;
	while (Num >= 10) {
		Num = Num / 10;
	}
	if (Num % 2 == 0) {
		cout << "EVEN" << endl;
	}
	else
		cout << "ODD" << endl;
}