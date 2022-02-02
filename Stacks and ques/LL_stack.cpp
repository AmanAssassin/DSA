#include <iostream>
using namespace std;
template <typename T>

class Node
{
public:
    T data;
    Node<T> *next;

    Node(T val)
    {
        this->data = val;
        this->next = NULL;
    }
};
template <typename T> // individual typename for individual class for everytime

class stack
{
    Node<T> *head;
    int size; // store the size
public:
    stack()
    {
        this->head = NULL;
        int size = 0;
    }

    int getsize()
    {
        return size;
    }
    bool isEmpty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
    void push(T element)
    {
        cout << "enter element" << endl;
        Node *newNode = new<T> Node(element);
        newNode->next = head;
        head = newNode;
        size++;
    }
    T pop()
    {
        if (head == NULL)
        {
            cout << "STack mpty" << endl;
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    T top()
    {
        if (head == NUL L)
        {
            cout << "STack mpty" << endl;
            return 0;
        }
        T ans = head->data;
        return ans;
    }
};