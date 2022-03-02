#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, f = 0, a;
    cin >> n;
    int temp = n;
    while (temp)
    {
        a = temp % 10;
        if (a == 4 || a == 7)
        {
            f += 1;
        }
        else
        {
            f = 0;
            break;
        }
        temp = temp / 10;
    }
    if (f == 1)
        cout << "YES" << endl;
    else
    {
        if (n % 4 == 0 || n % 7 == 0 || n % 4 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 477 == 0 || n % 474 == 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}
