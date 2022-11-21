#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin >> N;

	if (N <= 1) {

		cout << "-1" << endl;
	}

	for (int i = 2; i <= N; i++) {
	
		if (i % 2 == 0) {
			cout << i << endl;
		}
		
	}

}