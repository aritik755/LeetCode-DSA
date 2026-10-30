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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* helper(ListNode* stPtr, ListNode* endPtr){
        if(stPtr == endPtr) return NULL;

        if(stPtr == NULL) return NULL;
        
        if(stPtr->next == endPtr) return new TreeNode(stPtr->val);
        
        ListNode* slowPtr = stPtr;
        ListNode* fastPtr = stPtr;
        
        while(fastPtr != endPtr && fastPtr->next != endPtr){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        ListNode* midPtr = slowPtr;
        
        ListNode* amid = midPtr->next;
        
        TreeNode* root = new TreeNode(midPtr->val);
        root->left = helper(stPtr, midPtr);
        root->right = helper(amid, endPtr);

        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL;
       
        return helper(head, NULL);
    }
};