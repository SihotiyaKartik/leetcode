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
    bool flag = true;
    int abs(int a,int b){
       return (a>b)?a-b:b-a; 
    }
    int trav(TreeNode* temp){
        if(temp == NULL) return  0;
        int l = trav(temp->left);
        int r = trav(temp->right);
        if(abs(l,r) > 1)flag = false;
        return max(l,r)+1;
        
    }
    
    bool isBalanced(TreeNode* root) {
        
        int res = trav(root);
        return flag;
    }
};