#include <iostream>
using namespace std;

int main() {

	bool Correct = true;

	while (Correct) {
		int Password;
		cin >> Password;
		
	if(Password == 1999) {

		Correct = false;
		cout << "Correct" << endl;
	}
	else
		cout << "Wrong" << endl;
	}
}