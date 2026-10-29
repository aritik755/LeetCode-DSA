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
    void insert(TreeNode* root, vector<int> &l){
        if(root == NULL) return;

        insert(root->left, l);
        l.push_back(root->val);
        insert(root->right, l);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> l1;
        vector<int> l2;
        vector<int> res;

        insert(root1, l1);
        insert(root2, l2);

        for(int i = 0; i < l1.size(); i++){
            res.push_back(l1[i]);
        }
        for(int i = 0; i < l2.size(); i++){
            res.push_back(l2[i]);
        }

        sort(res.begin(), res.end());

        return res;

    }
};