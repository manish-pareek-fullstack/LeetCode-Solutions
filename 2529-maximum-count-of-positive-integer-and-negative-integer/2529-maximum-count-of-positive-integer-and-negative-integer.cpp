class Solution {
public:
    int maximumCount(vector<int>& num) {
        int countpositive = 0;
        int countnegative = 0;
        int max = 0;
        for (int i = 0; i <= num.size() - 1; i++) {
            if (num[i] > 0) {
                countpositive++;
            } else if (num[i] < 0) {
                countnegative++;
            }
        }
        if (countpositive > countnegative) {
            max = countpositive;
            return countpositive;
        } else {
            max = countnegative;
            return countnegative;
        }
    }
};