#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;
        cout << (Xa / xa + Xb / xb) << endl;
    }
    return 0;
}