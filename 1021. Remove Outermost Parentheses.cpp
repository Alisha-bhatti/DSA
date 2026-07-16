class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int opened = 0;
        for (char c : s) {
            if (c == '(' && opened++ > 0) res += c;
            if (c == ')' && opened-- > 1) res += c;
        }
        return res;

  //............USING STACK...........

        // stack<char>st;
        // string res="";
        // for(char c:s){
        //     if(c=='('){
        //         if(!st.empty())res+=c;
        //         st.push(c);
        //     }else{
        //         st.pop();
        //         if(!st.empty())res+=c;
        //     }
        // }
        // return res;
    }
};
