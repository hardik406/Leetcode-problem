class Solution {
public:
    int helper(vector<vector<int>>&grid,int row,int col,int st,vector<vector<vector<int>>>&dp){
        int n=grid.size(),m=grid[0].size();
        if(row<0||col<0||row>=n||col>=m) return INT_MAX;
        st^=grid[row][col];
        if(row==n-1&&col==m-1) return st;
        if(dp[row][col][st]!=-1) return dp[row][col][st];
        int take1=helper(grid,row+1,col,st,dp);
        int take2=helper(grid,row,col+1,st,dp);
        return dp[row][col][st] = min(take1,take2);
    }
    int minCost(vector<vector<int>>& grid) {
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(1024,-1)));
        return helper(grid,0,0,0,dp);
    }
};