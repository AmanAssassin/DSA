int findUnique(int *arr, int n)
{
    // Write your code here
    int unique = 0;
    for (int i = 0; i < arr.length; i++)
    {
        unique ^= arr[i];
    }
    return unique;
}