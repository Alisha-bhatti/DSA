/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head==NULL) return head;
        
        if(x==1){
            Node* temp=head;
            head=head->next;
            delete(temp);
            return head;
        }
        Node* curr=head;
        // if(temp==NULL) return head;
        for(int i=1;i<x-1;i++){
            curr=curr->next;
            
        }
        if(curr==NULL && curr->next==NULL) return head;
        curr->next=curr->next->next;
        return head;
        
    }
};
