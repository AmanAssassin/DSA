// Assassin
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll D, d, p, q;
        cin >> D >> d >> p >> q;
        ll temp = D / d, total = 0;
        if (D % d == 0)
        {
            total = d * temp * p + q * (temp - 1) * temp * d / 2;
            cout << total << endl;
        }
        else
        {
            total = d * temp * p + q * (temp - 1) * temp * d / 2;
            ll rem = D % d;
            total = total + rem * (p + temp * q);
            cout << total << endl;
        }
    }
    return 0;
}
