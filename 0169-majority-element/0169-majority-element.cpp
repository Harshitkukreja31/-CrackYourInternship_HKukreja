class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans=0;
        int max=-1;
        for(auto i:freq){
            if(i.second>max){
                max=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};