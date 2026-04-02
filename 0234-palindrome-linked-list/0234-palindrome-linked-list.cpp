class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* front = head;

        while(curr != NULL){
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        vector<int> ans;
        temp = prev;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        return (v == ans);
    }
};