#include <cstring>
char x = 'x';
void removeX(char input[])
{
    int n = strlen(input);
    if (input[0] == '\0')
    {
        return;
    }

    removeX(input + 1);

    if (input[0] == x)
    {
        for (int i = 0; i < n; i++)
        {
            input[i] = input[i + 1];
        }
    }
}