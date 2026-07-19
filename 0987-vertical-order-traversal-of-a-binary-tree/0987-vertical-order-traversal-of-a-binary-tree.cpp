class Solution {
public:
    map<int, map<int, multiset<int>>> mp;

    void dfs(TreeNode* root, int row, int col) {
        if (root == nullptr)
            return;

        mp[col][row].insert(root->val);

        dfs(root->left, row + 1, col - 1);
        dfs(root->right, row + 1, col + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        dfs(root, 0, 0);

        vector<vector<int>> ans;

        for (auto &col : mp) {

            vector<int> temp;

            for (auto &row : col.second) {

                for (auto val : row.second) {

                    temp.push_back(val);

                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};