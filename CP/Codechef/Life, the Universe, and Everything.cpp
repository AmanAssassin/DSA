#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    while (cin >> n)
    {
        if (n == 42)
        {
            break;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}
