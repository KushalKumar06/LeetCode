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

    bool helper(TreeNode* lTree, TreeNode* rTree){
        if(lTree == NULL || rTree == NULL)
        return lTree == rTree;

        bool right = helper(lTree->right, rTree->left);
        bool left = helper(lTree->left, rTree->right);

        return right && left && lTree->val == rTree->val;
    }

    bool isSymmetric(TreeNode* root) {
        TreeNode* lTree = root->right;
        TreeNode* rTree = root->left;

        return helper(lTree, rTree);
    }
};