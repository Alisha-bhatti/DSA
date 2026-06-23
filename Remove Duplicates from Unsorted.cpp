class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        set<int>s;
        for(int i:arr){
            if(s.find(i)==s.end()){
                ans.push_back(i);
                s.insert(i);
            }
        }
        ;
        return ans;
    }
};
