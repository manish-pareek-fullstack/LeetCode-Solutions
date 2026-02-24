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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int length = 0;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        int mid = length / 2;
        if (length == 1)
            return NULL;
        ListNode* prev = head;
        ListNode* agge = head;
        while (mid != 0) {
            prev = agge;
            agge = agge->next;
            mid--;
        }
        prev->next = agge->next;
        delete (agge);
        return head;
    }
};