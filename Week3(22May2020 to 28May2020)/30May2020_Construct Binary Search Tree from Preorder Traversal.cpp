/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty()) {
            return nullptr;
        }
        
        TreeNode* head = new TreeNode(preorder[0]);
        stack<TreeNode*> larger({head});
        for (int i = 1; i < preorder.size(); i++) {
            TreeNode* curNode = new TreeNode(preorder[i]);
            if (preorder[i] < larger.top()->val) {
                larger.top()->left = curNode;
                larger.push(curNode);
                continue;
            }
            
            TreeNode* lastPopped;
            while (!larger.empty() && larger.top()->val < preorder[i]) {
                lastPopped = larger.top();
                larger.pop();
            }
            
            lastPopped->right = curNode;
            larger.push(curNode);
        }
        
        return head;
    }
};
