#include <iostream>
using namespace std;

int main() {
	float Num;
	cin >> Num;

	if (Num >=0 && Num <=25 ) {

		cout << "Interval [0,25]" << endl;
	}
	else if (Num > 25 && Num <= 50 ) {

		cout << "Interval (25,50]" << endl;
		}
	else if (Num > 50 && Num <= 75 ) {

		cout << "Interval (50,75]" << endl;
		}
	else if (Num > 75 && Num <= 100) {

		cout << "Interval (75,100]" << endl;
		}
	else
		cout << "Out of Intervals" << endl;
}