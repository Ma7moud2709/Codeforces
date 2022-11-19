#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout <<fixed << setprecision(9);
    double r, Area;
    cin >> r;
    Area = (3.141592653 * r * r);
    cout << "Area = "<< Area <<endl;
    return 0;
}
