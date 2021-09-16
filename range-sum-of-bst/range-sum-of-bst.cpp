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
    void func(TreeNode* root,int low, int high){
        if(root==NULL)return;
        func(root->left,low,high);
        if(root->val>=low && root->val<=high)ans+=root->val;
        func(root->right,low,high);
        
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root->val==low){
            ans+=low;
            func(root->right,low,high);
        }
        else if(root->val==high){
            ans+=high;
            func(root->left,low,high);
        }
        else{
            func(root,low,high);
        }
        return ans;
    }
};