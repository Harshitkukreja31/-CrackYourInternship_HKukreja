class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n,0);
        ugly[0]=1;
        int i2=0;
        int i3=0;
        int i5=0;
        int nextMultiple2=ugly[i2]*2;
        int nextMultiple3=ugly[i3]*3;
        int nextMultiple5=ugly[i5]*5;
        int next_ugly_no=ugly[0];
        for(int i=1;i<n;i++){
            next_ugly_no=min(nextMultiple2,min(nextMultiple3,nextMultiple5));
            ugly[i]=next_ugly_no;
            if(next_ugly_no==nextMultiple2){
                i2+=1;
                nextMultiple2=ugly[i2]*2;
            }
            if(next_ugly_no==nextMultiple3){
                i3+=1;
                nextMultiple3=ugly[i3]*3;
            }
            if(next_ugly_no==nextMultiple5){
                i5+=1;
                nextMultiple5=ugly[i5]*5;
            }
        }
        return next_ugly_no;

    }
};