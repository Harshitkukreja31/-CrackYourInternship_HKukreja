class Solution {
public:
    int helper(int n, vector<int>& memo) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (memo[n] != 0) return memo[n];
        
        memo[n] = helper(n - 1, memo) + helper(n - 2, memo);
        return memo[n];
    }

    int climbStairs(int n) {
        vector<int> memo(n + 1, 0);
        return helper(n, memo);
    }
};
