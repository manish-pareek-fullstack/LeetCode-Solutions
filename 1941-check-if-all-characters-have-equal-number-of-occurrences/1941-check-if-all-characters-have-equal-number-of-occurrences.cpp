class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> m;
        bool flag = false;
        for (auto x : s) {
            m[x]++;
        }
        int store = m[s[0]];
        for (auto x : m) {
            if (x.second != store) {
                return false;
            }
        }
        return true;
    }
};