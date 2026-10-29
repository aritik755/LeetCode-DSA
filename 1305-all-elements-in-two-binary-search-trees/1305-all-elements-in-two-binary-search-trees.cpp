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
    void inorder(TreeNode* root, vector<int> &l){
        if(root == NULL) return;

        inorder(root->left, l);
        l.push_back(root->val);
        inorder(root->right, l);
    }
    vector<int> merge(vector<int> &a, vector<int> &b){
        int i = 0, j = 0;
        vector<int> ans;

        while(i < a.size() && j < b.size()){
            if(a[i] <= b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else if(a[i] > b[j]){
                ans.push_back(b[j]);
                j++;
            }
        }

        while(i < a.size()){
            ans.push_back(a[i]);
            i++;
        }

        while(j < b.size()){
            ans.push_back(b[j]);
            j++;
        }

        return ans;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> l1;
        vector<int> l2;
        vector<int> res;

        inorder(root1, l1);
        inorder(root2, l2);

        return merge(l1,l2);
    }
};