#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        int res;
        if (A % 2 == 0 && B % 2 == 0)
            res = 0;
        else if (__gcd(A, B) != 1)
            res = 0;
        else if (__gcd(A + 1, B) > 1 || __gcd(A, B + 1) > 1)
            res = 1;
        else
            res = 2;
        cout << res << endl;
    }
    return 0;
}
