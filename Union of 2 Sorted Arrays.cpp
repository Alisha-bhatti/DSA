class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int>s;
        for(int i : a){
            s.insert(i);
        }
        for(int i : b){
            s.insert(i);
        }
        vector<int>ans(s.begin(),s.end());
        return ans;
    }
};
