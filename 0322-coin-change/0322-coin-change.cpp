class Solution {
public:
    // int memo(vector<int>& coins, int amount){
    //     if(amount==0){
    //         return 0;
    //     }
    //     if(amount<0){
    //         return INT_MAX;
    //     }
    //     int ans=INT_MAX;
    //     for(int i=0;i<coins.size();i++){
    //         int minCoins=memo(coins,amount-coins[i]);
    //         if(ans!=INT_MAX){
    //             ans=min(ans,minCoins+1);
    //         }
    //     }
    //     return ans;
    // }
    int coinChange(vector<int>& coins, int amount) {
        // int ans=memo(coins,amount);
        vector<int>dp(amount+1,amount+1);
        // if(ans==INT_MAX){return -1;}
        // return ans;
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            for(auto coin: coins){
                if(coin<=i){
                    dp[i]=min(dp[i],dp[i-coin]+1);
                }
            }
        }
        return dp[amount]==amount+1 ?-1 :dp[amount];
    }
};
// class Solution {
// public:
//     int help(vector<int>& coins, int amount, int n)
//     {
//         if(amount == 0) return 0;
//         if(n < 0 || amount < 0) return INT_MAX-1;
//         int one = help(coins,amount,n-1);
//         int two = 1+help(coins,amount-coins[n],n);
//         return min(one,two);
//     }
    
//     int coinChange(vector<int>& coins, int amount) {
//         int ans = help(coins,amount,coins.size()-1);
//         return (ans < INT_MAX-1)?ans:-1;
//     }
// };