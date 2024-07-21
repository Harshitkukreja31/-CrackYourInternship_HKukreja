class Solution {
public:
    int maxArea(vector<int>& arr) {
    int n=arr.size();
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<j){
        if(arr[i]<arr[j]) {
            ans=max(arr[i]*(j-i),ans);
            i++;
        }
        else if(arr[i]>arr[j]){
            ans=max(arr[j]*(j-i),ans);
            j--;
        }
        else{
            ans=max(arr[i]*(j-i),ans);
            i++;
            j--;
        }

    }
    return  ans;
        
    }
};