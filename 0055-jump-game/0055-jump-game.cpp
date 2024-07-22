class Solution {
public:
    bool memo(int i, vector<int>& nums,vector<int>& dp){
        if(i==nums.size()-1){
            return true;
        }
        if(nums[i]==0){
            return false;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        for(int j=1;j<=nums[i];j++){
            if(i+j<nums.size()&&memo(i+j,nums,dp)){
                return dp[i]=true;
            }
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return memo(0,nums,dp);
    }
};
