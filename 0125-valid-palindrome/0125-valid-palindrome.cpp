class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for (auto x : s) {
            if (isalnum(x)) {
                ans += tolower(x);
            }
        }
        int i = 0;
        int j = ans.size() - 1;
        while (i < j) {
            if (ans[i] != ans[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};