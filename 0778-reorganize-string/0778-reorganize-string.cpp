class Solution {
public:
    string reorganizeString(string s) {
        string ans="";
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        priority_queue<pair<int,int>> pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(pq.size()>1){
            int freq1=pq.top().first;
            int char1=pq.top().second;
            pq.pop();
            int freq2=pq.top().first;
            int char2=pq.top().second;
            pq.pop();
            ans+=char1;
            ans+=char2;
            freq1--;
            freq2--;
            if(freq1!=0)    pq.push({freq1,char1});
            if(freq2!=0)    pq.push({freq2,char2});
        }
        if(pq.size()==1){
            int freq=pq.top().first;
            int ele=pq.top().second;
            pq.pop();
            if(freq==1)
                ans+=ele;
            else return "";
        }
        return ans;
    }
};