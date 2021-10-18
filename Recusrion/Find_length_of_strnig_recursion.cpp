#include <bits/stdc++.h>
using namespace std;

int length(char a[])
{
    if(a[0] == '\0')
    return 0;

    int sl = length(a+1);
    return 1 + sl;
}

int main()
{
    char str[20];
    cin >> str;
    int l = length(str);
    cout << l << endl;
    return 0;
}