#include <iostream>
using namespace std;
#include "Student.cpp"


int main() {

    Student s1;             // Const 1 called
    Student s2(101);
    Student s2(101,1001);
    Student s4(s3);
    s1 = s2;
    Student s5=s4;
}