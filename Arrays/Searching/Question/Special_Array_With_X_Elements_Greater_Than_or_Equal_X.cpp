class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end()); // sort in order to avoid 0 and have clear element position
        for (int i = 1; i <= nums.size(); i++)
        {
            int c = 0; // for every i check with j and c if all good return i
            for (int j = nums.size() - 1; j >= 0; j--)
            {
                if (nums[j] >= i)
                    c++;
            }
            if (c == i)
                return i;
        }
        return -1;
    }
};