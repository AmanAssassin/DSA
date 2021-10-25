int rotateCheck(int *arr, int low, int high)
{
    if (high < low)
        return 0;

    if (high == low)
        return low;

    int mid = (high + low) / 2;
    if (mid < high && arr[mid + 1] < arr[mid])
    {
        return (mid + 1);
    }
    if (mid > low && arr[mid] < arr[mid - 1])
    {
        return mid;
    }
    if (arr[high] > arr[mid])
    {
        return rotateCheck(arr, low, mid - 1);
    }
    return rotateCheck(arr, mid + 1, high);
}

int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    rotateCheck(input, 0, size - 1);
}