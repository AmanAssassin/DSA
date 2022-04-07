#include <iostream>
using namespace std;

int main()
{
    string s, x;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            s[i] = '.';
        }
        else
            cout << "." << s[i];
    }
    return 0;
}
