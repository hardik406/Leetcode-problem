class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum =0;
        int mini = INT_MAX;
        int n = nums.size();
        for(int i : nums){
          mini = min(mini,i);
          sum +=i; 
        }
        return sum - n*mini;
    }
};