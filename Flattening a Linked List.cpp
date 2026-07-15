/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
}; */

class Solution {
  public:
  
    Node* mergeTwoLists(Node* head1, Node* head2) {
        if(head1==NULL)return head2;
        if(head2==NULL)return head1;
        
        if(head1->data<=head2->data){
            head1->bottom=mergeTwoLists(head1->bottom,head2);
            return head1;
        }
        else{
            head2->bottom=mergeTwoLists(head1,head2->bottom);
            return head2;
        }
        
    }
    Node *flatten(Node *root) {
        // code here
        if(root==NULL) return root;
        Node *head2=flatten(root->next);
        return mergeTwoLists(root,head2);
        
    }
};
