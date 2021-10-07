#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n)
{
    // code for traversal just printing
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void IndexDeletion(int arr[], int size,int index)
{
    // code for Deletion but mind the capacity of element at particular index of size

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    // main driver code passing the value
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 69, index = 1;

    // printing before insertion
    cout<<"printing before insertion"<<endl;
    
    display(arr, size);
    // int check = IndexDeletion(arr, size, element, index);
    IndexDeletion(arr, size, index);
    // if (check == 1)
    //     cout << "Insertion successful" << endl;
    // else
    //     cout << "Unsuccesfull" << endl;
    cout<<"After deletion"<<endl;
    size -= 1;          // size + 1 because a new one element is added
    display(arr, size); // display after increasing the size;

    return 0;
}