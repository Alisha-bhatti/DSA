class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        int st=0;
        int mid=0;
        int end=n-1;
        while(mid<=end){
            if(arr[mid]==0) swap(arr[mid],arr[st]), st++,mid++;
            else if(arr[mid]==1) mid++;
            else if(arr[mid]==2) swap(arr[mid],arr[end]), end--;
        }
    }
};
