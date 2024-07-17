class Solution {
    public String reverseWords(String s) {
        String[] str= s.trim().split("\\s+");
        StringBuilder out=new StringBuilder();
        for(int k= str.length-1;k>0;k--){
            out.append(str[k]).append(" ");
        }
        return out.append(str[0]).toString();

    }
}