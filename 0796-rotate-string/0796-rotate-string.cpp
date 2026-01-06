class Solution {
public:
    bool rotateString(string s1, string g) {
        vector<char> s;
        vector<char> goal;
        for (auto x : s1) {
            s.push_back(x);
        }
        for (auto x : g) {
            goal.push_back(x);
        }
        int k = goal.size();
        int j = 0;
        while (k != 0) {
            char ch = goal[j];
            for (int i = 0; i < goal.size() - 1; i++) {
                goal[i] = goal[i + 1];
            }
            goal[goal.size() - 1] = ch;
            if (goal == s) {
                return true;
            }
            k--;
        }
        return false;
    }
};