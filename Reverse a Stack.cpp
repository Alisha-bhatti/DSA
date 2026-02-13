class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        stack<int>st1;
        while(st.empty()==false){
            int temp=st.top();
            st.pop();
            st1.push(temp);
        }
        stack<int>st2;
        while(st1.empty()==false){
            int temp=st1.top();
            st1.pop();
            st2.push(temp);
        }
        while(st2.empty()==false){
            int temp=st2.top();
            st2.pop();
            st.push(temp);
        }
        // return st;
    }
};
