class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector v(n,0);
        
        for(int i=0;i<n;i++)
        {
            v[i]=nums[nums[i]];
        }
        return v;
    }
};