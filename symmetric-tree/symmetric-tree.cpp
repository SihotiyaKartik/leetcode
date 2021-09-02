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
    void trav(TreeNode* p, TreeNode* q){
        if(!p && !q)return;
        else if(!p || !q){flag = false;return;}
        else if(p->val != q->val){flag=false;return;}
        trav(p->left,q->right);
        trav(p->right,q->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        
        trav(root->left,root->right);
        return flag;
    }
};