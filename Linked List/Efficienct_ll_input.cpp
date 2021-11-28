#include <iostream>
#include "Node.cpp"
using namespace std;

Node *takeInput_better() // time complexity is 0(n)better
{
    int data;
    cin >> data;
    Node *Head = NULL;
    Node *Tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
        }
        else
        {
            Tail->next = newNode;
            Tail = Tail->next;
            // or we can write
            // Tail = newNode
        }

        cin >> data;
    }
    return Head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{

    Node *Head = takeInput_better();
    print(Head);
    /*
    // statically create Node
    Node n1(1); //this create a node object with 1 as a value with Null as a adress

    Node *Head = &n1; // storing the address of the Head node i.e. first n1  ||its just a pointer variable not a new node

    //similarly this create a node object with 1 as a value with Null as a adress
    // aftre the above lines there are two nodes with 1 and 2 value both having self some address but storing Null adress inside the object of Node so now we want them to connect them
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    // copying fronts address in previous node and Head having address of first and last is having NULL
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