class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int sizeRow = grid.size();
        int sizeCol = grid[0].size();
        int counter = 0;
        for (int i = 0; i < sizeRow; i++)
        {
            for (int j = 0; j < sizeCol; j++)
            {
                if (grid[i][j] < 0)
                    ++counter;
            }
        }
        return counter;
    }
};