#include <bits/stdc++.h>
#include "Pair_class.cpp"
using namespace std;

int main()
{
    Pair<int> p1;
    p1.setx(20);
    p1.sety(30);

    cout << p1.getx() << " " << p1.gety() << endl;

    Pair<double> p2;
    p2.setx(20.35);
    p2.sety(30.69);
    cout << p2.getx() << " " << p2.gety() << endl;

    Pair<string> p3;
    p3.setx("ll");
    p3.sety("ad");
    cout << p3.getx() << " " << p3.gety() << endl;

    return 0;
    cout << "AMan" << endl;
}