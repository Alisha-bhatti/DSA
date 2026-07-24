class maxHeap {
  private:
    // Initialize your data members

  public:
    void shiftUp(int i){              // i=index
        while(i>0 and max_heap[(i-1)/2]<max_heap[i])   {// if index<0 and parent<child then swap
            swap(max_heap[(i-1)/2],max_heap[i]);
            i=(i-1)/2;
        }
    }
    void shiftDown(int i){
        int larg=i;
        int left_child=2*i+1;     //left_child,right_child is index of left and right child
        int right_child=2*i+2;
        if(left_child<max_heap.size() && max_heap[left_child]>max_heap[larg]){
            larg=left_child;
        }
        if(right_child<max_heap.size() && max_heap[right_child]>max_heap[larg]){
            larg=right_child;
        }
        if(larg!=i){
            swap(max_heap[larg],max_heap[i]);
            shiftDown(larg);
        }
        
    }
    vector<int>max_heap;
    void push(int x) {
        // Insert x into the heap
        max_heap.push_back(x);
        shiftUp(max_heap.size()-1);
    }

    void pop() {
        // Remove the top (maximum) element 
        if(max_heap.empty())return;
        max_heap[0]=max_heap.back();
        max_heap.pop_back();
        shiftDown(0);     // 0 bcoz 0th index element is voilating the max heap property
    }

    int peek() {
        // Return the top element or -1 if empty
        if(max_heap.empty())return -1;
        return max_heap[0];
         
    }

    int size() {
        // Return the number of elements in the heap
        return max_heap.size();
    }
};
