class Solution {
  public:
  
    bool canPlace(vector<int> &stalls, int k, int dist){
        int n=stalls.size();
        int prev=stalls[0];
        int count =1;
        for(int i=0;i<n;i++){
            int curr=stalls[i];
            if(abs(curr-prev)>=dist){
                count++;
                prev=curr;
            }
            
        }
        return count >=k;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int high=stalls[n-1]-stalls[0];
        int low=0;
        int ans=high;
        
        // for(int i=high;i>=1;i--){
        //     if(canPlace(stalls,k,i)) return i;
        // }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canPlace(stalls,k,mid)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
        
          
    }
};
