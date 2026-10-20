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
    
    TreeNode* prev = NULL;
    TreeNode* first = NULL;
    TreeNode* sec = NULL;

    void inOrder(TreeNode* root){
        if(root == NULL)
        return;

        inOrder(root->left);

        if(prev != NULL && prev->val > root->val){
            if(first == NULL)
            first = prev;

            sec =  root;
        }

        prev = root;

        inOrder(root->right);
    }

    void recoverTree(TreeNode* root) {
        inOrder(root);

        int temp = sec->val;
        sec->val = first->val;
        first->val = temp;
    }
};