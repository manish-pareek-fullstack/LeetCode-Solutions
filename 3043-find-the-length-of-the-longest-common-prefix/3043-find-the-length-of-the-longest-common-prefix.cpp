class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> s;
        for (auto x : arr1) {
            string num = to_string(x);
            string ans = "";
            for (auto ch : num) {
                ans += ch;
                s.insert(ans);
            }
        }
        int len = 0;
        for (auto x : arr2) {
            string num = to_string(x);
            string prefix = "";
            for (auto ch : num) {
                prefix += ch;
                if (s.count(prefix)) {
                    len = max(len, (int)prefix.size());
                }
            }
        }
        return len;
    }
};