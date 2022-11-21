#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    string prime = "YES";

    for (int i = 2; i < (num / 2); i++)
    {
        if (num % i == 0)
            prime = "NO";
    }

    cout << prime;

    return 0;
}