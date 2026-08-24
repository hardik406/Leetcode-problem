class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        long long prev = (long long)lower - 1;

        for (long long x : nums) {
            if (x < lower || x > upper)
                continue;

            if (x > prev + 1) {
                ans.push_back({(int)(prev + 1), (int)(x - 1)});
            }

            prev = x;
        }

        if (prev < upper) {
            ans.push_back({(int)(prev + 1), upper});
        }

        return ans;
    }
};