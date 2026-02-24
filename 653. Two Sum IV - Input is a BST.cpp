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
    void inorder(TreeNode* root,vector<int>&vt){
        if(root==NULL) return;
        inorder(root->left,vt);
        vt.push_back(root->val);
        inorder(root->right,vt);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>vt;
        inorder(root,vt);
        int l=0;
        int h=vt.size()-1;
        while(l<h){
            int sum=vt[l]+vt[h];
            if(sum>k)h--;
            else if(sum<k)l++;
            else return true;
        }
        return false;
    }
};
