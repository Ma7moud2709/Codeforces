#include <iostream>
using namespace std;

int main() {

	int A, B, Last = 0;
	cin >> A >> B;

	bool lucky = false;

	int stop = 1;
	for (; A <= B; A++) {

		int temp = A;

		while (temp > 0) {

			Last = temp % 10;
			temp = temp / 10;


			if (Last == 4 || Last == 7) {

				lucky = true;
			}
			else {
				lucky = false;
				break;
			}
		}
		if (lucky) {
			stop = 0;

			cout << A << " ";
		}
	}
	if (stop == 1) {
		cout << "-1" << endl;
	}

	return 0;
}