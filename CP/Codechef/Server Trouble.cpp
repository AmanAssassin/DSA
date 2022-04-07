#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, d = 0;
        cin >> n >> k;
        if (n % k == 0)
        {
            cout << n / k << " " << k << endl;
        }
        else
        {
            cout << (n / k) + 1 << " " << n % k << endl;
        }
    }
    return 0;
}
