#include <iostream>
using namespace std;

int main() {

	int N, X;
	char S;

	cin >> S >> X;
	

	for (int i = 0; i < X; i++) { // You can use while loop 
		cin >> N;

		for (int j = 0; j < N; j++) {
			cout << S;
		}
		cout << endl;
	}
	return 0;
}