/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
    Node* pred=NULL;
    Node *succ=NULL;
    void find(Node* root,int key){
        if(!root) return;
        if(key<root->data){
            succ=root;
            find(root->left,key);
        }
        else if(key>root->data){
            pred=root;
            find(root->right,key);
        }
        else{
            if(root->left){
                Node* p=root->left;
            while(p->right)p=p->right;
            pred=p;
            }
            
            if(root->right){
                Node *s=root->right;
            while(s->left)s=s->left;
            succ=s;
            }
            
        }
    }
    
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        pred=NULL;
        succ=NULL;
        find(root,key);
        return {pred,succ};
        
    }
};
