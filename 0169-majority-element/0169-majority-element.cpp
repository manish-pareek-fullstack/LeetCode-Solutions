class Solution {
public:
    int majorityElement(vector<int>& v) {
        map<int, int> m;
        for (auto x : v) {
            m[x]++;
        }
        int size = v.size() / 2;
        int count=0;
        for (auto x : m) {
            if (x.second > size) {
               count=x.first;
               break;
            }
        }
        return count;
    }
};