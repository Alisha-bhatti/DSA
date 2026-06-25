class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            int st=i+1;
            int end=n-1;
            
            while(st<end){
                int sum=arr[i]+arr[st]+arr[end];
                if(sum==target) return true;
                else if(sum<target) st++;
                else if(sum>target) end--;
            }
        }
        
        return false;
    }
};
