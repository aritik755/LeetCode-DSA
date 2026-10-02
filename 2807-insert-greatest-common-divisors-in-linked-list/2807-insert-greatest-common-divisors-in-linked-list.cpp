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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* prevPtr = head;
        ListNode* currPtr = head->next;
        while(currPtr){
            int result = gcd(prevPtr->val, currPtr->val);
            ListNode* newNode = new ListNode(result);
            prevPtr->next = newNode;
            newNode->next = currPtr;
            currPtr = currPtr->next;
            prevPtr = prevPtr->next->next;
        }
        return head;
    }
};