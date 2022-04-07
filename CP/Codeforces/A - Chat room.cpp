#include <bits\stdc++.h>
using namespace std;

int main()
{
    char s[100], a[6] = "hello";
    int f = 0;
    cin >> s;
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        while (s[j] != '\0')
        {
            if (a[i] == s[j])
            {
                f++;
                j++;
                break;
            }
            else
            {
                j++;
            }
        }
    }
    if (f == 5)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
