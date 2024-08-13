class Solution {
public:
    string convertToTitle(int n) {
        string map = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans;
        while (n > 0) {
            int idx = (n - 1) % 26 + 1;
            ans.push_back(map[idx]);
            n = (n - 1) / 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
