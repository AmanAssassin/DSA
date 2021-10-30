class Solution
{
public:
    int fib(int n)
    {
        int sum;
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        int sans1 = fib(n - 1);
        int sans2 = fib(n - 2);
        return sans1 + sans2;
    }
};