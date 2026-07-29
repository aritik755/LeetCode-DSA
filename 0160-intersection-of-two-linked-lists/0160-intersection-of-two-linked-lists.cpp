/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getLength(ListNode* head){
        ListNode* temp = head;
        int length = 0;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        return length;
    }
    ListNode* moveHeadByk(ListNode* head, int k){
        ListNode* ptr = head;
        while(k-- && ptr){
            ptr = ptr->next;
        }
        return ptr;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = getLength(headA);
        int l2 = getLength(headB);

        ListNode* ptr1;
        ListNode* ptr2;
        if(l1>l2){
            int k = l1-l2;
            ptr1 = moveHeadByk(headA, k);
            ptr2 = headB;
        }
        else{
            int k = l2-l1;
            ptr1 = headA;
            ptr2 = moveHeadByk(headB, k);
        }
        while(ptr1 != NULL){
            if(ptr1 == ptr2){
                return ptr1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};