class Solution {
public:
    void Solve(int id, vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans) {
        if (id == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // take
        temp.push_back(nums[id]);
        Solve(id + 1, nums, temp, ans);
        temp.pop_back();

        // not take
        Solve(id + 1, nums, temp, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums){

        vector<int> temp;
        vector<vector<int>> ans;

        Solve(0, nums, temp, ans);

        return ans;
    }
};