#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, i, j;
        cin >> n >> m;
        int a[1000000], b[1000000];
        int sum1 = 0, sum2 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
            sum2 += b[i];
        }
        sort(a, a + n);
        sort(b, b + m);
        long long int count = 0;
        i = 0;
        j = m - 1;
        while (i != n && j != -1 && sum1 <= sum2)
        {
            if (a[i] > b[j])
            {
                break;
            }
            sum1 = sum1 - a[i] + b[j];
            sum2 = sum2 - b[j] + a[i];
            i++;
            j--;
            count++;
        }
        if (sum1 > sum2)
        {
            cout << count << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}