/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(!root) return NULL;
        int v=root->val;

        if((v>=p->val && v<=q->val) || (v>=q->val && v<=p->val)){
            return root;
        }
        if(v<p->val)return lowestCommonAncestor(root->right, p,q);
        return lowestCommonAncestor(root->left, p,q);

    }
};
