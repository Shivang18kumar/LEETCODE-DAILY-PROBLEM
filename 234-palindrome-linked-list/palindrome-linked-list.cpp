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
    ListNode* reverser (ListNode* slow){
        ListNode* curr=slow;
        ListNode* prev= NULL;
        while(curr){
            ListNode* front = curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* second = reverser(slow);
        ListNode* first = head;
        while(second){
            if(second->val!=first->val) return false;
            first= first->next;
            second=second->next;
        }
        return true;
    }
};