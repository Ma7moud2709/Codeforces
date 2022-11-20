#include <iostream>
using namespace std;

int main() {
	int Age , Days , Months , Years;
	cin >> Age;

	//days
	 Days = (Age % 365) % 30;
	
	//months
	 Months = (Age % 365) /30 ;
	
	//years
	 Years = Age / 365;

	cout << Years << " " <<"years\n" << Months << " " << "months\n" << Days << " " << "days" << endl;
}