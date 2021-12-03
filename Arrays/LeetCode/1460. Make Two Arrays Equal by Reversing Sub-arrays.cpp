// 1460. Make Two Arrays Equal by Reversing Sub-arrays

class Solution
{
public:
    bool canBeEqual(vector<int> &target, vector<int> &arr)
    {
        int Tsize = target.size();
        int Asize = arr.size();
        if (Tsize == 1 && Asize == 1)
        {
            if (target[0] == arr[0])
                return true;
            else
                return false;
        }

        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        bool ans = true;
        for (int i = 0; i < Tsize; i++)
        {
            if (target[i] != arr[i])
            {
                ans = false;
                return ans;
            }
        }
        return ans;
    }
};