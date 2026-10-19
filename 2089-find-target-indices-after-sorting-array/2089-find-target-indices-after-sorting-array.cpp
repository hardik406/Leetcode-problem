class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> list = {};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                list.push_back(i);
            }
        }
        sort(list.begin(),list.end());
        return list;
    }
};