class Solution {
public:

    bool canMake(vector<int>&bloomDay,int m,int k, int mid){
        int flowers=0, bouq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                flowers++;
            }
            else flowers=0;
            if(flowers==k) bouq++,flowers=0;
        }
        return bouq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int st=0,end=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(canMake(bloomDay,m,k,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};
