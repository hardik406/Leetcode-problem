
class Solution {
public:
    int valTotal(vector<vector<int>>& triangle, int i, int j,
                 vector<vector<int>>& dp,
                 vector<vector<bool>>& visited) {
        int n = triangle.size();

        if (i == n - 1)
            return triangle[i][j];

        if (visited[i][j])
            return dp[i][j];

        int down = valTotal(triangle, i + 1, j, dp, visited);
        int Rdown = valTotal(triangle, i + 1, j + 1, dp, visited);

        visited[i][j] = true;

        return dp[i][j] =
            triangle[i][j] + min(down, Rdown);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        vector<vector<int>> dp(n);
        vector<vector<bool>> visited(n);

        for (int i = 0; i < n; i++) {
            dp[i] = vector<int>(i + 1, 0);
            visited[i] = vector<bool>(i + 1, false);
        }

        return valTotal(triangle, 0, 0, dp, visited);
    }
};
