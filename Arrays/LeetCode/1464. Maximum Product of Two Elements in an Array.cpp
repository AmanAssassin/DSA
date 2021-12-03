// 1464. Maximum Product of Two Elements in an Array

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int max = 0;
        int size = nums.size();
        // int i =1,j=1;
        // int i =0,j=1;

        if (size == 2)
        {
            max = ((nums[0] - 1) * (nums[1] - 1));
            return max;
        }
        // for( int i =0; i<size;i++){
        //     for( ; j<size;j++){
        //         if((nums[i]-1)*(nums[j]-1) > max){
        //             max = (nums[i]-1)*(nums[j]-1);
        //         }
        //     }
        // }

        sort(nums.begin(), nums.end());
        max = ((nums[size - 2] - 1) * (nums[size - 1] - 1));
        return max;
    }
};