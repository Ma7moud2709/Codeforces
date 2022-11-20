#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long double A, B, C, D;
    cin >> A >> B >> C >> D;
    
    // To largest numbers
    long double X = B / 10000000000000;
    long double Y = D / 10000000000000;

    if (pow(A, X) > pow(C, Y))
        cout << "YES";
    else
        cout << "NO";


    return 0;
}