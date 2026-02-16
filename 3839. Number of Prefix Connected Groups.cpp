class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(string w:words){
            if(w.size()<k) continue;
            string s=w.substr(0,k);
            mp[s]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second>=2){
                count++;
            }
        }
        return count;
    }
};
