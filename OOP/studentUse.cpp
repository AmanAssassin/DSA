#include <iostream>
using namespace std;
#include "Student.cpp"


int main() {

	Student s1(10, 1001);
	cout << "Address of s1 : " << &s1 << endl;

	Student s2(20);
	s2.display();


	Student s1(10, 1001);
	Student s2(20, 2001);

	Student *s3 = new Student(30, 3001);

	s2 = s1;

	*s3 = s1;

	s2 = *s3;

	delete s3;



	/*
	Student s1;

	s1.display();

	Student s2;

	Student *s3 = new Student;
	s3 -> display();


	cout << "Parametrized constructors Demo" << endl;
	Student s4(10);

	s4.display();

	Student *s5 = new Student(101);
	s5 -> display();

	dynamically created

	Student s6(20, 1002);
	s6.display()

	*/
	
}

