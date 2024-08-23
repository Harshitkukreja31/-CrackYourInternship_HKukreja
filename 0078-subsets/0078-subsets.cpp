class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int>& temp,int idx,vector<int>& nums){
        if(idx==nums.size()){
            ans.push_back(temp);
            return;
        }
        helper(ans,temp,idx+1,nums);
        temp.push_back(nums[idx]);
        helper(ans,temp,idx+1,nums);
        temp.pop_back();
         
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans,temp,0,nums);
        return ans;
    }
};