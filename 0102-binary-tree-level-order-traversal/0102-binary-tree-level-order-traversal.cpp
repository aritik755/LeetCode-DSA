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
    vector<vector<int>> ans;
    void levelOrderTraversal(TreeNode* root){
        if (root == NULL) return;
        queue<TreeNode*> q;
        q.push(root);

        while(q.size() > 0){
            int n = q.size();
            vector<int> temp;

            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
            } 
        ans.push_back(temp);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        ans.clear();
        levelOrderTraversal(root);
        return ans;
    }
};