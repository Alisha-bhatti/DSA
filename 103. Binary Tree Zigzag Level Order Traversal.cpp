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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int s=q.size();
            vector<int>temp;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                temp.push_back(curr->val);
                q.pop();
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
                
            }  
            if(level%2 != 0) reverse (temp.begin(),temp.end());
            level++;
            ans.push_back(temp);
        }
        return ans;
    }
};
