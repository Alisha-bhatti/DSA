/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
public:
    Node* sortedInsert(Node* head, int key) {

        Node* newNode = new Node(key);

        // Empty list
        if (head == NULL)
            return newNode;

        // Insert at beginning
        if (key <= head->data) {
            newNode->next = head;
            return newNode;
        }

        Node* temp = head;

        // Find correct position
        while (temp->next != NULL && temp->next->data < key) {
            temp = temp->next;
        }

        // Insert
        newNode->next = temp->next;
        temp->next = newNode;

        return head;
    }
};
