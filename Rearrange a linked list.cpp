/* Node Structure
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        // code here
        Node* odd=head, *even=head->next, *evenhead=even;
        while(even && even->next){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        // return head;
    }
};
