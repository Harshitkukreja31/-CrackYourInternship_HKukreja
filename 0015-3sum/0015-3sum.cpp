class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> final;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0;
        int r=0;
        for(int i=0;i<n-1;i++){
            l=i+1;
            r=n-1;
            while(l<r){
                if(nums[l]+nums[r]+nums[i]==0){
                    vector<int> temp={nums[l],nums[i],nums[r]};
                    ans.insert(temp);
                    l++;
                    r--;
                }
                else if(nums[l]+nums[r]+nums[i]>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        for(auto s:ans){
            final.push_back(s);
        }

        return final;
    }
};