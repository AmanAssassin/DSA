/*
    To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.

    Skeleton code to achieve this:
    #include <iostream>
    using namespace std;

    void quickSort(int input[], int start, int end)
    {
            // your code goes here
    }
    void quickSort(int input[], int size)
    {
            quickSort(input, 0, size - 1);
    }

*/
#include <iostream>
using namespace std;
// Swap two elements - Utility function
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// partition the array using last element as pivot
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        // if current element is smaller than pivot, increment the low element
        // swap elements at i and j
        if (arr[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// quicksort algorithm
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // partition the array
        int pivot = partition(arr, low, high);

        // sort the sub arrays independently
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void quickSort(int input[], int size)
{
    /* Don't write main().
       Don't read input, it is passed as function argument.
       Change in the given array itself.
       Taking input and printing output is handled automatically.
    */
    quickSort(input, 0, size - 1);
}