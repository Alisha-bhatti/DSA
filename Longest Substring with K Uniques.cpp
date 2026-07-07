class Solution {
  public:
  

    int longestKSubstr(string &s, int k) {
        // code here
        int n=s.length();
        unordered_map<char,int>mp;
        int start=0,maxLen=-1;
        for(int end=0;end<n;end++){
            mp[s[end]]++;
            while(mp.size()>k){
                mp[s[start]]--;
                if(mp[s[start]]==0)mp.erase(s[start]);
                start++;
            }
            if(mp.size()==k)maxLen=max(maxLen,end-start+1);
        }
        return maxLen;
    }
};
