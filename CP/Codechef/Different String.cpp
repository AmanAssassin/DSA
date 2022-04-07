#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l;
    cin >> l;

    while (l--)
    {
        int i, n;
        cin >> n;
        vector<string> str(n, ".");
        for (i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        string ans = "";
        for (i = 0; i < n; i++)
        {
            if (str[i][i] == '0')
            {
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        cout << ans << endl;
    }

    return 0;
}