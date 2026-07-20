/* Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(!root) return 0;
        // if(!root->left)sumBT(root->right->data);
        // if(!root->right)sumBT(root->left->data);
        return sumBT(root->left)+sumBT(root->right)+root->data;
    }
};
