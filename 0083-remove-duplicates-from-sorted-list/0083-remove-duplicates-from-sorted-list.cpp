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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode* currentPtr = head;
        while(currentPtr && currentPtr->next){
            if(currentPtr->val == currentPtr->next->val){
                ListNode* temp = currentPtr->next;
                currentPtr->next = currentPtr->next->next;
                delete temp;
            }
            else{
                currentPtr = currentPtr->next;
            }
        }
        return head;
    }
};