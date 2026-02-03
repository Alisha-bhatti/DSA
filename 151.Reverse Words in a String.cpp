class Solution {
public:
    string reverseWords(string s) {
        vector<string>temp;
        int n=s.size();
        string word="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(word.size()>0){
                    temp.push_back(word);
                    word="";
                }
            }
                else{
                    word+=s[i];
                }
            }
            string ans="";
            if(word.size()>0)temp.push_back(word);
                
            for(int i=temp.size()-1;i>=0;i--){
                ans+=temp[i];
                if(i!=0){
                    ans+=" ";
                }
            }
        return ans;
    }
};
