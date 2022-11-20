#include <iostream>
using namespace std;

int main() {

	double Num;
	cin >> Num;

	if (Num - int(Num) == 0) {
		cout << "int " << Num;
	}
	else
		cout << "float " << int(Num) << " " << Num - int(Num);
}