#include <bits/stdc++.h>
using namespace std;
int zero(int a)
{
    int res = 0;
 
    for (int i = 0; i <= a; i++)
    {
        res = res + a / i;
    }
    return res;
}
int main()
{
    int a;
    cin>>a;
    cout<<zero(a);
    return 0;
}