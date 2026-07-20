class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        int n=q.size();
        queue<int>temp_q;
        int half=n/2;
        for(int i=0;i<half;i++){
            temp_q.push(q.front());
            q.pop();
        }
        while(!temp_q.empty()){
            q.push(temp_q.front());
            temp_q.pop();
            q.push(q.front());
            q.pop();
        }
        
    }
};
