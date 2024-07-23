// class Solution {
// public:
//     void helper(vector<int>& candidates,int target,int idx,vector<int>& temp,vector<vector<int>>& ans,int& sum){
//         if(idx==candidates.size()){
//             return;
//         }
//         if(sum>target) return;
//         if(sum==target){
//             ans.push_back(temp);
//             return;
//         }
//         sum+=candidates[idx];
//         temp.push_back(candidates[idx]);
//         idx++;
//         helper(candidates,target,idx,temp,ans,sum);
//         idx--;
//         temp.pop_back();
//         sum-=candidates[idx];
//     }
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         int idx=0;
//         int sum=0;
//         helper(candidates,target,idx,temp,ans,sum);
//         return ans;
//     }
// };
class Solution {
public:
    void helper(vector<int>& candidates, int target, int idx, vector<int>& temp, vector<vector<int>>& ans, int sum) {
        if (sum == target) {
            ans.push_back(temp);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            // Skip duplicates
            if (i > idx && candidates[i] == candidates[i - 1]) continue;
            // Break early if the sum would exceed the target
            if (sum + candidates[i] > target) break;
            temp.push_back(candidates[i]);
            helper(candidates, target, i + 1, temp, ans, sum + candidates[i]);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end()); // Sort to handle duplicates
        helper(candidates, target, 0, temp, ans, 0);
        return ans;
    }
};
