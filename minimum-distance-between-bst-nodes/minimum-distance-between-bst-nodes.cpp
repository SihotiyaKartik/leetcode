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
     int num = INT_MAX;
    TreeNode* temp = NULL;
    int trav(TreeNode* root){
        if(root->left)trav(root->left);
        if(temp){
            num = min(num,root->val - temp->val);
            
        }
        temp = root;
        if(root->right)trav(root->right);
        return num;
    }
   
    int minDiffInBST(TreeNode* root) {
        int res = trav(root);
        return res;
    }
};