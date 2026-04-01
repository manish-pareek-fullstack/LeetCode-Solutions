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
        ListNode*prev=NULL;
        ListNode*curnt=head;
        ListNode*front=head;
        while(curnt!=NULL){
            front=curnt->next; // aage ka link toda or front me store kiya 
            curnt->next=prev; //current ko aage leke gye 
            prev=curnt; // prev ko bhi aage leke gye 
            curnt=front; 
        }
        return prev;
    }
};