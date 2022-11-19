#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int A, B, C,Max = 0, Min = 0;

	cin >> A >> B >> C;
	
	//Max = A
	if (A > B && A > C) {
		Max = A;
		Min = min(B , C);
	}
	//Max = B
	if (B > A && B > C) {
		Max = B;
		Min = min(A , C);
	}
	//Max = C
	if (C > A && C > B) {
		Max = C;
		Min = min(A, B);
	}
	// A = B
	if (A == B) {
		Max = max(A, C);
		Min = min(A, C);
	}
	// A = C
	if (A == C) {
		Max = max(A, B);
		Min = min(B, C);
	}
	// B = C
	if (B == C) {
		Max = max(A, C);
		Min = min(A, C);
	}
	// A =B =C
	if (A == B && A == C) {
		Max = A;
	 	Min = B;
	}
	cout << Min << " " << Max << endl;
}