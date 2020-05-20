class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* find = NULL;
        dfs(root, k, find);
        return find->val;
    }
    void dfs(TreeNode* root, int& k, TreeNode*& find)
    {
        if (find || !root) return;
        dfs(root->left, k, find);
        k --;
        if (k == 0){
            find = root;
            return;
        }
        dfs(root->right, k, find);
    }
};
