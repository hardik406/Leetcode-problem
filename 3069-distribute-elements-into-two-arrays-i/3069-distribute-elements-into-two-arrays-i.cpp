class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        nums.erase(nums.begin(), nums.begin() + 2);
        for(int i = 0;i<nums.size();i++){
            if(arr1[arr1.size()-1]>arr2[arr2.size()-1]){
                arr1.push_back(nums[i]);
            }
            else{
                 arr2.push_back(nums[i]);
            }
        }
        vector<int> ans;

ans.insert(ans.end(), arr1.begin(), arr1.end());
ans.insert(ans.end(), arr2.begin(), arr2.end());
return ans;
    }
};