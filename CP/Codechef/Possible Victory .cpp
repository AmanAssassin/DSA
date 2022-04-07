#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll r, o, c;
    cin >> r >> o >> c;

    ll temp;
    temp = 20 - o; // 2
    temp = temp * 6;
    temp = temp * 6;

    temp = temp + c;
    if (r < temp)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
