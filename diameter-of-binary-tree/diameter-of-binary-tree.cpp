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
    int ans = 0;
    int calc(TreeNode* root){
        if(!root)return 0;
        int l = calc(root->left);
        int r = calc(root->right);
        ans = max(ans,1+l+r);
        return max(l,r) + 1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
             if(!root)return 0;
             calc(root);
             return ans-1;   
    }
};