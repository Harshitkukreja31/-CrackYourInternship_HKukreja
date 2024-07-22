class Solution {
public:
    int pivotElement(vector<int>& nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int mid;
        while(s<e){
            mid=s+(e-s)/2;
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot=pivotElement(nums);
        int s=0;
        int e=n-1;
       
        
        if(target>=nums[pivot] && target<=nums[e]){
                s=pivot;
        }
        else{
            e=pivot-1;
        }
        
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
};