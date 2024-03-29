#include <iostream>
#include "Node.cpp"
using namespace std;

void print(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    temp = Head;
    while (temp != NULL)
    {

        cout << temp->data << " ";
        Head = temp->next;
    }
}

int main()
{
    // statically create Node

    Node n1(1); //this create a node object with 1 as a value with Null as a adress

    Node *Head = &n1; // storing the address of the head node i.e. first n1  ||its just a pointer variable not a new node

    //similarly this create a node object with 1 as a value with Null as a adress
    // aftre the above lines there are two nodes with 1 and 2 value both having self some address but storing Null adress inside the object of Node so now we want them to connect them
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    // copying fronts address in previous node and head having address of first and last is having NULL
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(Head);

    /*
    n1.next = &n2;

    cout << n1.data << " " << n2.data << endl;
    //Creating dynamically
    Node *n3 = new Node(10);
    Node *Head = n3; // no & as dynamic already storing address
    Node *n4 = new Node(20);
    n3 -> next = n4;
    */

    return 0;
}