class Solution {
public:

    void findSum(int id, vector<int>& arr, int target,
                 vector<vector<int>>& ans, vector<int>& temp) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (id == arr.size() || target < 0)
            return;

        // Take
        if (arr[id] <= target) {
            temp.push_back(arr[id]);

            findSum(id + 1, arr, target - arr[id], ans, temp);

            temp.pop_back();
        }

        // Skip all duplicates
        int next = id + 1;

        while (next < arr.size() && arr[next] == arr[id])
            next++;

        // Not Take
        findSum(next, arr, target, ans, temp);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        findSum(0, candidates, target, ans, temp);

        return ans;
    }
};