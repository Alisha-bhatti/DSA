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
    vector<int> inorder(TreeNode* root,vector<int>&vt){
        if(!root) return {};
        inorder(root->left,vt);
        vt.push_back(root->val);
        inorder(root->right,vt);
        return vt;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>vt;
        inorder(root,vt);
        return vt[k-1];
    }
};
