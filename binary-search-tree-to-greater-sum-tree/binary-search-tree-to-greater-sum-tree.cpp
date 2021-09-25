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
    int sum = 0;
    
    TreeNode* postorder(TreeNode* root){
        if(!root)return NULL;
        postorder(root->right);
        root->val+=sum;
        sum = root->val;
        postorder(root->left);
        return root;
        
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        if(!root)return NULL;
        root = postorder(root);
        return root;
    }
};