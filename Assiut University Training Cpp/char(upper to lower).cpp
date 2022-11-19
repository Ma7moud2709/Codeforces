#include <iostream>
#include <string>
using namespace std;

int main() {

	char letter;
	cin >> letter;

	if (islower(letter)){

		letter = toupper(letter);
		cout << letter <<endl;
	}
	else {
		letter = tolower(letter);
		cout << letter << endl;
	}
}