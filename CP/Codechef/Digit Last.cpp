#include <iostream>
#include <math.h>
using namespace std;
int last(long long int num)
{
    int one = num % 10;
    num /= 10;
    int tens = num % 10;
    tens *= 10;
    num = tens + one;
    return num;
}
int main()
{
    int n;
    cin >> n;
    long long int x;
    x = pow(5, 2);
    cout << last(x);
    return 0;
}