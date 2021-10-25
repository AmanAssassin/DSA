void reverse(int *arr, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int *input, int d, int n)
{
    //Write your code here
    if (n == 0 || n == 1)
    {
        return;
    }
    d %= n;
    reverse(input, d);
    reverse(input + d, n - d);
    reverse(input, n);
}