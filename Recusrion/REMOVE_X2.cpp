#include <bits/stdc++.h>
using namespace std;

void removeX(char s[])
{
    if (s[0] == 0)
        return;
    if (s[0] != 'x')
    {
        removeX(s + 1);
    }
    else
    {
        int i;
        for (i = 0; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeX(s);
    }
}

int main()
{
    char str[20];
    cin >> str;
    removeX(str);
    cout << str;
    return 0;
}