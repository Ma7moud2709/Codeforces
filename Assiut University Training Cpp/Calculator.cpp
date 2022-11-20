#include <iostream>
using namespace std;

int main() {
	int A, B;
	char S;
	cin >> A >> S >> B;

	switch (S) {

	case '+':
		cout << A + B << endl;
		break;
	case '-':
		cout << A - B << endl;
		break;
	case '*':
		cout << A * B << endl;
		break;
	case '/':
		cout << A / B << endl;
		break;
	}
	return 0;
}