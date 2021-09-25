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
    TreeNode* constructUtil(vector<int> v,int* preIndex,int key,int min,int max,int size){
        if(*preIndex >= size)return NULL;
        TreeNode* root = NULL;
        
        if(key>min && key<max){
            root = new TreeNode(key);
            *preIndex = *preIndex + 1;
            
            if(*preIndex < size){
                root->left = constructUtil(v,preIndex,v[*preIndex],min,key,size);
                
            }
            if(*preIndex < size){
                root->right = constructUtil(v,preIndex,v[*preIndex],key,max,size);
            }
            
        }
        return root;
        
    }
    
    TreeNode* construct(vector<int> vec,int size){
        int preIndex = 0;
        return constructUtil(vec,&preIndex,vec[0],INT_MIN,INT_MAX,size);
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* root = construct(preorder,preorder.size());
        return root;
    }
};