class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int summax=0;
        int summin=0;
        for(int i=0;i<n;i++){
           
            summax+=nums[i];
            summin+=nums[i];
            mini=min(mini,summin);
            maxi=max(maxi,summax);
             if(summax<0)summax=0;
            if(summin>0)summin=0;
        }
        if(maxi<0) return maxi;
        return max(maxi,(totalsum-mini));
    }
};
