
class Solution {
public:
    int findMin(int i, int j,
                vector<vector<int>>& matrix,
                vector<vector<int>>& dp,
                vector<vector<bool>>& visited) {

        int n = matrix.size();
        int m = matrix[0].size();

        if (j < 0 || j >= m) return INT_MAX;

        if (i == 0) return matrix[0][j];

        if (visited[i][j]) return dp[i][j];

        int up = findMin(i - 1, j, matrix, dp, visited);
        int left = findMin(i - 1, j - 1, matrix, dp, visited);
        int right = findMin(i - 1, j + 1, matrix, dp, visited);

        int mini = min(up, min(left, right));

        visited[i][j] = true;

        if (mini == INT_MAX)
            return dp[i][j] = INT_MAX;

        return dp[i][j] = matrix[i][j] + mini;
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        int ans = INT_MAX;

        for (int j = 0; j < m; j++) {
            ans = min(ans, findMin(n - 1, j, matrix, dp, visited));
        }

        return ans;
    }
};
