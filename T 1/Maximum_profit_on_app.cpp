#include <bits/stdc++.h>
using namespace std;

int maximumProfit(int budget[], int n)
{
    // Write your code here
    sort(budget, budget + n);
    int max = 0;
    int len = n;
    for (int i = 0; i < n; i++)
    {
        if (max < budget[i] * len)
        {
            max = budget[i] * len;
        }
        len -= 1;
    }
    return max;
}
