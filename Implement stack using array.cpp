class myStack {
  public:
    int *arr;
    int idx;
    int capacity;
    myStack(int n) {
        // Define Data Structures
        capacity = n;
        arr = new int[n];   // allocate memory
        idx = -1;  
    }

    bool isEmpty() {
        // check if the stack is empty
        if(idx==-1){
            return true;
        }
        return false;
    }

    bool isFull() {
        // check if the stack is full
         if(idx==capacity-1){
            return true;
        }
        return false;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(isFull()){
            return;
        }
        idx++;
        arr[idx]=x;
        
    }

    void pop() {
        // removes an element from the top of the stack
        if(isEmpty()){
            return;
        }
        idx--;
    }

    int peek() {
        // Returns the top element of the stack
        if(isEmpty()){
            return -1;
        }
        return arr[idx];
        
    }
};
