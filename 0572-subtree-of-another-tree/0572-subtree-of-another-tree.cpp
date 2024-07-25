// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     bool helper(TreeNode* root,TreeNode* subRoot){
//         if(!root && !subRoot){
//             return true;
//         }
//         if(!root || !subRoot){
//             return false;
//         }
//         if(root->val==subRoot->val){
//             bool left=helper(root->left,subRoot->left);
//             bool right=helper(root->right,subRoot->right);
//             if(left==true && right ==true){
//                 return left && right;
//             }
            
//         }
//         bool l= helper(root->left,subRoot);
//         bool r=helper(root->right,subRoot);
//         return l||r;
//     }
//     bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//         if(!root && !subRoot){
//             return true;
//         }
//         if(!root || !subRoot){
//             return false;
//         }
        
//         return helper(root,subRoot);
//     }
// };
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
    bool helper(TreeNode* root, TreeNode* subRoot) {
        if (!root && !subRoot) {
            return true;
        }
        if (!root || !subRoot) {
            return false;
        }
        if (root->val == subRoot->val) {
            bool left = helper(root->left, subRoot->left);
            bool right = helper(root->right, subRoot->right);
            if (left && right) {
                return true;
            }
        }
        return false;
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) {
            return false;
        }
        if (helper(root, subRoot)) {
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
