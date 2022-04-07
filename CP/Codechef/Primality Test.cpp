#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f = 1;
        cin >> n;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                f = 0;
                break;
            }
        }
        if (f == 1 && n != 1)
        {
            cout << "yes" << endl;
        }
        else if (n == 1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}