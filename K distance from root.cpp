/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    // function should print the nodes at k distance from root
    void solve(Node* root,vector<int>&ans,int d,int k){
        if(root==NULL) return;
        if(d==k){
            ans.push_back(root->data);
            return;
        }
        solve(root->left,ans,d+1,k);
        solve(root->right,ans,d+1,k);
    }
    vector<int> Kdistance(Node *root, int k) {
        // Your code here
        vector<int>ans;
        int d=0;
        solve(root,ans,d,k);
        return ans;
        
    }
};
