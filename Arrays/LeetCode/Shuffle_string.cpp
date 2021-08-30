class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string r = s;
        for (int i = 0; i < indices.size(); i++)
        {
            r[indices[i]] = s[i];
        }
        return r;
    }
};