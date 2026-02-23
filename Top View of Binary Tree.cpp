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
    vector<int> topView(Node *root) {
        // code here
        map<int,vector<int>>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        int vlevel=0;
        while(!q.empty()){
            Node* curr=q.front().first;
            int vlevel=q.front().second;
            mp[vlevel].push_back(curr->data);
            q.pop();
            if(curr->left)q.push({curr->left,vlevel-1});
            if(curr->right)q.push({curr->right,vlevel+1});
        }
        vector<int>ans;
        for(auto it:mp){
            ans.push_back(it.second[0]);
        }
        return ans;
    }
};
