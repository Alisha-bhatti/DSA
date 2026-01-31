class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int windowsize=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<=k) windowsize++;
        }
        int swaps=0;
        for(int i=0;i<windowsize;i++){
            if(arr[i]>k)swaps++;
        }
        int ans=swaps;
        for(int i=0;i<n-k;i++){
            if(arr[i]>k)swaps--;
            if(arr[i+k]>k)swaps++;
            ans=min(ans,swaps);
            
        }
        return ans;
    }
};
