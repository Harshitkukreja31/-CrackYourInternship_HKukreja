class Solution {
public:
    int numTrees(int n) {
        if(n==1 || n==0){
            return 1;
        }
        int countleft,countright,count=0;
        for(int i=0;i<n;i++){
            countleft=numTrees(i);
            countright=numTrees(n-i-1);
            count=count+countleft*countright;
        }
        return count;
    }
};