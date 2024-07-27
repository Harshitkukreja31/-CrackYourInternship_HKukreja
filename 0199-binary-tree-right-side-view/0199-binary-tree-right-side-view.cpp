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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int s=q.size();
            int n=s;
            int flag=0;
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                n--;
                if(n==0){
                    level++;
                    flag=1;
                }
                if(flag==1){
                    ans.push_back(temp->val);
                    flag=0;
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
};