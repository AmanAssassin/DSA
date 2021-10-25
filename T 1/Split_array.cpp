bool isSplitPossible(int *arr, int n, int start, int sumFive, int sumThree)
{
    if (start == n)
    {
        return (sumFive == sumThree);
    }
    if (arr[start] % 5 == 0)
    {
        sumFive += arr[start];
    }
    else if (arr[start] % 3 == 0)
    {
        sumThree += arr[start];
    }
    else
    {
        bool ans1 = isSplitPossible(arr, n, start + 1, sumFive + arr[start], sumThree);
        bool ans2 = isSplitPossible(arr, n, start + 1, sumFive, sumThree + arr[start]);
        return ans1 || ans2;
    }
    return isSplitPossible(arr, n, start + 1, sumFive, sumThree);
}

bool splitArray(int *input, int size)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    return isSplitPossible(input, size, 0, 0, 0);
}
