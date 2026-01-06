class Solution {
public:
    bool vovelrotate(char key) {
        string vowel = "AEIOUaeiou";
        for (auto ch : vowel) {
            if (ch == key) {
                return true;
            }
        }
        return false;
    }
    string reverseVowels(string str) {
        int i = 0;
        int j = str.length() - 1;
        while (i < j) {
            while (i < str.length() - 1 && !vovelrotate(str[i]))
                i++;
            while (j > 0 && !vovelrotate(str[j]))
                j--;
            if (i < j) {
                swap(str[i], str[j]);
                i++;
                j--;
            }
        }
        return str;
    }
};