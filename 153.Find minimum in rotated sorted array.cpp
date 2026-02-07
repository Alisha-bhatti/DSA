class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(); 
        // ....using binary search....
        int l=0;
        int h=n-1;
        int ans=INT_MAX;
        while(l<=h){
            if(nums[l]<=nums[h]){
                ans=min(ans,nums[l]);
                break;
            }
            int mid=l+(h-l)/2;
            if(nums[l]<=nums[mid]){
                ans=min(ans,nums[l]);
                l=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                h=mid-1;
            }
        }
        return ans;

        // .....using brute force approach....

        // int ans=nums[0];
        // for(int i=0;i<n;i++){
        //     if(ans>nums[i]){
        //         ans=nums[i];
        //     }
        // }
        // return ans;
    }
};
