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
    void helper(int& sum,TreeNode* root){
        if(!root) return;
        if(root->left && !root->left->right && !root->left->left){
            sum+=root->left->val;
        }
        helper(sum,root->left);
        helper(sum,root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        helper(sum,root);
        return sum;
    }
};