class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,prod=1;
        int rem=0;
        while(n>0)
        {
            rem = n%10;
            sum+=rem;
            prod*=rem;
            n=n/10;
        }
        rem=prod-sum;
        return rem;
        
    }
};