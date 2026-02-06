class Solution {
  public:
    bool check(vector<int>& arr,int i){
        if(i==0) return true;
        return ((arr[i]>=arr[i-1]) && check(arr,i-1));
    }
    bool isSorted(vector<int>& arr) {
        // code here
        int i=arr.size()-1;
        return check(arr,i);
        
    }
};
