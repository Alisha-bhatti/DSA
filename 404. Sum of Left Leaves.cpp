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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        TreeNode* l=root->left;
        int curr=0;
        if(l!=NULL and l->right==NULL and l->left==NULL){
            curr=l->val;
        }
        return curr + sumOfLeftLeaves(root->right)+sumOfLeftLeaves(root->left);
    }
};
