// bits/stdc++.h works in linux.
// It loads most of the libraries of C++ required.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Read the number of test cases.
    int T;
    cin >> T;
    while (T > 0)
    {
        // Read the input a, b
        int a, b;
        cin >> a >> b;

        // Compute the ans.
        int ans = a + b;
        cout << ans << endl;
        T--;
    }

    return 0;
}