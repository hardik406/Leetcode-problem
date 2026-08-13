class Solution {
public:
    void Solve(int id, vector<int>& nums, vector<int>& temp, set<vector<int>>& ans) {
        if (id == nums.size()) {
            ans.insert(temp);
            return;
        }

        // take
        temp.push_back(nums[id]);
        Solve(id + 1, nums, temp, ans);
        temp.pop_back();

        // not take
        Solve(id + 1, nums, temp, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> temp;
        set<vector<int>> ans;

        Solve(0, nums, temp, ans);

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};