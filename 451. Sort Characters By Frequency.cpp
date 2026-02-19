class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        // int ans=0;
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        map<int,vector<char>>freq;
        for(auto it:mp){
            freq[it.second].push_back(it.first);
        }
        string ans;
        for(auto it = freq.rbegin(); it != freq.rend(); ++it){
            for(char ch : it->second){
                for(int i = 0; i < it->first; i++){
                    ans += ch;
                }
            }
        }
        return ans;
    }
};
