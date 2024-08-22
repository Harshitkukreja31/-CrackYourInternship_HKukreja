class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> ans;
        if(k==0) return ans;
        int n=nums.size();
        int rm=n-k;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(rm>0 && !st.empty() && st.top()>nums[i]){
                st.pop();
                rm--;
            }
            st.push(nums[i]);
        }
        while(rm--){
            st.pop();
        }
        while(!st.empty()){
            int ele=st.top();
            ans.push_back(ele);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};