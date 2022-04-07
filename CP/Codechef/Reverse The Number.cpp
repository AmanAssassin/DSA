//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, reverse = 0, r;
        cin >> n;
        for (; n > 0; n = n / 10)
        {
            r = n % 10;
            reverse = reverse * 10 + r;
        }
        cout << reverse << endl;
    }
    return 0;
}
