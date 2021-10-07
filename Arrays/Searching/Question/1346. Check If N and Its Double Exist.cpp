class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        int size = arr.size();
        bool ans = false;

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (arr[i] == arr[j] * 2 and i != j)
                {
                    ans = true;
                    return ans;
                }
            }
        }
        return ans;
    }
};