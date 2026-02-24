/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        vector<int> store;
        while (temp != NULL) {
            store.push_back(temp->val);
            temp = temp->next;
        }
        int i = store.size() - 1;
        ListNode * remp = head;
        while (i >= 0) {
            remp->val = store[i];
            i--;
            remp = remp->next;
        }
        return head;
    }
};