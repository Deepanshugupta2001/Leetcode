class Solution {
public:
    int ans = 0;

    int dfs(TreeNode* root) {
        if (root == NULL) {
            return INT_MIN;
        }

        int leftMax = dfs(root->left);
        int rightMax = dfs(root->right);

        int maximum = max(root->val, max(leftMax, rightMax));

        if (root->val == maximum) {
            ans++;
        }

        return maximum;
    }

    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return ans;
    }
};