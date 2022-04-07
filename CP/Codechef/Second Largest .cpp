#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, max = 0;
        cin >> a >> b >> c;

        if (a > b && a < c)
        {
            max = a;
        }
        if (a > c && a < b)
        {
            max = a;
        }
        if (b > c && b < a)
        {
            max = b;
        }
        if (b > a && b < c)
        {
            max = b;
        }
        if (c > a && c < b)
        {
            max = c;
        }
        if (c > b && c < a)
        {
            max = c;
        }
        cout << max << endl;
    }
    return 0;
}