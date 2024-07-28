class Solution {
public:
    void helper(vector<string>& ans,int idx,int n,string temp,int left,int right){
        if(idx==2*n){
            ans.push_back(temp);
            return;
        }
        if(left<n){
            helper(ans,idx+1,n,temp+'(',left+1,right);
        }
        
        if(right<left){
            helper(ans,idx+1,n,temp+')',left,right+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(ans,0,n,"",0,0);
        return ans;
    }
};