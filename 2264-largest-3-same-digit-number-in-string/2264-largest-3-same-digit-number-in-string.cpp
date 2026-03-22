class Solution {
public:
    string largestGoodInteger(string num) {
        char maxdigit = ' ';
        for (int i = 0; i < num.size() - 2; i++) {
            if (num[i] == num[i + 1]) {
                if (num[i] == num[i + 2]) {
                    maxdigit = max(maxdigit, num[i]);
                }
            }
        }
        if (maxdigit == ' ')
            return "";
        return string(3, maxdigit);
    }
};