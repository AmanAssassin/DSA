#include <bits/stdc++.h>
using namespace std;
// sorting is not compulsory as all index will be visited / treversed
//  worst case time complexity is O(n) as element may be found at last index
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int size, element;
    cout << "input size" << endl;
    cin >> size;
    int arr[size];
    cout << "input array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter element to be searched" << endl;
    cin >> element;

    cout << linearSearch(arr, size, element);
    return 0;
}