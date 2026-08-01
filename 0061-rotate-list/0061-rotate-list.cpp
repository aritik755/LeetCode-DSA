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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int n = 0;
        ListNode* tail = head;
        while(tail->next != NULL){
            n++;
            tail = tail->next;
        }
        n++;
        k = k % n;
        if(k == 0) return head;
        tail->next = head;
        ListNode* temp = head;
        for(int i = 0; i < (n-k-1); i++){
            temp = temp->next;
        }
        ListNode* new_head = temp->next;
        temp->next = NULL;
        return new_head;
    }
};