class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false;
        vector<int>need(26,0);
        vector<int>window(26,0);

        for(int i=0;i<s1.length();i++){
            need[s1[i]-'a']++;
        }
        //first window;
        int k=s1.length();
        for(int i=0;i<k;i++){
            window[s2[i]-'a']++;
        }
        if(need==window) return true;
        for(int i=k;i<s2.length();i++){
            window[s2[i]-'a']++;
            window[s2[i-k]-'a']--;
            if(need==window) return true;
        }
        return false;
    }
};
