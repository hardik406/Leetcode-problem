class Solution {
public:
    void solve(int x,vector<int>& arr,int target,vector<vector<int>> &ans,vector<int> &temp){
        if(x == arr.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }

        if(arr[x]<=target){
            temp.push_back(arr[x]);
            solve(x,arr,target - arr[x],ans,temp);
            temp.pop_back();
        }
        solve((x+1),arr,target,ans,temp);
    }
    

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,candidates,target,ans,temp);
        return ans;
    }
};