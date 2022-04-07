#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
float bound(float var)
{
    float value = (int)(var * 100 + 0.5);
    return (float)value / 100;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        float x = 9.58;
        long double k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;

        float var = (100 / (k1 * k2 * k3 * v));

        if (x > bound(var))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
