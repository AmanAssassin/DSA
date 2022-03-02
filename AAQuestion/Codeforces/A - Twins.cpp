#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int x = 0;
    cin >> n;
    int a[n];
    int sum = 0;
    int gread = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int l = sizeof(a) / sizeof(a[0]);
    sort(a, a + l);

    for (int i = n - 1; i >= 0; i--)
    {
        gread += a[i];
        x++;
        if (gread > sum / 2)
            break;
    }
    cout << x;
    return 0;
}
