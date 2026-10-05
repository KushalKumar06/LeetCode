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

    vector<vector<int>>ans;

    void helper(TreeNode* root){
        queue<TreeNode*>q;

        if(root == NULL)
        return;

        q.push(root);

        while(q.size() > 0){
            int size = q.size();
            vector<int>temp;

            for(int i = 0;i<size; i++){
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);

                if(curr->left)
                q.push(curr->left);

                if(curr->right)
                q.push(curr->right);
            }
            ans.push_back(temp);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        helper(root);

        return ans;
    }
};