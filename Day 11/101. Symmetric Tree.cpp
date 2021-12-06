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
    
    bool solve(TreeNode* n,TreeNode* m){
        
        if(n==NULL && m==NULL){
            return true;
        }
        
        if(n == NULL || m == NULL){
            return false;
        }
        
        if(n->val!=m->val){
            return false;
        }
        
        return solve(m->left,n->right) && solve(m->right,n->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        
        return solve(root->left,root->right);
    }
};
