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
    ListNode* mergeSort(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        ListNode* head1 = mergeSort(head);
        ListNode* head2 = mergeSort(slow);
        ListNode* ans = merge(head1, head2);
        return ans;
    }
    ListNode* merge(ListNode* head1, ListNode* head2) {
        ListNode* ansHead = new ListNode(-1);
        ListNode* ansTail = ansHead;
        while(head1 != NULL && head2 != NULL) {
            if(head1->val <= head2->val){
                ansTail->next = new ListNode(head1->val);
                head1 = head1->next;
            }
            else{
                ansTail->next = new ListNode(head2->val);
                head2 = head2->next;
            }
            ansTail = ansTail->next;
        }
        while(head1 != NULL){
            ansTail->next = new ListNode(head1->val);
            head1 = head1->next;
            ansTail = ansTail->next;
        }
        while(head2 != NULL){
            ansTail->next = new ListNode(head2->val);
            head2 = head2->next;
            ansTail = ansTail->next;
        }
        ListNode* t1 = ansHead;
        ansHead = ansHead->next;
        t1->next = NULL;
        return ansHead;
    }
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};