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
        if(head == NULL || head->next == NULL) return nullptr;
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        ListNode* prev = nullptr;
        while(fastPtr != NULL && fastPtr->next != NULL){
            prev = slowPtr;
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        prev->next = slowPtr->next;
        delete slowPtr;
        return head;
    }
};