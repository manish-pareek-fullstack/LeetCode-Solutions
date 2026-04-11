class Solution {
public:
    void deleteNode(ListNode* node) {
        vector<int> v;

        // step 1: traverse from node (not head)
        ListNode* temp = node;
        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        // step 2: shift values left (overwrite nodes)
        ListNode* curr = node;
        for (int i = 1; i < v.size(); i++) {
            curr->val = v[i];
            curr = curr->next;
        }

        // step 3: delete last node
        ListNode* prev = node;
        while (prev->next != NULL && prev->next->next != NULL) {
            prev = prev->next;
        }

        delete prev->next;
        prev->next = NULL;
    }
};