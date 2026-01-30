class Solution {
public:
    bool canShip(vector<int>&weights, int cap,int days){
        int currdays=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>cap){
                currdays++;
                sum=weights[i];
            }
        }
        return currdays<=days;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            
                if(canShip(weights,mid,days)){
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
