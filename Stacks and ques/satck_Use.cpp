#include <bits/stdc++.h>
#include "Stack_using_Array.cpp"
#include "Stack_using_Dynamic_Array.cpp"
using namespace std;

int main()
{
    //   Static use in which the size was givven by the user
    // Stack_using_array s(4);
    // s.push(10);
    // s.push(20);
    // s.push(40);
    // s.push(80);
    // s.push(50);

    // Dynamic use in which the user will not provide the size rather than that we will increase the size twice whenever needed

    Stack_using_Dynamic_array s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(80);
    s.push(50);

    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.size() << endl;

    cout << s.isEmpty() << endl;

    return 0;
}