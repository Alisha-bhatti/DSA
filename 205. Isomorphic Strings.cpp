class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,char>sTot;
        unordered_map<int,char>tTos;
        int n=s.length();
        for(int i=0;i<n;i++){
            sTot[s[i]]=t[i];
            tTos[t[i]]=s[i];

        }
        for(int i=0;i<n;i++){
             if(sTot[s[i]]!=t[i] || tTos[t[i]]!=s[i]){
                return false;
             }
        }
        return true;
    }
};
