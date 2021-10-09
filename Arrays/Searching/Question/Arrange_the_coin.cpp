class Solution
{
public:
    int arrangeCoins(int n)
    {
        int temp = n;
        int i = 0, ans = 0;
        for (i = 1; i <= temp; i++)
            temp = temp - i;
        return i - 1;
    }
};


// IDEA behind it
// class Solution {
// public:
//     int arrangeCoins(int n) {

//     int ans = 0, temp = n,i;
//     for ( i = 0 ; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             if (temp == 0)
//                 return i;
//             temp--;
//         }
//     }
//     return i;
//     }
// };
