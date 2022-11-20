#include <iostream>
using namespace std;

int main() {

	double X, Y;

	cin >> X >> Y;

	//Q1
	if (X > 0 && Y > 0) {
		cout << "Q1" << endl;
	}
	//Q2
	else if (X < 0 && Y > 0) {
		cout << "Q2" << endl;
	}
	//Q3
	else if (X < 0 && Y < 0) {
		cout << "Q3" << endl;
	}
	//Q4
	else if (X > 0 && Y < 0) {
		cout << "Q4" << endl;
	}
	//above X
	else if ((X > 0 || X < 0) && Y == 0) {
		cout << "Eixo X" << endl;
	}
	//above Y
	else if (X == 0 && (Y > 0 || Y < 0)){
		cout << "Eixo Y" << endl;
	}
	else
		cout << "Origem" << endl;
}