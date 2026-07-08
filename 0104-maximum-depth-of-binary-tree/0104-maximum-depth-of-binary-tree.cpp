class Solution {
public:
    int maxDepth(TreeNode* root) {

        // Base case
        if(root == NULL)
            return 0;

        // Find depth of left subtree
        int leftDepth = maxDepth(root->left);

        // Find depth of right subtree
        int rightDepth = maxDepth(root->right);

        // Return current depth
        return 1 + max(leftDepth, rightDepth);
    }
};