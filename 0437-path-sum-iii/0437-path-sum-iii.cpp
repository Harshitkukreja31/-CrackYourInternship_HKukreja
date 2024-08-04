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
    int count=0;
    void pathsumroot(TreeNode* root,int target,long sum,int& count){
        if(!root)return;
        sum+=root->val;
        if(sum==target) count++;
        pathsumroot(root->left,target,sum,count);
        pathsumroot(root->right,target,sum,count);
    }
    int pathSum(TreeNode* root, int targetsum) {
        if(!root) return 0;
        pathsumroot(root,targetsum,0,count);
        pathSum(root->left,targetsum);
        pathSum(root->right,targetsum);
        return count;
    }
};