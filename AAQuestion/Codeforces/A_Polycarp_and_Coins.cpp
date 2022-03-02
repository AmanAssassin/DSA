#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c1, c2;

        if (n % 3 == 0)
        {
            c1 = c2 = n / 3;
        }
        else if ((n - 1) % 3 == 0)
        {
            c2 = (n - 1) / 3;
            c1 = c2 + 1;
        }
        else if ((n - 2) % 3 == 0)
        {
            c1 = (n - 2) / 3;
            c2 = c1 + 1;
        }
        cout << c1 << " " << c1 << endl;
    }
    return 0;
}