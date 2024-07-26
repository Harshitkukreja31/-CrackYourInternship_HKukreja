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
    TreeNode* helper(TreeNode* root1,TreeNode* root2){
        if(!root1 && !root2) return NULL;
        if(!root1 && root2) return root2;
        else if(root1 && !root2) return root1;
        int val1=root1->val;
        int val2=root2->val;
        TreeNode* root=new TreeNode(val1+val2);
        root->left=helper(root1->left,root2->left);
        root->right=helper(root1->right,root2->right);
        return root;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return helper(root1,root2);
    }
};