class Solution {
  public:
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* forword = NULL;

        while(curr!=NULL){
            forword = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forword;



        }
        return prev;
    }

    Node* reverseList(Node* head) {
        head = reverse(head);
        return head;
    }
};
