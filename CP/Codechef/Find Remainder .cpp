#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int A, B;

    while (T--)
    {
        cin >> A >> B;
        cout << A % B << endl;
    }
    return 0;
}