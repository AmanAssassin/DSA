// Assassin
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int last = n % 10;
    int first = n;

    while (first >= 10)
    {
        first = first / 10;
    }

    return first + last;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sum(n) << endl;
    }
    return 0;
}
