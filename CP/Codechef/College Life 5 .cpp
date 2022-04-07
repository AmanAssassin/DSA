#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m, f = 1, count = 0, temp;
        cin >> n >> m;
        map<ll, ll> m1;
        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            m1[temp]++;
            v.push_back(temp);
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> temp;
            m1[temp] = 0;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());
        for (auto i : v)
        {
            if (m1[i] != f)
            {
                if (f == 1)
                {
                    f = 0;
                }
                else
                {
                    f = 1;
                }
                count++;
            }
        }
        cout << count << endl;
    }
}