#include <cstring>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum[33];

        for (int i = 0; i < 33; i++)
        {
            sum[i] = 0;
        }

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            int j = 32;
            while (x > 0)
            {
                sum[j] = sum[j] + x % 2;
                j--;
                x = x / 2;
            }
        }
        int count = 0;

        for (int j = 0; j < 33; j++)
        {
            if (sum[j] % k == 0)
            {
                count = count + sum[j] / k;
            }
            else
            {
                count = count + 1 + sum[j] / k;
            }
        }
        cout << count << endl;
    }
    return 0;
}
