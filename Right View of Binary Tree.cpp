/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        //  code here
         vector<int>a;
        vector<vector<int>>ans;
         if(!root)return a;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int s=q.size();
            vector<int>temp;
            for(int i=0;i<s;i++){
                Node* curr=q.front();
                temp.push_back(curr->data);
                q.pop();
                if(curr->left != NULL) q.push(curr->left);
                if(curr->right != NULL) q.push(curr->right);
            }
            ans.push_back(temp);
        }
        for(vector<int>it:ans){
            int last=it[it.size()-1];
            a.push_back(last);
        }
        return a;
    }
};
