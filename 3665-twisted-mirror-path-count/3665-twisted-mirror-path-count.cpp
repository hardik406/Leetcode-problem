class Solution {
public:
    const int mod = 1e9 + 7;

    int helper(int i, int j, int prev,
               vector<vector<int>>& grid,
               vector<vector<vector<int>>>& dp) {

        int n = grid.size();
        int m = grid[0].size();

        if (i >= n || j >= m) return 0;

        if (i == n - 1 && j == m - 1) return 1;

        if (dp[i][j][prev + 1] != -1)
            return dp[i][j][prev + 1];

        int down = 0, right = 0;

        if (grid[i][j] == 1) {
            if (prev == 0) {
                down = helper(i + 1, j, 1, grid, dp);
            } else {
                right = helper(i, j + 1, 0, grid, dp);
            }
        } 
        else {
            down = helper(i + 1, j, 1, grid, dp);
            right = helper(i, j + 1, 0, grid, dp);
        }

        return dp[i][j][prev + 1] = (down + right) % mod;
    }

    int uniquePaths(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(m, vector<int>(3, -1))
        );

        return helper(0, 0, -1, grid, dp);
    }
};