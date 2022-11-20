#include <iostream>
using namespace std;

int main() {
	long long int A, B, C, D;
	cin >> A >> B >> C >> D;

	long long X = (( A % 100)*( B % 100 )*( C % 100 )*( D % 100)) % 100;
	if ( X >= 0 && X <=9 ) {
		cout << "0" <<X;
	}
	else
	cout << X ;

}