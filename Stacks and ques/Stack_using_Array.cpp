#include<iostream>
using namespace std;

class Stack_using_array
{
    int *data;
    int nextIndex;
    int capacity;

public:
    Stack_using_array(int total_size)
    {
        data = new int[total_size];
        nextIndex = 0;
        capacity = total_size;
    }

    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        if (nextIndex == 0)
        {
            cout << "Stack Empty" << endl;
            return INT_MIN;
        }
        return false;
    }
    void push(int element)
    {
        if(nextIndex == capacity){
            cout<<"STACK full"<<endl;
            return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};