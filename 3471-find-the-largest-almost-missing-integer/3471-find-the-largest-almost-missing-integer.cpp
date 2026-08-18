class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // k == 1
        if (k == 1) {
            unordered_map<int, int> mp;

            for (int x : nums)
                mp[x]++;

            int ans = -1;

            for (auto &p : mp) {
                if (p.second == 1)
                    ans = max(ans, p.first);
            }

            return ans;
        }

        // k == n
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }

        int first = nums[0];
        int last = nums[n - 1];

        int count_first = 0;
        int count_last = 0;

        for (int x : nums) {
            if (x == first)
                count_first++;

            if (x == last)
                count_last++;
        }

        int ans = -1;

        if (count_first == 1)
            ans = max(ans, first);

        if (count_last == 1)
            ans = max(ans, last);

        return ans;
    }
};