class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> ans = {first};
        // ans[0]=first;
        for (const auto &i : encoded)
        {
            // ans[i+1]=encoded[i+1]^ans[i];
            ans.emplace_back(ans.back() ^ i);
        }
        return ans;
    }
};