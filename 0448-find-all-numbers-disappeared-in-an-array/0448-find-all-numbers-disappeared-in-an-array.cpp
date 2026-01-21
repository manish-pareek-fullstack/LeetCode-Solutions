class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums){
        set<int> s;
        vector<int> ans;
        for (auto x : nums) {
            s.insert(x);
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (s.count(i) == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};