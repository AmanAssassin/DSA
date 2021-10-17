int multiplyNumbers(int m, int n)
{
    // Write your code here
    if (m < n)
        return multiplyNumbers(n, m);

    // iteratively calculate
    // y times sum of x
    else if (n != 0)
        return (m + multiplyNumbers(m, n - 1));

    // if any of the two numbers is
    // zero return zero
    else
        return 0;
}
