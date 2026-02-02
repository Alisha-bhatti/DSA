class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        unordered_map<char,int>mp;
        unordered_map<char,int>np;
        if(n1!=n2) return false;
        for(char it:s){
            mp[it]++;
        }
        for(char it:t){
            np[it]++;
        }
        for(auto it:mp){
            if(it.second!=np[it.first]){
                return false;
            }
        }
        return true;

        // .....can be done with sorting....
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
    }
};
