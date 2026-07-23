/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void preorder(TreeNode* root, string &s) {
        if (!root) return;

        s += to_string(root->val) + " ";
        preorder(root->left, s);
        preorder(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s = "";
        preorder(root, s);
        return s;
    }

    TreeNode* build(vector<int>& pre, int &idx, int low, int high) {

        if (idx == pre.size())
            return NULL;

        if (pre[idx] < low || pre[idx] > high)
            return NULL;

        TreeNode* root = new TreeNode(pre[idx++]);

        root->left = build(pre, idx, low, root->val);
        root->right = build(pre, idx, root->val, high);

        return root;
    }

    TreeNode* deserialize(string data) {

        if (data.empty())
            return NULL;

        vector<int> pre;
        stringstream ss(data);
        int x;

        while (ss >> x)
            pre.push_back(x);

        int idx = 0;
        return build(pre, idx, INT_MIN, INT_MAX);
    }
};
