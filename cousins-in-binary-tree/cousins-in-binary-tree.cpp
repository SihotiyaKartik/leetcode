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
    int xdepth=-1;
    int ydepth=-1;
public:
    
    bool isCousins(TreeNode* root, int x, int y) {
        solve(root,x,y,0);
        return xdepth!=-1 && xdepth==ydepth;
    }
    void solve(TreeNode* root, int x, int y, int depth){
        if(!root)return;
        
        if(root->left && root->right && (root->left->val==x || root->left->val==y) && (root->right->val==y || root->right->val==x)){return;}
        
        if(root->val == x){
            xdepth = depth;
            return;
        }
        if(root->val == y){
            ydepth = depth;
            return;
        }
        solve(root->left,x,y,depth+1);
        solve(root->right,x,y,depth+1);
        
    }
};