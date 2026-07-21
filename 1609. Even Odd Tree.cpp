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
    bool isEvenOddTree(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        bool evenLevel=true;
        while(!q.empty()){
            int n=q.size();
            int prev=evenLevel ? INT_MIN:INT_MAX;    //set a prev val to INT_MIN if level is even else vice-versa
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front();
                q.pop();
                int nodeVal=curr->val;    //takes the node val
                if(evenLevel && (nodeVal%2==0 || prev>=nodeVal)) return false;
                if(!evenLevel && (nodeVal%2 != 0 || prev<=nodeVal)) return false;
                prev=nodeVal;
                if(curr->left != NULL)q.push(curr->left);
                if(curr->right != NULL)q.push(curr->right);

            }
            evenLevel = !evenLevel;   //if it is a odd level
        }
        return true;

    }
};
