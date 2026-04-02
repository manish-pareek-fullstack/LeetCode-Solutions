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
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*temp=NULL;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }    
        temp=slow->next;
        slow->next=NULL;
        ListNode*prev=NULL;
        ListNode*curr=temp;
        ListNode*front=head;
        while(curr!=NULL){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        ListNode*mid=head;
        ListNode*second=prev;
         while(second != NULL){
            if(mid->val != second->val){
                return false;
            }
            mid = mid->next;
            second = second->next;
        }
        return true;

        
    }
};