class Solution {
public:
    void Solve(int i, int k, int n, int sum,
               vector<vector<int>>& ans,
               vector<int>& ds,
               vector<int>& integer) {

        if (sum == n && ds.size() == k) {
            ans.push_back(ds);
            return;
        }

        for (int j = i; j < integer.size(); j++) {
           ds.push_back(integer[j]);
           Solve(j+1,k,n,sum+integer[j],ans,ds,integer);
           ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> integer = {1,2,3,4,5,6,7,8,9};

        Solve(0, k, n, 0, ans, ds, integer);

        return ans;
    }
};