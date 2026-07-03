class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        string a="";
        for(char ch:s){
            freq1[ch]++;
        }
        for(char ch:t){
            freq2[ch]++;
        }
         for(auto it : freq2){
            if(freq1[it.first] != it.second)
                return it.first;
        }

        return ' ';
    }
};
