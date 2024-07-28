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
    void helper(vector<string>& ans,string temp,TreeNode* root){
        if(!root){
            return; 
        }
        temp+=to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(temp);
        }
        if(root->left){
            helper(ans,temp+"->",root->left);
        }
        if(root->right){
            helper(ans,temp+"->",root->right);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(ans,"",root);
        return ans;
    }
};