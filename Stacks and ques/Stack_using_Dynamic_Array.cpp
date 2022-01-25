#include <iostream>
using namespace std;

class Stack_using_Dynamic_array
{
    int *data;
    int nextIndex;
    int capacity;

public:
    Stack_using_Dynamic_array()
    {
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
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
        if (nextIndex == capacity)
        {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;

            // cout << "STACK full" << endl;
            // return;
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