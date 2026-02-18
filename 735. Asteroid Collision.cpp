class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        int n=ast.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(i>=0 && !st.empty() && st.top()<0 && ast[i]>0){
                int prevSize=abs(st.top());
                int currSize=ast[i];
                if(currSize>prevSize) st.pop();
                else if(currSize==prevSize){
                    st.pop();
                    i--;
                }
                else{
                    i--;
                }
            }
            if(i>=0){
                st.push(ast[i]);
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
