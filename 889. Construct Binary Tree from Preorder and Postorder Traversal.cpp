/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    unordered_map<int,int> mp;
    TreeNode* build(vector<int>& preorder, int preL, int preR,vector<int>& postorder, int postL, int postR) {

        if(preL > preR)return NULL;
        TreeNode* root = new TreeNode(preorder[preL]);
        if(preL == preR)return root;

        int leftRoot = preorder[preL + 1];
        int idx = mp[leftRoot];
        int leftSize = idx - postL + 1;

        root->left = build(preorder,preL + 1,preL + leftSize,postorder,postL,idx);
        root->right = build(preorder,preL + leftSize + 1,preR,postorder,idx + 1,postR - 1);

        return root;
    }

    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {

        for(int i = 0; i < postorder.size(); i++)
            mp[postorder[i]] = i;

        return build(preorder, 0, preorder.size() - 1,postorder, 0, postorder.size() - 1);
    }
};
