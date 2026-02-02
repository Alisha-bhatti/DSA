class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string s1="";
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                s1+=tolower(s[i]);
            }
        }

        string s2="";
        for(int i=s1.size()-1;i>=0;i--){
            s2+=s1[i];
        }
       
        return s1==s2;
    }
};
