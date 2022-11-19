#include <iostream>
using namespace std;

int main() {

	char X;
	cin >> X;
	if (X >= 65 && X <= 90) {
		cout << "ALPHA\nIS CAPITAL" << endl;
	}
	else if (X >= 97 && X <= 122) {
		cout << "ALPHA\nIS SMALL" << endl;
	}
	else
		cout << "IS DIGIT" << endl;
}