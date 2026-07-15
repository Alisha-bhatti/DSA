class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string s :operations){
            if(s=="C") st.pop();
            else if(s=="D"){
                int top=st.top();
                st.push(2*top);
            }
            else if(s=="+"){
                int top=st.top();
                st.pop();
                int secondTop=st.top();
                st.push(top);
                st.push(top+secondTop);
            }
             else st.push(stoi(s));

            }
            int sum=0;
            while(!st.empty()){
                sum+=st.top();
                st.pop();
            }
            return sum;
        
    }
};
