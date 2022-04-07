#include <iostream>
using namespace std;

int main()
{
    long long int n, t, k, d, a[100000], sum;
    cin >> t;
    while (t)
    {
        cin >> n >> k >> d;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int j = sum / k;
        if (j >= d)
        {
            cout << d << endl;
        }
        else
        {
            cout << j << endl;
        }
        sum = 0;
        t--;
    }
    // your code goes here
    return 0;
}
