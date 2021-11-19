#include <iostream>
#include "Node.cpp"
using namespace std;

int main()
{
    // statically create Node

    Node n1(1); //this create a node object with 1 as a value with Null as a adress

    Node *Head = &n1; // storing the address of the head node i.e. first n1  ||its just a pointer variable not a new node

    Node n2(2); //similarly this create a node object with 1 as a value with Null as a adress

    // aftre the above lines there are two nodes with 1 and 2 value both having self some address but storing Null adress inside the object of Node so now we want them to connect them

    n1.next = &n2;

    cout << n1.data << " " << n2.data << endl;

    return 0;
}