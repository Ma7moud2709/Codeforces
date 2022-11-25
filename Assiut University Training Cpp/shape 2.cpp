#include <iostream>
using namespace std;

int main() {

	int N, row = 1;
	cin >> N;

	while (N > 0){

		for (int i = 1; N > i; i++) {

			cout << " ";
		}
		for (int j = 0; j < row; j++) {
			cout << "*";
		}

		//To print 2 stars (right and left)
		row += 2;

		cout << endl;
		N--;
	}

}