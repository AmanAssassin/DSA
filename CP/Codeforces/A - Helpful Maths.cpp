#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[100];
    cin >> c;
    int l = strlen(c);
    int c1 = 0, c2 = 0, c3 = 0;
    int i = 0;
    for (i = 0; i < l; i++)
    {
        if (c[i] == '1')
        {
            c1 += 1;
        }
        else if (c[i] == '2')
        {
            c2 += 1;
        }
        else if (c[i] == '3')
        {
            c3 += 1;
        }
    }
    for (i = 0; i < c1; i++)
    {
        cout << '1';
        if ((c2 == 0 && c3 == 0) && i == c1 - 1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for (i = 0; i < c2; i++)
    {
        cout << '2';
        if (i == c2 - 1 && c3 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }
    for (i = 0; i < c3; i++)
    {
        cout << '3';
        if (i == c3 - 1)
        {
            cout << endl;
        }
        else
        {
            cout << '+';
        }
    }

    return 0;
}
