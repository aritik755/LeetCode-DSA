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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == nullptr){return ans;}

        queue<TreeNode*> qu;
        qu.push(root);

        while(!qu.empty()){
            int currLevel = qu.size();
            vector<int> current;
            for(int i = 0; i < currLevel; i++){
                TreeNode* currNode = qu.front();
                qu.pop();
                current.push_back(currNode->val);
                if(currNode->left != nullptr){qu.push(currNode->left);}
                if(currNode->right != nullptr){qu.push(currNode->right);}
            }
            ans.push_back(current);
        }
        return ans;
    }
};