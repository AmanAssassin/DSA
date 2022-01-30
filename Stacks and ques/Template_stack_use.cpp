#include <bits/stdc++.h>
#include "Template_Stack.cpp"
using namespace std;

int main()
{

    template_use<int> s;
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