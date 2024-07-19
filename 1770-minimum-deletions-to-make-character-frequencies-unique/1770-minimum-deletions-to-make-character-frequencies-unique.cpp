class Solution {
public:
    int minDeletions(string s) {
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<int> v;
        for(auto it:mp){
            v.push_back(it.second);
        }
        int ans=0;
        set<int>st;
        for(int i=0;i<v.size();i++){
            if(st.find(v[i])==st.end()) st.insert(v[i]);
            else{
                while(st.find(v[i])!=st.end()){
                    v[i]--;
                    ans++;
                }
                if(v[i]!=0) st.insert(v[i]);
            }
        }
        return ans;

    }
};