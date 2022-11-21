#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N;
	cin >> N;

	int List[N];

	for (int i = 0; i < N; i++) {

		cin >> List[i];
	}
	for (int j = 1; j < N; j++) {

		if (List[0] < List[j]) {
			List[0] = List[j];
		}
	}
	cout << List[0];
}