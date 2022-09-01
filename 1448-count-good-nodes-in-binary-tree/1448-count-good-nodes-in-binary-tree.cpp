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
    int dfs(TreeNode* root, int data){
        if(root==NULL)
            return 0;
        int ans=0;
        if(root->val>=data){
            data=root->val;
            ans=1;
        }
        return ans+dfs(root->left,data)+dfs(root->right,data); 
    }
    
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};