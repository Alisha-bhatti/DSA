class MyLinkedList {
public:

    class Node {
    public:
        int val;
        Node* next;

        Node(int x) {
            val = x;
            next = NULL;
        }
    };

    Node* head;
    int size;

    MyLinkedList() {
        head = NULL;
        size = 0;
    }

    int get(int index) {

        if(index < 0 || index >= size)
            return -1;

        Node* temp = head;

        while(index--) {
            temp = temp->next;
        }

        return temp->val;
    }

    void addAtHead(int val) {

        Node* node = new Node(val);
        node->next = head;
        head = node;
        size++;
    }

    void addAtTail(int val) {

        Node* node = new Node(val);

        if(head == NULL) {
            head = node;
            size++;
            return;
        }

        Node* temp = head;

        while(temp->next)
            temp = temp->next;

        temp->next = node;
        size++;
    }

    void addAtIndex(int index, int val) {

        if(index < 0 || index > size)
            return;

        if(index == 0) {
            addAtHead(val);
            return;
        }

        if(index == size) {
            addAtTail(val);
            return;
        }

        Node* temp = head;

        for(int i = 0; i < index - 1; i++)
            temp = temp->next;

        Node* node = new Node(val);

        node->next = temp->next;
        temp->next = node;

        size++;
    }

    void deleteAtIndex(int index) {

        if(index < 0 || index >= size)
            return;

        if(index == 0) {

            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        }

        Node* prev = head;

        for(int i = 0; i < index - 1; i++)
            prev = prev->next;

        Node* del = prev->next;

        prev->next = del->next;

        delete del;
        size--;
    }
};
