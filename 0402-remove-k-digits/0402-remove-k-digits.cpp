class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()==k){
            return "0";
        }
        string ans;
        stack<char> st;
        for(int i=0;i<num.size();++i){
            while(k>0 && !st.empty() && st.top()>num[i]){
                st.pop();
                --k;
            }
            st.push(num[i]);
        }
        while(k--){
            st.pop();
        }
        while(!st.empty()){
            char c=st.top();
            ans+=c;
            st.pop();
        }
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]!='0'){
                break;
            }
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans.size()==0 ? "0" : ans;
    }
};