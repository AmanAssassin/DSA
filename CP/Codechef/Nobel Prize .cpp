#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m, temp, sum = 0, prev = 0, f = 0;
        cin >> n >> m;
        ll a[n];
        set<ll> s;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        if (m > s.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}