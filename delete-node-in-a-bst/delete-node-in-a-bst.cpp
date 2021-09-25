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
    TreeNode* minValue(TreeNode* root){
        TreeNode* curr = root;
        while(curr && curr->left != NULL){
            curr = curr->left;
        }
        return curr;
        
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return NULL;
        else if(key < root->val)root->left = deleteNode(root->left,key);
        else if(key > root->val)root->right = deleteNode(root->right,key);
        else{
            if(!root->right && !root->left){
                delete root;
                return NULL;
            }
            else if(!root->left){
                TreeNode* temp = root;
                root=root->right;
                delete temp;
                return root;
            }
            else if(!root->right){
                TreeNode* temp = root;
                root = root->left;
                delete temp;
                return root;
            }
            TreeNode* temp = minValue(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right,temp->val);
            
        }
        return root;
    }
};