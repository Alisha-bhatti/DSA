class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int windowsize=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)windowsize++;
        }
        int count1=0;
        for(int i=0;i<windowsize;i++){ //first window
            if(nums[i]==1)count1++;
        }
        int ans=count1;
        for(int i=0;i<n;i++){ //startingform second window i=0
            if(nums[i]==1) count1--;
            int k=(i+windowsize)%n;
            if(nums[k]==1)count1++;
            ans=max(ans,count1);
        }
        return windowsize-ans;
    }
};
