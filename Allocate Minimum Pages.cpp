class Solution {
  public:
    bool canAllocate(vector<int>&arr,int k, int mid){
        int students = 1;
        int pages = 0;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > mid) return false;

            if(pages + arr[i] <= mid){
                pages += arr[i];
            }
            
            
            else{
                students++;
                pages = arr[i];
            }
        }
        return students <= k;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        int ans=0;
        if(arr.size()<k){
            return -1;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            
                if(canAllocate(arr,k,mid)){
                    ans=mid;
                    high=mid-1;
                }
                
                else{
                    low=mid+1;
                }
            
        }
        return ans;

        
    }
};
