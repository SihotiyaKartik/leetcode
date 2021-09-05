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
    bool flag = false;
    void cal(TreeNode* root,int a,int b){
        if(root==NULL)return ;
        a+=root->val;
        if(!root->left && !root->right){
            if(a==b)flag = true;
        }
        cal(root->left,a,b);
        cal(root->right,a,b);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return flag;
        cal(root,0,targetSum);
        return flag;
    }
};