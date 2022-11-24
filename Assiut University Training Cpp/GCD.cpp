#include <iostream>
using namespace std;

int main() {

    int Num1, Num2, GCD;
    cin >> Num1 >> Num2;

    for (int i = 1; i <= Num1; i++) {
        if (Num1 % i == 0 && Num2 % i == 0) {
            GCD = i;
        }
    }
    cout << GCD;
}