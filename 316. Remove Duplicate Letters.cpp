class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size();
        vector<int>last(26,-1);
        vector<int>seen(26,false);
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
        }
        stack<int>st;
        string ans="";
        for(int i=0;i<n;i++){
            if(seen[s[i]-'a'])continue;
            while(!st.empty() && s[i]<st.top() && last[st.top()-'a']>i){
                seen[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            seen[s[i]-'a']=true;
        }
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};

