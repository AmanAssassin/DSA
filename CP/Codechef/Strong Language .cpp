#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        char s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int a = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                a++;
                if (a == k)
                {
                    cout << "Yes" << endl;
                    l++;
                    break;
                }
            }
            else
                a = 0;
        }
        if (l == 0)
            cout << "No" << endl;
    }
    return 0;
}
