class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long even = 0;
        long long odd = 0;
        for (auto  x : nums) {
            long long new_even = max(even, odd + x);
            long long new_odd = max(odd, even - x);
            even = new_even;
            odd = new_odd;
        }
        return even;
    }
};