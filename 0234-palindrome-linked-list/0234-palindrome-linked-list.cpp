class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        bool flag = false;
        ListNode* temp = head;
        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        int i = v.size() - 1;
        vector<int> ans;
        while (i >= 0) {
            ans.push_back(v[i]);
            i--;
        }
        return (ans == v) ? true : false;
    }
};