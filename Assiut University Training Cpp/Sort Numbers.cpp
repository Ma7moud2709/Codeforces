#include <iostream>
using namespace std;

int main() {

	int A, B, C;
	cin >> A >> B >> C;

	//A
	 if ( A >= B && A >= C ){
		if ( B > C ) {
			cout << C << "\n" << B << "\n" << A <<endl;
		}
		else 
			cout << B << "\n" << C << "\n" << A <<endl;
	}
	 //B
	else if ( B >= A && B >= C ){
		if ( A > C ) {
			cout << C << "\n" << A << "\n" << B <<endl;
		}
		else 
			cout << A << "\n" << C << "\n" << B <<endl;
	}
	 //C
	else if ( C >= A && C >= B ){
		if ( A > B ) {
			cout << B << "\n" << A << "\n" << C <<endl;
		}
		else 
			cout << A << "\n" << B << "\n" << C <<endl;
	}
	 // A B C
	else if (A == B && A == C) {

		 cout << A << "\n" << B << "\n" << C << endl;

	 }
	 cout << "\n" << A << "\n" << B << "\n" << C << endl;
}