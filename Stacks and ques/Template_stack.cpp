#include <iostream>
#include <climits>
using namespace std;
template <typename T>

class template_use
{
    T *data;
    int nextIndex;
    int capacity;

public:
    template_use()
    {
        data = new T[4];
        next Index = 0;
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
    void push(T element)
    {
        if (nextIndex == capacity)
        {
            T *newData = new T[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
            // cout << "STACK full" << endl;
            // return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top()
    {
        if (isEmpty())
        {
            cout << "Stack Empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};