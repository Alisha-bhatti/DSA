class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        queue<char>q;
        int n=s.size();
    //     vector<string>ans;
    //     for(int i=0;i<n;i++){
    //         if(q.empty()){
    //             ans+=s[i];
    //         }
    //         while(!q.empty && s[i]==q.front()){
    //             q.pop();
    //             q.
    //         }
    //         if(!q.empty()){
    //             ans+=q.front();
    //         }
    //     }
    // return ans;
    unordered_map<char,int>freq;
    string ans="";
    for(auto it:s){
        freq[it]++;
        if(freq[it]==1){
            q.push(it);
        }
        while(!q.empty() and freq[q.front()]>1){
            q.pop();
        }
        if(q.empty()) ans+='#';
        else ans+=q.front();
    }
    return ans;
}
};
