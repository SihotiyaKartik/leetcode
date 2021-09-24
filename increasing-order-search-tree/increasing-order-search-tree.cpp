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
    stack<TreeNode*> s;
    
    void fillStack(TreeNode* root){
        if(root == NULL) return;    
        fillStack(root->right);
        s.push(root);
        fillStack(root->left);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        fillStack(root);
        
        TreeNode *top,*curr;
        if(!s.empty()){
            top = s.top();s.pop(); 
            curr = top;
        }
        while(!s.empty()){
            TreeNode*  x = s.top();s.pop();
            curr->left = NULL;
            curr->right = x;
            curr = curr->right;
        }
        
        curr->left = curr->right = NULL;
        return top;
    }
};