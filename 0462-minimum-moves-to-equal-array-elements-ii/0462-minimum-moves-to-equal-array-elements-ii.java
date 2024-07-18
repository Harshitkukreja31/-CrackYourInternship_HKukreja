class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int s=0;
        int e=nums.length-1;
        int ans=0;
        while(s<e){
            ans= ans+nums[e]-nums[s];
            e--;
            s++;
        }
        return ans;
    }
}