#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, ans;
        cin >> n;
        ll q = n / 4;
        ll rem = n % 4;

        if (n == 1)
        {
            ans = 20;
        }
        else if (n == 2)
        {
            ans = 36;
        }
        else if (n == 3)
        {
            ans = 51;
        }
        else
        {
            ans = q * 44;
            if (rem == 0)
            {
                ans = ans + 16;
            }
            else if (rem == 1)
            {
                ans += 32;
            }
            else if (rem == 2)
            {
                ans += 44;
            }
            else if (rem == 3)
            {
                ans += 55;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
