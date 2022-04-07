#include <bits/stdc++.h>

using namespace std;

#define Loop(z, n) for (long long int i = z; i < n; i++)

#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define TestC(t)     \
    long long int t; \
    cin >> t;        \
    while (t--)

const int N = 1e6;

long long int originalArray[N];

long long int forwardgcd[N];

long long int backwardgcd[N];

void GcdCalculation(long long int n)

{

    forwardgcd[1] = originalArray[1];
    backwardgcd[n] = originalArray[n];

    for (long long int i = n - 1; i > 0; i--)

    {

        backwardgcd[i] = __gcd(backwardgcd[i + 1], originalArray[i]);
    }

    Loop(2, n + 1)

    {

        forwardgcd[i] = __gcd(forwardgcd[i - 1], originalArray[i]);
    }
}

int main()

{

    fastIO

    TestC(t)

    {

        long long int n;

        cin >> n;

        Loop(1, n + 1)

        {

            cin >> originalArray[i];
        }

        sort(originalArray, originalArray + n + 1);

        GcdCalculation(n);

        long long int SumOfElements = 0;

        Loop(1, n + 1)

        {

            SumOfElements += originalArray[i];
        }

        long long int mimimumNotes = LLONG_MAX;

        Loop(1, n + 1)

        {

            long long int tempValue = (SumOfElements - originalArray[i] + __gcd(forwardgcd[i - 1], backwardgcd[i + 1])) / __gcd(forwardgcd[i - 1], backwardgcd[i + 1]);

            if (tempValue < mimimumNotes)

                mimimumNotes = tempValue;
        }

        cout << mimimumNotes << endl;
    }
}