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
    unordered_map<int,int>mp;
    int postIdx;
    TreeNode* build(vector<int>& postorder,int st,int end){
        if(st>end)return NULL;
        int rootval=postorder[postIdx];
        postIdx--;
        TreeNode* root=new TreeNode(rootval);
        int mid=mp[rootval];
        root->right=build(postorder,mid+1,end);
        root->left=build(postorder,st,mid-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        postIdx=n-1;
        // if(n==0) return NULL;
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
        return build(postorder,0,n-1);
    }
};
