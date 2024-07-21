class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        for(int j=0;j<haystack.length();j++){
            if(haystack[j]==needle[i]){
                i++;
            }
            else{
                j=j-i;
                i=0;
            }
            if(i==needle.length()){
                return j-i+1;
            }
        }
        return -1;
    }
};