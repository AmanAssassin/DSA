#include <iostream>
using namespace std;
// #include "Solution.h"

int print(int n)
{

    if (n == 0)
        return n;
    print(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    print(n);
}
