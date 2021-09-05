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
    int res = INT_MAX;
    void cal(TreeNode* root, int a){
        if(root==NULL)return;
        a++;
        if(!root->left && !root->right)res = min(a,res);
        cal(root->left,a);
        cal(root->right,a);
        
    }
    int minDepth(TreeNode* root) {
        if(root == NULL)return 0;
        cal(root,0);
        return res;
    }
};