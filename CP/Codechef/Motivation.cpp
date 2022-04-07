#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        pair<int, int> p[n];

        for (int i = 0; i < n; i++)
        {
            cin >> p[i].second >> p[i].first;
        }
        sort(p, p + n);

        for (int i = n - 1; i >= 0; i--)
        {
            if (p[i].second <= x)
            {
                cout << p[i].first << endl;
                break;
            }
        }
    }
    return 0;
}
