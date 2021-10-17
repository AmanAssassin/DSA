#include <bits/stdc++.h>
using namespace std;
void pairStar(char input[])
{
    int len = strlen(input);

    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == input[1])
    {

        for (int i = len; i >= 2; i--)
        {

            input[i] = input[i - 1];
        }

        input[2] = input[1];
        input[1] = '*';
        input[len + 1] = '\0';
    }
    pairStar(input + 1);
}