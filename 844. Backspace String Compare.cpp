class Solution {
public:

    string processString(string str){
        string res="";
        for(char c:str){
            if(c=='#'){
                if(!res.empty())res.pop_back();
            }else{
                res.push_back(c);
            }
        }
        return res;
    }

    bool backspaceCompare(string s, string t) {

        return processString(s)==processString(t);


          //........using stack.........

        // stack<char>st1;
        // stack<char>st2;
        // for(char c:s){
        //     if(c!='#'){
        //         st1.push(c);
        //     }
        //     else{
        //         if(!st1.empty()) st1.pop();
        //     }
        // }
        // for(char c:t){
        //     if(c!='#'){
        //         st2.push(c);
        //     }
        //     else{
        //         if(!st2.empty()) st2.pop();
        //     }
        // }
        // if(st1==st2) return true;
        // return false;

    }
};
