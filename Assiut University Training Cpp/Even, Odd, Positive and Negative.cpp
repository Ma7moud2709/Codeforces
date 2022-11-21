#include <iostream>
using namespace std;

int main() {

	//Initialize
	int N , Even = 0,
		Odd = 0,
		Positive = 0 ,
		Negative = 0;

	cin >> N;

	int List[N];
	//write into array
	for (int i = 0; i < N; i++) {
		cin >> List[i];
	}

	//Even

	for (int j = 0; j < N; j++) {
		if (List[j] % 2 == 0) {

			Even++;
		}
	}
	cout << "Even: " << Even << endl;

	//ODD

	for (int j = 0; j < N; j++) {
		if (List[j] % 2 != 0) {

			Odd++;
		}
	}
	cout << "Odd: " << Odd << endl;

	//Positive

	for (int j = 0; j < N; j++) {
		if (List[j] > 0) {

			Positive++;
		}
	}
	cout << "Positive: " << Positive << endl;

	//Negative
	
	for (int j = 0; j < N; j++) {
		if (List[j] < 0) {

			Negative++;
		}
	}
	cout << "Negative: " << Negative << endl;
	return 0;
}
