class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
            string s = "";
            if ((num[i] - 0) % 2 == 1) {
                int j = 0;
                while (j <= i) {
                    s += num[j];
                    j++;
                }
                return s;
            }
        }
        return "";
    }
};