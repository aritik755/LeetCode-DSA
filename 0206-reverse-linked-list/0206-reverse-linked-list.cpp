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
        ListNode* currentPtr = head;
        ListNode* prevPtr = NULL;
        while(currentPtr != 0){
            ListNode* nextPtr = currentPtr->next;
            currentPtr->next = prevPtr;
            prevPtr = currentPtr;
            currentPtr = nextPtr;
        }
        return prevPtr;
    }
};