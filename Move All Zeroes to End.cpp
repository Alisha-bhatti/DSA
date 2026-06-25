class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(arr[i]!=0) ans.push_back(arr[i]);
        }
        while(ans.size()<n){
            ans.push_back(0);
        }
        arr=ans;
    }
};
