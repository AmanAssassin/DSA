#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
    // code for traversal just printing
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int IndexInsertion(int arr[], int size, int element, int capacity, int index)
{
    // code for insertion of element at particular index of size
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    // main driver code passing the value
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 69, index = 3;

    // printing before insertion
    display(arr, size);
    int check = IndexInsertion(arr, size, element, 100, index);
    // if (check == 1)
    //     cout << "Insertion successful" << endl;
    // else
    //     cout << "Unsuccesfull" << endl;
    size += 1;          // size + 1 because a new one element is added
    display(arr, size); // display after increasing the size;

    return 0;
}