#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Num1 = ";
	cin >> num1;
	cout << "Num2 = ";
	cin >> num2;
	cout << (num1 % 10) + (num2 % 10);
}