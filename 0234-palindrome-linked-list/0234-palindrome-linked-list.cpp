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
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        while(fastPtr && fastPtr->next){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        ListNode* prevPtr = slowPtr;
        ListNode* currPtr = slowPtr->next;
        slowPtr->next = NULL;
        while(currPtr){
            ListNode* next = currPtr->next;
            currPtr->next = prevPtr;
            prevPtr = currPtr;
            currPtr = next;
        }
        ListNode* head1 = head;
        ListNode* head2 = prevPtr;
        while(head2){
            if(head1->val != head2->val) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
};