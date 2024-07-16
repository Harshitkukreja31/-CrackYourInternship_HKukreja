class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> result=new ArrayList<>();
        Set<List<Integer>> s=new HashSet<>();
        Arrays.sort(nums);

        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                int l=j+1;
                int k=nums.length-1;
                while(l<k){
                    long sum=(long) nums[i]+nums[j]+nums[l]+nums[k];
                    if(sum==target){
                        List<Integer> arr=new ArrayList<>();
                        arr.add(nums[i]);
                        arr.add(nums[j]);
                        arr.add(nums[l]);
                        arr.add(nums[k]);
                        if(!s.contains(arr)){
                            s.add(arr);
                        }
                        l++;
                        k--;
                    }
                    else if(sum<target){
                        l++;
                    }
                    else if(sum>target){
                        k--;
                    }
                }
            }
        }
        for(List<Integer> a:s){
            result.add(a);
        }
        
        return result;
    }
}