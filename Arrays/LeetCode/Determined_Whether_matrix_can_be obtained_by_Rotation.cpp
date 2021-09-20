class Solution
{
public:
    bool findRotation(vector<vector<int>> &mat, vector<vector<int>> &target)
    {
        int N = mat[0].size();
        for (int x = 0; x < N / 2; x++)
        {
            // Consider elements in group
            // of 4 in current square
            for (int y = x; y < N - x - 1; y++)
            {
                // Store current cell in
                // temp variable
                int temp = mat[x][y];

                // Move values from right to top
                mat[x][y] = mat[y][N - 1 - x];

                // Move values from bottom to right
                mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];

                // Move values from left to bottom
                mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];

                // Assign temp to left
                mat[N - 1 - y][x] = temp;
            }
        }
        for (int i = 0; i < mat.size(); i++)
            for (int j = 0; j < mat[i].size(); j++)
                if (mat[i][j] == target[i][j])
                    return true;

        return false;
    }
};