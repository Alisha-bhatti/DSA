class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        int n=s.size();
        unordered_map<char,int>mp;
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                string ans;
                ans+=s[i];
                return ans;
            }
        }
        return "-1";
        
    }
};
