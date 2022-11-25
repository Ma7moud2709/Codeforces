#include <iostream>
using namespace std;

int main() {
	int A, B, temp;
	

	while (cin >> A >> B) { //To allow user to enter for unlimited times

		if (A <= 0 || B <= 0) { // To stop the program when any num less than or equal to 0
			break;
		}

		//our operation:)
		while (A > 0 && B > 0) {
			int sum = 0;
			if (A > B) {
				temp = A;
				A = B;
				B = temp;
			}
			int i = A;

			while (i <= B) {
				cout << i << " ";
				sum = sum + i;
				i++;
			}
			cout << "sum =" << sum << endl;
			break;
		}
	}
	return 0;
}