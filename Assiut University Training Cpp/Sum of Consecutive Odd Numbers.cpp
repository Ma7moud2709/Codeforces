#include <iostream>
using namespace std;

int main() {

	int T,X, Y;
	cin >> T;

	while (T > 0) {

		int temp, sum = 0;

		cin >> X >> Y;

		if (X > Y) {
			temp = X;
			X = Y;
			Y = temp;
		}

		//To exclude X
		int i = (X + 1);

		while (i < Y) {

			if (i % 2 != 0) {
				sum = sum + i;
			}
			else if (Y - X == 0) {
				sum = 0;
			}
			i++;
		}

	cout << sum << endl;
	T--;
	}
	return 0;
}