double geometricSum(int k)
{
    // Write your code here
    if (k == 0)
        return 1;

    // calculate the sum each time
    double ans = 1 / pow(2, k) + geometricSum(k - 1);

    // return final answer
    return ans;
}
