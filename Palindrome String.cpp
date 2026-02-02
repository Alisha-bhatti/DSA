class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int n=s.size();
        string s1="";
        for(int i=n-1;i>=0;i--){
            s1+=s[i];
            
        }
        if(s1==s){
            return true;
        }
        else{
            return false;
        }
    }
};
