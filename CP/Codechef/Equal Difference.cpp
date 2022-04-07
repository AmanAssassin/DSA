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
        int a[n];
        int maxf = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            maxf = max(maxf, mp[a[i]]);
        }
        if (n <= 2)
        {
            cout << 0 << endl;
            continue;
        }
        if (maxf == 1)
        {
            cout << n - 2 << endl;
            continue;
        }
        cout << n - maxf << endl;
    }
    return 0;
}
