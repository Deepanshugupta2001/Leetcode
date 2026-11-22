class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> v;
        queue<TreeNode*> q;

        if(root == nullptr) return ans;

        q.push(root);
        q.push(nullptr);

        while(!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            if(front == nullptr) {
                ans.push_back(v);
                v.clear();

                if(!q.empty()) q.push(nullptr);
            }
            else {
                v.push_back(front->val);

                if(front->left != nullptr) q.push(front->left);
                if(front->right != nullptr) q.push(front->right);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};