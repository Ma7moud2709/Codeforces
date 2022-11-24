#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    bool prime = true;

    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) {
                prime = false;
                break;
            }
            else
                prime = true;
        }
        if (prime) {
            cout << i << " ";
        }
    }

    return 0;
}