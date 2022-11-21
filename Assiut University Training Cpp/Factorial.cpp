#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0) {
        long long fact = 1;
        int N;
        cin >> N;

        for (int i = 2; i <= N; i++) {

             fact = fact * i;
        }
        cout << fact << endl;
        t--;
    }

   
    return 0;
}