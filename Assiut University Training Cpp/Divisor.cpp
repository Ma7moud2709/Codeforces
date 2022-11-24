#include <iostream>
using namespace std;

int main() {

    int Num;
    cin >> Num;

    for (int i = 1; i <= Num; i++) {

        if (Num % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}