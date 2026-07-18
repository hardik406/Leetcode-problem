class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int small = nums[0];
        int n = nums.size();
        int big = nums[n-1];

        int ans = gcd(small,big);
        return ans;
    }
};