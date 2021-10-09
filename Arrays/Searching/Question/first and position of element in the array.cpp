class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1, mid;
        vector<int> ans(2, -1);
        if (n < 1)
            return ans;

        while (low < high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }
        if (nums[low] != target)
            return ans;
        else
            ans[0] = low;

        high = n - 1;
        while (low < high)
        {
            int mid = ((low + high) / 2) + 1;
            if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid;
        }
        ans[1] = high;
        return ans;
    }
};