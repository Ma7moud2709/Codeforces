#include <iostream>
using namespace std;

int main() {
	int N , Num;
	cin >> N;
	
	while (N > 0) {
		cin >> Num;

		if (Num == 0) {
			cout << "0" << endl;
		}
		else {

			while (Num > 0) {
				int last = Num % 10;
				Num = Num / 10;
				cout << last << " ";
			}
			cout << endl;
		}

		N--;
	}
	return 0;
}