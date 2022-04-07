#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, p;
    cin >> t;
    while (t--)
    {
        cin >> p;
        int ans = 0, itemCost = 2048;
        while (p > 0)
        {
            ans += p / itemCost;
            p = p % itemCost;
            itemCost /= 2;
        }
        cout << ans << endl;
    }
    return 0;
}
