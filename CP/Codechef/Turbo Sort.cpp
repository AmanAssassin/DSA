#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n[t];

    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }

    int a = sizeof(n) / sizeof(n[0]);
    sort(n, a + n);

    for (int i = 0; i < t; i++)
    {
        cout << n[i] << endl;
    }
    return 0;
}