// class Solution {
// public:
//     int integer(string a){
//         reverse(a.begin(),a.end());
//         int num=0;
//         for(int i=0;i<a.length();i++){
//             num+= (a[i]-'0')*pow(2,i);
//         }
//         return num;
//     }
//     string strconvert(int num){
//         string ans;
//         while(num>0){
//             ans.push_back((num%2)+'0');
//             num=num/2;
//         }
//         return ans;
//     }
//     string addBinary(string a, string b) {
//         int num1=integer(a);
//         int num2=integer(b);
//         int num3=num1+num2;
//         string ans=strconvert(num3);
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            
            result.push_back(sum % 2 + '0');
            carry = sum / 2;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
