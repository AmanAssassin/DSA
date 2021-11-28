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

Node* insertNode(Node *head, int i, int data)
{
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if (i == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
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

    int i, data;
    cout << endl
         << "INPUT I AND DATQAA TO INSERT" << endl;
    ;
    cin >> i >> data;
    Head = insertNode(Head, i, data);
    print(Head);
    /* 
    This is happening   
    1 2 3 4 5 -1
    1 2 3 4 5 
    INPUT I AND DATQAA TO INSERT
    2 9
    1 2 9 3 4 5 
    */

    return 0;
}