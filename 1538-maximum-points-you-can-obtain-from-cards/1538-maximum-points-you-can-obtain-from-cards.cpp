class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> prefix;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int ans=sum;
        int n=cardPoints.size();
        int i=k-1;
        int j=n-1;
        while(i>=0 && j>=0){
            sum=sum-cardPoints[i]+cardPoints[j];
            ans=max(ans,sum);
            i--;
            j--;
        }
        return ans;
    }
};