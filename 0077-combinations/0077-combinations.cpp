class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int>& temp,int n,int k,int cin){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int i=cin;i<=n;i++){
            temp.push_back(i);
            helper(ans,temp,n,k,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans,temp,n,k,1);
        return ans;
    }
};