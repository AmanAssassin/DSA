#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << ++n;
    }
    else
    {
        cout << --n;
    }
    return 0;
}
