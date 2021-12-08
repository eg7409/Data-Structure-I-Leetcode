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
    
    map<int,int> m;
    
    bool solve(TreeNode*root,int k){
        if(root==NULL){
            return false;
        }
        
        if(m.find(k-root->val) != m.end()){
            return true;
        }
        
        m[root->val] = root->val;
        
        return solve(root->left,k) || solve(root->right,k);
    }
    bool findTarget(TreeNode* root, int k) {
        
        return solve(root,k);
    }
};
