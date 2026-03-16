class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        for (int i = 0; i < s.size(); i++) {
            set<char> st;
            for (int j = 0 + i; j < s.size(); j++) {
                if (st.count(s[j])) {
                    break;
                }
                st.insert(s[j]);
                len = max(len, j - i + 1);
            }
        }
        return len;
    }
};